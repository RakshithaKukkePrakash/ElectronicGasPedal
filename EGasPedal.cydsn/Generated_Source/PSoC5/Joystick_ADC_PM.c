/*******************************************************************************
* File Name: Joystick_ADC_PM.c
* Version 2.10
*
* Description:
*  This file contains the setup, control and status commands to support
*  component operations in low power mode.
*
* Note:
*
********************************************************************************
* Copyright 2012-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "Joystick_ADC.h"
#include "Joystick_ADC_SAR.h"
#if(Joystick_ADC_CLOCK_SOURCE == Joystick_ADC_CLOCK_INTERNAL)
    #include "Joystick_ADC_IntClock.h"
#endif   /* Joystick_ADC_CLOCK_SOURCE == Joystick_ADC_CLOCK_INTERNAL */


/*******************************************************************************
* Function Name: Joystick_ADC_Sleep
********************************************************************************
*
* Summary:
*  Stops the ADC operation and saves the configuration registers and component
*  enable state. Should be called just prior to entering sleep
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Side Effects:
*  None.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void Joystick_ADC_Sleep(void)
{
    Joystick_ADC_SAR_Stop();
    Joystick_ADC_SAR_Sleep();
    Joystick_ADC_Disable();

    #if(Joystick_ADC_CLOCK_SOURCE == Joystick_ADC_CLOCK_INTERNAL)
        Joystick_ADC_IntClock_Stop();
    #endif   /* Joystick_ADC_CLOCK_SOURCE == Joystick_ADC_CLOCK_INTERNAL */
}


/*******************************************************************************
* Function Name: Joystick_ADC_Wakeup
********************************************************************************
*
* Summary:
*  Restores the component enable state and configuration registers. This should
*  be called just after awaking from sleep mode
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Side Effects:
*  None.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void Joystick_ADC_Wakeup(void)
{
    Joystick_ADC_SAR_Wakeup();
    Joystick_ADC_SAR_Enable();

    #if(Joystick_ADC_CLOCK_SOURCE == Joystick_ADC_CLOCK_INTERNAL)
        Joystick_ADC_IntClock_Start();
    #endif   /* Joystick_ADC_CLOCK_SOURCE == Joystick_ADC_CLOCK_INTERNAL */

    /* The block is ready to use 10 us after the SAR enable signal is set high. */
    CyDelayUs(10u);
    
    Joystick_ADC_Enable();

    #if(Joystick_ADC_SAMPLE_MODE == Joystick_ADC_SAMPLE_MODE_FREE_RUNNING)
        Joystick_ADC_SAR_StartConvert();
    #endif /* (Joystick_ADC_SAMPLE_MODE == Joystick_ADC_SAMPLE_MODE_FREE_RUNNING) */

    (void) CY_GET_REG8(Joystick_ADC_STATUS_PTR);
}


/*******************************************************************************
* Function Name: Joystick_ADC_SaveConfig
********************************************************************************
*
* Summary:
*  Save the current configuration of ADC non-retention registers
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Side Effects:
*  None.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void Joystick_ADC_SaveConfig(void)
{

}


/*******************************************************************************
* Function Name: Joystick_ADC_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the configuration of ADC non-retention registers
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Side Effects:
*  None.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void Joystick_ADC_RestoreConfig(void)
{

}


/* [] END OF FILE */
