
/*
 * Filename: swc_age.h
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 *
 * Description: Software component
 */

#ifndef _H_DEFINE_SWC_AGE
#define _H_DEFINE_SWC_AGE

#include "project.h"
#include "global.h"
#include "rte_types.h"

/* USER CODE START SWC_AGE_INCLUDES */

/* USER CODE END SWC_AGE_INCLUDES */



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
void AGE_ageMeas_run(RTE_event ev);


#endif