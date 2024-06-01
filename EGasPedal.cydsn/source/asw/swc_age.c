/*
 * Filename: swc_age.c
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 *
 * description: Software component
 * name: swc_age
 * shortname: age
 *
 */

#include "project.h"
#include "global.h"
#include "rte.h"
#include "rte_types.h"
#include "swc_age.h"



/* USER CODE START SWC_AGE_INCLUDE */
#include "stdlib.h"
/* USER CODE END SWC_AGE_INCLUDE */


#include "sp_common.h"

/* USER CODE START SWC_AGE_USERDEFINITIONS */

/* USER CODE END SWC_AGE_USERDEFINITIONS */



/*
 * component: swc_age
 * cycletime: 1
 * description: Runnable
 * events: 
 * name: AGE_ageMeas_run
 * shortname: ageMeas
 * signalIN: 
 * signalOUT: 
 * task: tsk_system
 */
void AGE_ageMeas_run(RTE_event ev){
	
	/* USER CODE START AGE_ageMeas_run */
    RTE_timertick_sp_common_tick(1);
    /* USER CODE END AGE_ageMeas_run */
}

/* USER CODE START SWC_AGE_FUNCTIONS */

/* USER CODE END SWC_AGE_FUNCTIONS */

