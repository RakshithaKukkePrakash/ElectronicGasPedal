/*
 * Filename: sc_brakelight_type.c
 *
 * Author: Autogenerated by H-DA RTE Generator, (c) Prof. Fromm
 *
 * description: Signalclass
 * name: sc_brakelight
 * shortname: brakelight
 *
 */

#include "project.h"
#include "global.h"
#include "rte.h"
#include "rte_types.h"
#include "sc_brakelight_type.h"



/* USER CODE START SC_BRAKELIGHT_INCLUDE */

/* USER CODE END SC_BRAKELIGHT_INCLUDE */




/* USER CODE START SC_BRAKELIGHT_USERDEFINITIONS */

/* USER CODE END SC_BRAKELIGHT_USERDEFINITIONS */


/*****************************************************************************************
 *************** Port Wrapper Implementation for SC_BRAKELIGHT signal  ****************
 *****************************************************************************************/
 
 
/**
 * Default OUT driver API
 */
inline RC_t SC_BRAKELIGHT_driverOut(const SC_BRAKELIGHT_data_t  *const data)
{
	/* USER CODE START driverOutSC_BRAKELIGHT */
    LED_red_Write(data->brakeLight);

	//Scale application data to drive format

	//Write scaled data to driver

	return RC_SUCCESS;
	/* USER CODE END driverOutSC_BRAKELIGHT */
}



