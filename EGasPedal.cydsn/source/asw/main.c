/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "global.h"

#include "stdlib.h"
#include "tsk_io.h"
#include "tsk_control.h"
#include "tsk_system.h"
#include "pwm.h"
#include "joystick.h"
#include "watchdog.h"

//ISR which will increment the systick counter every ms
ISR(systick_handler)
{
    CounterTick(cnt_systick);
}

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
   
    //Set systick period to 1 ms. Enable the INT and start it.
	EE_systick_set_period(MILLISECONDS_TO_TICKS(1, BCLK__BUS_CLK__HZ));
	EE_systick_enable_int();
    WD_Start(CYWD_1024_TICKS);
    
    // Start Operating System
    for(;;)	    
    	StartOS(OSDEFAULTAPPMODE);
}

void unhandledException()
{
    //Ooops, something terrible happened....check the call stack to see how we got here...
    __asm("bkpt");
}

/********************************************************************************
 * Task Definitions
 ********************************************************************************/

TASK(tsk_init)
{
    
    //Init MCAL Drivers
    JOYSTICK_Init();
    UART_LOG_Start();
    PWM_Init();
    
    //Reconfigure ISRs with OS parameters.
    //This line MUST be called after the hardware driver initialisation!
    EE_system_init();
	
    //Start SysTick
	//Must be done here, because otherwise the isr vector is not overwritten yet
    EE_systick_start();  
	
    //Upon startup, showing (via the UART_LOG), if the system was rebooted after 
    //a power on reset (POR) or after a watchdog reset
    if(WD_CheckResetBit())
    {
        UART_LOG_PutString("System was reebooted after a watchdog reset");
    }
    else
    {
        UART_LOG_PutString("System was reebooted after a power on reset (POR)");
    }
    
    
    //Start the alarm callback every 1ms
    SetRelAlarm(alrm_callback,1,1);
    
    ActivateTask(tsk_control);
    ActivateTask(tsk_background);
    
    TerminateTask();
    
}

ALARMCALLBACK(Alr_CallBack) 
{
    ActivateTask(tsk_io);
    SetEvent(tsk_io, ev_1ms);
    ActivateTask(tsk_system);
}

TASK(tsk_background)
{
    while(1)
    {
        //do something with low prioroty
        //__asm("nop");

        //All runnables are alive
        WD_Trigger();
            
        
        
        
    }
    TerminateTask();
}


/********************************************************************************
 * ISR Definitions
 ********************************************************************************/

ISR2(isr_button_reset)
{
    
    if(WD_ResetButton_Read() == 1)
    {
        ShutdownOS(0);
    }
    
}
/* [] END OF FILE */
