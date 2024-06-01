/*
 * Filename: swc_brakelight.c
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 *
 * description: Software component
 * name: swc_brakelight
 * shortname: brakelight
 *
 */

#include "project.h"
#include "global.h"
#include "rte.h"
#include "rte_types.h"
#include "swc_brakelight.h"



/* USER CODE START SWC_BRAKELIGHT_INCLUDE */

/* USER CODE END SWC_BRAKELIGHT_INCLUDE */


#include "sp_common.h"

/* USER CODE START SWC_BRAKELIGHT_USERDEFINITIONS */

/* USER CODE END SWC_BRAKELIGHT_USERDEFINITIONS */



/*
 * component: swc_brakelight
 * cycletime: 0
 * description: Runnable
 * events: ev_speed_onData
 * name: BRAKELIGHT_setBrakeLight_run
 * shortname: setBrakeLight
 * signalIN: so_speed
 * signalOUT: so_brake
 * task: tsk_control
 */
void BRAKELIGHT_setBrakeLight_run(RTE_event ev){
	
	/* USER CODE START BRAKELIGHT_setBrakeLight_run */
    SC_SPEED_data_t spd = RTE_SC_SPEED_get(&SO_SPEED_signal);
    SC_BRAKELIGHT_data_t brakeSig;
    if(spd.speed_val == 0)
    {
        brakeSig.brakeLight = TRUE;
        RTE_SC_BRAKELIGHT_set(&SO_BRAKE_signal, brakeSig);
        RTE_SC_BRAKELIGHT_pushPort(&SO_BRAKE_signal);
    }
    else
    {
        brakeSig.brakeLight = FALSE;
        RTE_SC_BRAKELIGHT_set(&SO_BRAKE_signal, brakeSig);
        RTE_SC_BRAKELIGHT_pushPort(&SO_BRAKE_signal);
    }
    
   
    

    /* USER CODE END BRAKELIGHT_setBrakeLight_run */
}

/* USER CODE START SWC_BRAKELIGHT_FUNCTIONS */

/* USER CODE END SWC_BRAKELIGHT_FUNCTIONS */

