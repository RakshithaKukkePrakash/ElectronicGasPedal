
/*
 * Filename: sc_engine_type.h
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 *
 * Description: Signalclass
 */

#ifndef _H_DEFINE_SC_ENGINE_TYPE
#define _H_DEFINE_SC_ENGINE_TYPE

#include "project.h"
#include "global.h"
#include "rte_types.h"

/* USER CODE START SC_ENGINE_INCLUDES */
#include "pwm.h"
/* USER CODE END SC_ENGINE_INCLUDES */



/**********************************************************************
 *       Type Definition for SC_ENGINE signal    
 **********************************************************************/

/* USER CODE START SC_ENGINE_USERDEFINITIONS */

/* USER CODE END SC_ENGINE_USERDEFINITIONS */

typedef 
/* USER CODE START SC_ENGINE_SIGNALDATADEFINITION */
struct
{
	uint8_t engine;
} 
/* USER CODE END SC_ENGINE_SIGNALDATADEFINITION */
SC_ENGINE_data_t;

/* USER CODE START InitSC_ENGINE */
#define SC_ENGINE_INIT_DATA ((SC_ENGINE_data_t){0})
/* USER CODE END InitSC_ENGINE */




/**
 * Default OUT driver API
 * \param const SC_ENGINE_data_t  *const data : [IN] signal data for the driver, will be scaled in this function
 * \return RC_SUCCESS is all was ok, error code otherwise
 */
RC_t SC_ENGINE_driverOut(const SC_ENGINE_data_t  *const data);


/* USER CODE START SC_ENGINE_USERFUNCTIONS */

/* USER CODE END SC_ENGINE_USERFUNCTIONS */


#endif