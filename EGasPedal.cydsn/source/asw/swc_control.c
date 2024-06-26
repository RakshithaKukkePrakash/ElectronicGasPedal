/*
 * Filename: swc_control.c
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 *
 * description: Software component
 * name: swc_control
 * shortname: control
 *
 */

#include "project.h"
#include "global.h"
#include "rte.h"
#include "rte_types.h"
#include "swc_control.h"



/* USER CODE START SWC_CONTROL_INCLUDE */
#include "stdlib.h"
/* USER CODE END SWC_CONTROL_INCLUDE */


#include "sp_common.h"

/* USER CODE START SWC_CONTROL_USERDEFINITIONS */

/* USER CODE END SWC_CONTROL_USERDEFINITIONS */



/*
 * component: swc_control
 * cycletime: 0
 * description: Runnable for joystick
 * events: ev_joystick_onData
 * name: CONTROL_calcControl_run
 * shortname: calcControl
 * signalIN: so_joystick
 * signalOUT: so_speed
 * task: tsk_control
 */
void CONTROL_calcControl_run(RTE_event ev){
	
	/* USER CODE START CONTROL_calcControl_run */
    WD_Alive(1);
    SC_SPEED_data_t engineSpeed;

    sint8_t joystickValue = 0;
    //Error handling
    if(RTE_SC_JOYSTICK_getStatus(&SO_JOYSTICK_signal) == RTE_SIGNALSTATUS_VALID)
    {
        SC_JOYSTICK_data_t joystickData = RTE_SC_JOYSTICK_get(&SO_JOYSTICK_signal);
        joystickValue = joystickData.x_dir;
        if (joystickValue <= 0) {
            engineSpeed.speed_val = 0;
        }
        else
        {
            engineSpeed.speed_val = 2 * (joystickValue);   
        }
         RTE_SC_SPEED_set(&SO_SPEED_signal, engineSpeed);
        
    }
    else
    {
        engineSpeed.speed_val = joystickValue;
    }

    /* USER CODE END CONTROL_calcControl_run */
}

/* USER CODE START SWC_CONTROL_FUNCTIONS */

/* USER CODE END SWC_CONTROL_FUNCTIONS */

