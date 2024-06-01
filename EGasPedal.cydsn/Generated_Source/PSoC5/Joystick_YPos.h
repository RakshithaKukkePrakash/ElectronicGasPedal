/*******************************************************************************
* File Name: Joystick_YPos.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Joystick_YPos_H) /* Pins Joystick_YPos_H */
#define CY_PINS_Joystick_YPos_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Joystick_YPos_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Joystick_YPos__PORT == 15 && ((Joystick_YPos__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Joystick_YPos_Write(uint8 value);
void    Joystick_YPos_SetDriveMode(uint8 mode);
uint8   Joystick_YPos_ReadDataReg(void);
uint8   Joystick_YPos_Read(void);
void    Joystick_YPos_SetInterruptMode(uint16 position, uint16 mode);
uint8   Joystick_YPos_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Joystick_YPos_SetDriveMode() function.
     *  @{
     */
        #define Joystick_YPos_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Joystick_YPos_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Joystick_YPos_DM_RES_UP          PIN_DM_RES_UP
        #define Joystick_YPos_DM_RES_DWN         PIN_DM_RES_DWN
        #define Joystick_YPos_DM_OD_LO           PIN_DM_OD_LO
        #define Joystick_YPos_DM_OD_HI           PIN_DM_OD_HI
        #define Joystick_YPos_DM_STRONG          PIN_DM_STRONG
        #define Joystick_YPos_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Joystick_YPos_MASK               Joystick_YPos__MASK
#define Joystick_YPos_SHIFT              Joystick_YPos__SHIFT
#define Joystick_YPos_WIDTH              1u

/* Interrupt constants */
#if defined(Joystick_YPos__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Joystick_YPos_SetInterruptMode() function.
     *  @{
     */
        #define Joystick_YPos_INTR_NONE      (uint16)(0x0000u)
        #define Joystick_YPos_INTR_RISING    (uint16)(0x0001u)
        #define Joystick_YPos_INTR_FALLING   (uint16)(0x0002u)
        #define Joystick_YPos_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Joystick_YPos_INTR_MASK      (0x01u) 
#endif /* (Joystick_YPos__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Joystick_YPos_PS                     (* (reg8 *) Joystick_YPos__PS)
/* Data Register */
#define Joystick_YPos_DR                     (* (reg8 *) Joystick_YPos__DR)
/* Port Number */
#define Joystick_YPos_PRT_NUM                (* (reg8 *) Joystick_YPos__PRT) 
/* Connect to Analog Globals */                                                  
#define Joystick_YPos_AG                     (* (reg8 *) Joystick_YPos__AG)                       
/* Analog MUX bux enable */
#define Joystick_YPos_AMUX                   (* (reg8 *) Joystick_YPos__AMUX) 
/* Bidirectional Enable */                                                        
#define Joystick_YPos_BIE                    (* (reg8 *) Joystick_YPos__BIE)
/* Bit-mask for Aliased Register Access */
#define Joystick_YPos_BIT_MASK               (* (reg8 *) Joystick_YPos__BIT_MASK)
/* Bypass Enable */
#define Joystick_YPos_BYP                    (* (reg8 *) Joystick_YPos__BYP)
/* Port wide control signals */                                                   
#define Joystick_YPos_CTL                    (* (reg8 *) Joystick_YPos__CTL)
/* Drive Modes */
#define Joystick_YPos_DM0                    (* (reg8 *) Joystick_YPos__DM0) 
#define Joystick_YPos_DM1                    (* (reg8 *) Joystick_YPos__DM1)
#define Joystick_YPos_DM2                    (* (reg8 *) Joystick_YPos__DM2) 
/* Input Buffer Disable Override */
#define Joystick_YPos_INP_DIS                (* (reg8 *) Joystick_YPos__INP_DIS)
/* LCD Common or Segment Drive */
#define Joystick_YPos_LCD_COM_SEG            (* (reg8 *) Joystick_YPos__LCD_COM_SEG)
/* Enable Segment LCD */
#define Joystick_YPos_LCD_EN                 (* (reg8 *) Joystick_YPos__LCD_EN)
/* Slew Rate Control */
#define Joystick_YPos_SLW                    (* (reg8 *) Joystick_YPos__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Joystick_YPos_PRTDSI__CAPS_SEL       (* (reg8 *) Joystick_YPos__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Joystick_YPos_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Joystick_YPos__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Joystick_YPos_PRTDSI__OE_SEL0        (* (reg8 *) Joystick_YPos__PRTDSI__OE_SEL0) 
#define Joystick_YPos_PRTDSI__OE_SEL1        (* (reg8 *) Joystick_YPos__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Joystick_YPos_PRTDSI__OUT_SEL0       (* (reg8 *) Joystick_YPos__PRTDSI__OUT_SEL0) 
#define Joystick_YPos_PRTDSI__OUT_SEL1       (* (reg8 *) Joystick_YPos__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Joystick_YPos_PRTDSI__SYNC_OUT       (* (reg8 *) Joystick_YPos__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Joystick_YPos__SIO_CFG)
    #define Joystick_YPos_SIO_HYST_EN        (* (reg8 *) Joystick_YPos__SIO_HYST_EN)
    #define Joystick_YPos_SIO_REG_HIFREQ     (* (reg8 *) Joystick_YPos__SIO_REG_HIFREQ)
    #define Joystick_YPos_SIO_CFG            (* (reg8 *) Joystick_YPos__SIO_CFG)
    #define Joystick_YPos_SIO_DIFF           (* (reg8 *) Joystick_YPos__SIO_DIFF)
#endif /* (Joystick_YPos__SIO_CFG) */

/* Interrupt Registers */
#if defined(Joystick_YPos__INTSTAT)
    #define Joystick_YPos_INTSTAT            (* (reg8 *) Joystick_YPos__INTSTAT)
    #define Joystick_YPos_SNAP               (* (reg8 *) Joystick_YPos__SNAP)
    
	#define Joystick_YPos_0_INTTYPE_REG 		(* (reg8 *) Joystick_YPos__0__INTTYPE)
#endif /* (Joystick_YPos__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Joystick_YPos_H */


/* [] END OF FILE */
