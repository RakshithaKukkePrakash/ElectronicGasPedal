/**
* \file joystick.c
* \author P. Fromm
* \date 29.8.17
*
* \brief PWM driver
*
* \copyright Copyright ©2016
* Department of electrical engineering and information technology, Hochschule Darmstadt - University of applied sciences (h_da). All Rights Reserved.
* Permission to use, copy, modify, and distribute this software and its documentation for educational, and research purposes in the context of non-commercial
* (unless permitted by h_da) and official h_da projects, is hereby granted for enrolled students of h_da, provided that the above copyright notice,
* this paragraph and the following paragraph appear in all copies, modifications, and distributions.
* Contact Prof.Dr.-Ing. Peter Fromm, peter.fromm@h-da.de, Birkenweg 8 64295 Darmstadt - GERMANY for commercial requests.
*
* \warning This software is a PROTOTYPE version and is not designed or intended for use in production, especially not for safety-critical applications!
* The user represents and warrants that it will NOT use or redistribute the Software for such purposes.
* This prototype is for research purposes only. This software is provided "AS IS," without a warranty of any kind.
*/

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/

#include "project.h"
#include "pwm.h"



/*****************************************************************************/
/* Local pre-processor symbols/macros ('#define')                            */
/*****************************************************************************/

/*****************************************************************************/
/* Global variable definitions (declared in header file with 'extern')       */
/*****************************************************************************/

/*****************************************************************************/
/* Local type definitions ('typedef')                                        */
/*****************************************************************************/

/*****************************************************************************/
/* Local variable definitions ('static')                                     */
/*****************************************************************************/



/*****************************************************************************/
/* Local function prototypes ('static')                                      */
/*****************************************************************************/


/*****************************************************************************/
/* Function implementation - global ('extern') and local ('static')          */
/*****************************************************************************/

/**
 * Initialisation of the PWM
 * @return RC_SUCCESS if all ok
 */
RC_t PWM_Init()
{
    RGB_PWM_red_Start();
    RGB_PWM_green_Start();
    RGB_PWM_blue_Start();
    
    RGB_PWM_red_WriteCompare(0);
    RGB_PWM_green_WriteCompare(0);
    RGB_PWM_blue_WriteCompare(0);
    
    return RC_SUCCESS;
}


/**
 * Set RGB values to the RGB LED
 * @param uint8_t pwm_value - pwm_value is the duty cycle
 * @return RC_SUCCESS if all ok
 */
RC_t PWM_RGB_SET(uint8_t pwm_value)
{
    RGB_PWM_green_WriteCompare(pwm_value);
    return RC_SUCCESS;
}
    

