
/*
 * Filename: sc_speed_type.h
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 *
 * Description: Signalclass
 */

#ifndef _H_DEFINE_SC_SPEED_TYPE
#define _H_DEFINE_SC_SPEED_TYPE

#include "project.h"
#include "global.h"
#include "rte_types.h"

/* USER CODE START SC_SPEED_INCLUDES */

/* USER CODE END SC_SPEED_INCLUDES */



/**********************************************************************
 *       Type Definition for SC_SPEED signal    
 **********************************************************************/

/* USER CODE START SC_SPEED_USERDEFINITIONS */

/* USER CODE END SC_SPEED_USERDEFINITIONS */

typedef 
/* USER CODE START SC_SPEED_SIGNALDATADEFINITION */
struct
{
	uint8_t speed_val;
} 
/* USER CODE END SC_SPEED_SIGNALDATADEFINITION */
SC_SPEED_data_t;

/* USER CODE START InitSC_SPEED */
#define SC_SPEED_INIT_DATA ((SC_SPEED_data_t){0})
/* USER CODE END InitSC_SPEED */





/* USER CODE START SC_SPEED_USERFUNCTIONS */

/* USER CODE END SC_SPEED_USERFUNCTIONS */


#endif