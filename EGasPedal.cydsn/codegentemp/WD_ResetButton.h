/*******************************************************************************
* File Name: WD_ResetButton.h  
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

#if !defined(CY_PINS_WD_ResetButton_H) /* Pins WD_ResetButton_H */
#define CY_PINS_WD_ResetButton_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "WD_ResetButton_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 WD_ResetButton__PORT == 15 && ((WD_ResetButton__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    WD_ResetButton_Write(uint8 value);
void    WD_ResetButton_SetDriveMode(uint8 mode);
uint8   WD_ResetButton_ReadDataReg(void);
uint8   WD_ResetButton_Read(void);
void    WD_ResetButton_SetInterruptMode(uint16 position, uint16 mode);
uint8   WD_ResetButton_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the WD_ResetButton_SetDriveMode() function.
     *  @{
     */
        #define WD_ResetButton_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define WD_ResetButton_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define WD_ResetButton_DM_RES_UP          PIN_DM_RES_UP
        #define WD_ResetButton_DM_RES_DWN         PIN_DM_RES_DWN
        #define WD_ResetButton_DM_OD_LO           PIN_DM_OD_LO
        #define WD_ResetButton_DM_OD_HI           PIN_DM_OD_HI
        #define WD_ResetButton_DM_STRONG          PIN_DM_STRONG
        #define WD_ResetButton_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define WD_ResetButton_MASK               WD_ResetButton__MASK
#define WD_ResetButton_SHIFT              WD_ResetButton__SHIFT
#define WD_ResetButton_WIDTH              1u

/* Interrupt constants */
#if defined(WD_ResetButton__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in WD_ResetButton_SetInterruptMode() function.
     *  @{
     */
        #define WD_ResetButton_INTR_NONE      (uint16)(0x0000u)
        #define WD_ResetButton_INTR_RISING    (uint16)(0x0001u)
        #define WD_ResetButton_INTR_FALLING   (uint16)(0x0002u)
        #define WD_ResetButton_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define WD_ResetButton_INTR_MASK      (0x01u) 
#endif /* (WD_ResetButton__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define WD_ResetButton_PS                     (* (reg8 *) WD_ResetButton__PS)
/* Data Register */
#define WD_ResetButton_DR                     (* (reg8 *) WD_ResetButton__DR)
/* Port Number */
#define WD_ResetButton_PRT_NUM                (* (reg8 *) WD_ResetButton__PRT) 
/* Connect to Analog Globals */                                                  
#define WD_ResetButton_AG                     (* (reg8 *) WD_ResetButton__AG)                       
/* Analog MUX bux enable */
#define WD_ResetButton_AMUX                   (* (reg8 *) WD_ResetButton__AMUX) 
/* Bidirectional Enable */                                                        
#define WD_ResetButton_BIE                    (* (reg8 *) WD_ResetButton__BIE)
/* Bit-mask for Aliased Register Access */
#define WD_ResetButton_BIT_MASK               (* (reg8 *) WD_ResetButton__BIT_MASK)
/* Bypass Enable */
#define WD_ResetButton_BYP                    (* (reg8 *) WD_ResetButton__BYP)
/* Port wide control signals */                                                   
#define WD_ResetButton_CTL                    (* (reg8 *) WD_ResetButton__CTL)
/* Drive Modes */
#define WD_ResetButton_DM0                    (* (reg8 *) WD_ResetButton__DM0) 
#define WD_ResetButton_DM1                    (* (reg8 *) WD_ResetButton__DM1)
#define WD_ResetButton_DM2                    (* (reg8 *) WD_ResetButton__DM2) 
/* Input Buffer Disable Override */
#define WD_ResetButton_INP_DIS                (* (reg8 *) WD_ResetButton__INP_DIS)
/* LCD Common or Segment Drive */
#define WD_ResetButton_LCD_COM_SEG            (* (reg8 *) WD_ResetButton__LCD_COM_SEG)
/* Enable Segment LCD */
#define WD_ResetButton_LCD_EN                 (* (reg8 *) WD_ResetButton__LCD_EN)
/* Slew Rate Control */
#define WD_ResetButton_SLW                    (* (reg8 *) WD_ResetButton__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define WD_ResetButton_PRTDSI__CAPS_SEL       (* (reg8 *) WD_ResetButton__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define WD_ResetButton_PRTDSI__DBL_SYNC_IN    (* (reg8 *) WD_ResetButton__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define WD_ResetButton_PRTDSI__OE_SEL0        (* (reg8 *) WD_ResetButton__PRTDSI__OE_SEL0) 
#define WD_ResetButton_PRTDSI__OE_SEL1        (* (reg8 *) WD_ResetButton__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define WD_ResetButton_PRTDSI__OUT_SEL0       (* (reg8 *) WD_ResetButton__PRTDSI__OUT_SEL0) 
#define WD_ResetButton_PRTDSI__OUT_SEL1       (* (reg8 *) WD_ResetButton__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define WD_ResetButton_PRTDSI__SYNC_OUT       (* (reg8 *) WD_ResetButton__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(WD_ResetButton__SIO_CFG)
    #define WD_ResetButton_SIO_HYST_EN        (* (reg8 *) WD_ResetButton__SIO_HYST_EN)
    #define WD_ResetButton_SIO_REG_HIFREQ     (* (reg8 *) WD_ResetButton__SIO_REG_HIFREQ)
    #define WD_ResetButton_SIO_CFG            (* (reg8 *) WD_ResetButton__SIO_CFG)
    #define WD_ResetButton_SIO_DIFF           (* (reg8 *) WD_ResetButton__SIO_DIFF)
#endif /* (WD_ResetButton__SIO_CFG) */

/* Interrupt Registers */
#if defined(WD_ResetButton__INTSTAT)
    #define WD_ResetButton_INTSTAT            (* (reg8 *) WD_ResetButton__INTSTAT)
    #define WD_ResetButton_SNAP               (* (reg8 *) WD_ResetButton__SNAP)
    
	#define WD_ResetButton_0_INTTYPE_REG 		(* (reg8 *) WD_ResetButton__0__INTTYPE)
#endif /* (WD_ResetButton__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_WD_ResetButton_H */


/* [] END OF FILE */
