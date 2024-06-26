;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.4
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* RGB_G */
RGB_G__0__INTTYPE EQU CYREG_PICU2_INTTYPE4
RGB_G__0__MASK EQU 0x10
RGB_G__0__PC EQU CYREG_PRT2_PC4
RGB_G__0__PORT EQU 2
RGB_G__0__SHIFT EQU 4
RGB_G__AG EQU CYREG_PRT2_AG
RGB_G__AMUX EQU CYREG_PRT2_AMUX
RGB_G__BIE EQU CYREG_PRT2_BIE
RGB_G__BIT_MASK EQU CYREG_PRT2_BIT_MASK
RGB_G__BYP EQU CYREG_PRT2_BYP
RGB_G__CTL EQU CYREG_PRT2_CTL
RGB_G__DM0 EQU CYREG_PRT2_DM0
RGB_G__DM1 EQU CYREG_PRT2_DM1
RGB_G__DM2 EQU CYREG_PRT2_DM2
RGB_G__DR EQU CYREG_PRT2_DR
RGB_G__INP_DIS EQU CYREG_PRT2_INP_DIS
RGB_G__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
RGB_G__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
RGB_G__LCD_EN EQU CYREG_PRT2_LCD_EN
RGB_G__MASK EQU 0x10
RGB_G__PORT EQU 2
RGB_G__PRT EQU CYREG_PRT2_PRT
RGB_G__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
RGB_G__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
RGB_G__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
RGB_G__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
RGB_G__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
RGB_G__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
RGB_G__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
RGB_G__PS EQU CYREG_PRT2_PS
RGB_G__SHIFT EQU 4
RGB_G__SLW EQU CYREG_PRT2_SLW

/* LED_red */
LED_red__0__INTTYPE EQU CYREG_PICU0_INTTYPE6
LED_red__0__MASK EQU 0x40
LED_red__0__PC EQU CYREG_PRT0_PC6
LED_red__0__PORT EQU 0
LED_red__0__SHIFT EQU 6
LED_red__AG EQU CYREG_PRT0_AG
LED_red__AMUX EQU CYREG_PRT0_AMUX
LED_red__BIE EQU CYREG_PRT0_BIE
LED_red__BIT_MASK EQU CYREG_PRT0_BIT_MASK
LED_red__BYP EQU CYREG_PRT0_BYP
LED_red__CTL EQU CYREG_PRT0_CTL
LED_red__DM0 EQU CYREG_PRT0_DM0
LED_red__DM1 EQU CYREG_PRT0_DM1
LED_red__DM2 EQU CYREG_PRT0_DM2
LED_red__DR EQU CYREG_PRT0_DR
LED_red__INP_DIS EQU CYREG_PRT0_INP_DIS
LED_red__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
LED_red__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
LED_red__LCD_EN EQU CYREG_PRT0_LCD_EN
LED_red__MASK EQU 0x40
LED_red__PORT EQU 0
LED_red__PRT EQU CYREG_PRT0_PRT
LED_red__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
LED_red__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
LED_red__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
LED_red__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
LED_red__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
LED_red__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
LED_red__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
LED_red__PS EQU CYREG_PRT0_PS
LED_red__SHIFT EQU 6
LED_red__SLW EQU CYREG_PRT0_SLW

/* Rx_port */
Rx_port__0__INTTYPE EQU CYREG_PICU12_INTTYPE6
Rx_port__0__MASK EQU 0x40
Rx_port__0__PC EQU CYREG_PRT12_PC6
Rx_port__0__PORT EQU 12
Rx_port__0__SHIFT EQU 6
Rx_port__AG EQU CYREG_PRT12_AG
Rx_port__BIE EQU CYREG_PRT12_BIE
Rx_port__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Rx_port__BYP EQU CYREG_PRT12_BYP
Rx_port__DM0 EQU CYREG_PRT12_DM0
Rx_port__DM1 EQU CYREG_PRT12_DM1
Rx_port__DM2 EQU CYREG_PRT12_DM2
Rx_port__DR EQU CYREG_PRT12_DR
Rx_port__INP_DIS EQU CYREG_PRT12_INP_DIS
Rx_port__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
Rx_port__MASK EQU 0x40
Rx_port__PORT EQU 12
Rx_port__PRT EQU CYREG_PRT12_PRT
Rx_port__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Rx_port__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Rx_port__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Rx_port__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Rx_port__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Rx_port__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Rx_port__PS EQU CYREG_PRT12_PS
Rx_port__SHIFT EQU 6
Rx_port__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Rx_port__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Rx_port__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Rx_port__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Rx_port__SLW EQU CYREG_PRT12_SLW

/* Tx_port */
Tx_port__0__INTTYPE EQU CYREG_PICU12_INTTYPE7
Tx_port__0__MASK EQU 0x80
Tx_port__0__PC EQU CYREG_PRT12_PC7
Tx_port__0__PORT EQU 12
Tx_port__0__SHIFT EQU 7
Tx_port__AG EQU CYREG_PRT12_AG
Tx_port__BIE EQU CYREG_PRT12_BIE
Tx_port__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Tx_port__BYP EQU CYREG_PRT12_BYP
Tx_port__DM0 EQU CYREG_PRT12_DM0
Tx_port__DM1 EQU CYREG_PRT12_DM1
Tx_port__DM2 EQU CYREG_PRT12_DM2
Tx_port__DR EQU CYREG_PRT12_DR
Tx_port__INP_DIS EQU CYREG_PRT12_INP_DIS
Tx_port__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
Tx_port__MASK EQU 0x80
Tx_port__PORT EQU 12
Tx_port__PRT EQU CYREG_PRT12_PRT
Tx_port__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Tx_port__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Tx_port__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Tx_port__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Tx_port__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Tx_port__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Tx_port__PS EQU CYREG_PRT12_PS
Tx_port__SHIFT EQU 7
Tx_port__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Tx_port__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Tx_port__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Tx_port__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Tx_port__SLW EQU CYREG_PRT12_SLW

/* UART_LOG */
UART_LOG_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
UART_LOG_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB10_11_CTL
UART_LOG_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB10_11_CTL
UART_LOG_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB10_11_CTL
UART_LOG_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB10_11_CTL
UART_LOG_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB10_11_MSK
UART_LOG_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB10_11_MSK
UART_LOG_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB10_11_MSK
UART_LOG_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB10_11_MSK
UART_LOG_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
UART_LOG_BUART_sRX_RxBitCounter__CONTROL_REG EQU CYREG_B1_UDB10_CTL
UART_LOG_BUART_sRX_RxBitCounter__CONTROL_ST_REG EQU CYREG_B1_UDB10_ST_CTL
UART_LOG_BUART_sRX_RxBitCounter__COUNT_REG EQU CYREG_B1_UDB10_CTL
UART_LOG_BUART_sRX_RxBitCounter__COUNT_ST_REG EQU CYREG_B1_UDB10_ST_CTL
UART_LOG_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
UART_LOG_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
UART_LOG_BUART_sRX_RxBitCounter__PERIOD_REG EQU CYREG_B1_UDB10_MSK
UART_LOG_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
UART_LOG_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG EQU CYREG_B1_UDB10_11_ST
UART_LOG_BUART_sRX_RxBitCounter_ST__MASK_REG EQU CYREG_B1_UDB10_MSK
UART_LOG_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
UART_LOG_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
UART_LOG_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
UART_LOG_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG EQU CYREG_B1_UDB10_ST_CTL
UART_LOG_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B1_UDB10_ST_CTL
UART_LOG_BUART_sRX_RxBitCounter_ST__STATUS_REG EQU CYREG_B1_UDB10_ST
UART_LOG_BUART_sRX_RxShifter_u0__16BIT_A0_REG EQU CYREG_B1_UDB10_11_A0
UART_LOG_BUART_sRX_RxShifter_u0__16BIT_A1_REG EQU CYREG_B1_UDB10_11_A1
UART_LOG_BUART_sRX_RxShifter_u0__16BIT_D0_REG EQU CYREG_B1_UDB10_11_D0
UART_LOG_BUART_sRX_RxShifter_u0__16BIT_D1_REG EQU CYREG_B1_UDB10_11_D1
UART_LOG_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB10_11_ACTL
UART_LOG_BUART_sRX_RxShifter_u0__16BIT_F0_REG EQU CYREG_B1_UDB10_11_F0
UART_LOG_BUART_sRX_RxShifter_u0__16BIT_F1_REG EQU CYREG_B1_UDB10_11_F1
UART_LOG_BUART_sRX_RxShifter_u0__A0_A1_REG EQU CYREG_B1_UDB10_A0_A1
UART_LOG_BUART_sRX_RxShifter_u0__A0_REG EQU CYREG_B1_UDB10_A0
UART_LOG_BUART_sRX_RxShifter_u0__A1_REG EQU CYREG_B1_UDB10_A1
UART_LOG_BUART_sRX_RxShifter_u0__D0_D1_REG EQU CYREG_B1_UDB10_D0_D1
UART_LOG_BUART_sRX_RxShifter_u0__D0_REG EQU CYREG_B1_UDB10_D0
UART_LOG_BUART_sRX_RxShifter_u0__D1_REG EQU CYREG_B1_UDB10_D1
UART_LOG_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB10_ACTL
UART_LOG_BUART_sRX_RxShifter_u0__F0_F1_REG EQU CYREG_B1_UDB10_F0_F1
UART_LOG_BUART_sRX_RxShifter_u0__F0_REG EQU CYREG_B1_UDB10_F0
UART_LOG_BUART_sRX_RxShifter_u0__F1_REG EQU CYREG_B1_UDB10_F1
UART_LOG_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
UART_LOG_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB10_MSK_ACTL
UART_LOG_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB09_10_ACTL
UART_LOG_BUART_sRX_RxSts__16BIT_STATUS_REG EQU CYREG_B1_UDB09_10_ST
UART_LOG_BUART_sRX_RxSts__3__MASK EQU 0x08
UART_LOG_BUART_sRX_RxSts__3__POS EQU 3
UART_LOG_BUART_sRX_RxSts__4__MASK EQU 0x10
UART_LOG_BUART_sRX_RxSts__4__POS EQU 4
UART_LOG_BUART_sRX_RxSts__5__MASK EQU 0x20
UART_LOG_BUART_sRX_RxSts__5__POS EQU 5
UART_LOG_BUART_sRX_RxSts__MASK EQU 0x38
UART_LOG_BUART_sRX_RxSts__MASK_REG EQU CYREG_B1_UDB09_MSK
UART_LOG_BUART_sRX_RxSts__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB09_ACTL
UART_LOG_BUART_sRX_RxSts__STATUS_REG EQU CYREG_B1_UDB09_ST
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG EQU CYREG_B0_UDB11_12_A0
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG EQU CYREG_B0_UDB11_12_A1
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG EQU CYREG_B0_UDB11_12_D0
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG EQU CYREG_B0_UDB11_12_D1
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG EQU CYREG_B0_UDB11_12_F0
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG EQU CYREG_B0_UDB11_12_F1
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG EQU CYREG_B0_UDB11_A0_A1
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG EQU CYREG_B0_UDB11_A0
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG EQU CYREG_B0_UDB11_A1
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG EQU CYREG_B0_UDB11_D0_D1
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG EQU CYREG_B0_UDB11_D0
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG EQU CYREG_B0_UDB11_D1
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG EQU CYREG_B0_UDB11_F0_F1
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG EQU CYREG_B0_UDB11_F0
UART_LOG_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG EQU CYREG_B0_UDB11_F1
UART_LOG_BUART_sTX_TxShifter_u0__16BIT_A0_REG EQU CYREG_B0_UDB12_13_A0
UART_LOG_BUART_sTX_TxShifter_u0__16BIT_A1_REG EQU CYREG_B0_UDB12_13_A1
UART_LOG_BUART_sTX_TxShifter_u0__16BIT_D0_REG EQU CYREG_B0_UDB12_13_D0
UART_LOG_BUART_sTX_TxShifter_u0__16BIT_D1_REG EQU CYREG_B0_UDB12_13_D1
UART_LOG_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB12_13_ACTL
UART_LOG_BUART_sTX_TxShifter_u0__16BIT_F0_REG EQU CYREG_B0_UDB12_13_F0
UART_LOG_BUART_sTX_TxShifter_u0__16BIT_F1_REG EQU CYREG_B0_UDB12_13_F1
UART_LOG_BUART_sTX_TxShifter_u0__A0_A1_REG EQU CYREG_B0_UDB12_A0_A1
UART_LOG_BUART_sTX_TxShifter_u0__A0_REG EQU CYREG_B0_UDB12_A0
UART_LOG_BUART_sTX_TxShifter_u0__A1_REG EQU CYREG_B0_UDB12_A1
UART_LOG_BUART_sTX_TxShifter_u0__D0_D1_REG EQU CYREG_B0_UDB12_D0_D1
UART_LOG_BUART_sTX_TxShifter_u0__D0_REG EQU CYREG_B0_UDB12_D0
UART_LOG_BUART_sTX_TxShifter_u0__D1_REG EQU CYREG_B0_UDB12_D1
UART_LOG_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB12_ACTL
UART_LOG_BUART_sTX_TxShifter_u0__F0_F1_REG EQU CYREG_B0_UDB12_F0_F1
UART_LOG_BUART_sTX_TxShifter_u0__F0_REG EQU CYREG_B0_UDB12_F0
UART_LOG_BUART_sTX_TxShifter_u0__F1_REG EQU CYREG_B0_UDB12_F1
UART_LOG_BUART_sTX_TxSts__0__MASK EQU 0x01
UART_LOG_BUART_sTX_TxSts__0__POS EQU 0
UART_LOG_BUART_sTX_TxSts__1__MASK EQU 0x02
UART_LOG_BUART_sTX_TxSts__1__POS EQU 1
UART_LOG_BUART_sTX_TxSts__2__MASK EQU 0x04
UART_LOG_BUART_sTX_TxSts__2__POS EQU 2
UART_LOG_BUART_sTX_TxSts__3__MASK EQU 0x08
UART_LOG_BUART_sTX_TxSts__3__POS EQU 3
UART_LOG_BUART_sTX_TxSts__MASK EQU 0x0F
UART_LOG_BUART_sTX_TxSts__MASK_REG EQU CYREG_B0_UDB15_MSK
UART_LOG_BUART_sTX_TxSts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB15_ACTL
UART_LOG_BUART_sTX_TxSts__STATUS_REG EQU CYREG_B0_UDB15_ST
UART_LOG_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
UART_LOG_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
UART_LOG_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
UART_LOG_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
UART_LOG_IntClock__INDEX EQU 0x01
UART_LOG_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
UART_LOG_IntClock__PM_ACT_MSK EQU 0x02
UART_LOG_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
UART_LOG_IntClock__PM_STBY_MSK EQU 0x02

/* PWM_Clock */
PWM_Clock__CFG0 EQU CYREG_CLKDIST_DCFG2_CFG0
PWM_Clock__CFG1 EQU CYREG_CLKDIST_DCFG2_CFG1
PWM_Clock__CFG2 EQU CYREG_CLKDIST_DCFG2_CFG2
PWM_Clock__CFG2_SRC_SEL_MASK EQU 0x07
PWM_Clock__INDEX EQU 0x02
PWM_Clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
PWM_Clock__PM_ACT_MSK EQU 0x04
PWM_Clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
PWM_Clock__PM_STBY_MSK EQU 0x04

/* Joystick_ADC */
Joystick_ADC_bSAR_SEQ_ChannelCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB07_08_ACTL
Joystick_ADC_bSAR_SEQ_ChannelCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB07_08_CTL
Joystick_ADC_bSAR_SEQ_ChannelCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB07_08_CTL
Joystick_ADC_bSAR_SEQ_ChannelCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB07_08_CTL
Joystick_ADC_bSAR_SEQ_ChannelCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB07_08_CTL
Joystick_ADC_bSAR_SEQ_ChannelCounter__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB07_08_MSK
Joystick_ADC_bSAR_SEQ_ChannelCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB07_08_MSK
Joystick_ADC_bSAR_SEQ_ChannelCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB07_08_MSK
Joystick_ADC_bSAR_SEQ_ChannelCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB07_08_MSK
Joystick_ADC_bSAR_SEQ_ChannelCounter__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB07_ACTL
Joystick_ADC_bSAR_SEQ_ChannelCounter__CONTROL_REG EQU CYREG_B0_UDB07_CTL
Joystick_ADC_bSAR_SEQ_ChannelCounter__CONTROL_ST_REG EQU CYREG_B0_UDB07_ST_CTL
Joystick_ADC_bSAR_SEQ_ChannelCounter__COUNT_REG EQU CYREG_B0_UDB07_CTL
Joystick_ADC_bSAR_SEQ_ChannelCounter__COUNT_ST_REG EQU CYREG_B0_UDB07_ST_CTL
Joystick_ADC_bSAR_SEQ_ChannelCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB07_MSK_ACTL
Joystick_ADC_bSAR_SEQ_ChannelCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB07_MSK_ACTL
Joystick_ADC_bSAR_SEQ_ChannelCounter__PERIOD_REG EQU CYREG_B0_UDB07_MSK
Joystick_ADC_bSAR_SEQ_ChannelCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB07_08_ACTL
Joystick_ADC_bSAR_SEQ_ChannelCounter_ST__16BIT_STATUS_REG EQU CYREG_B0_UDB07_08_ST
Joystick_ADC_bSAR_SEQ_ChannelCounter_ST__MASK_REG EQU CYREG_B0_UDB07_MSK
Joystick_ADC_bSAR_SEQ_ChannelCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB07_MSK_ACTL
Joystick_ADC_bSAR_SEQ_ChannelCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB07_MSK_ACTL
Joystick_ADC_bSAR_SEQ_ChannelCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB07_ACTL
Joystick_ADC_bSAR_SEQ_ChannelCounter_ST__STATUS_CNT_REG EQU CYREG_B0_UDB07_ST_CTL
Joystick_ADC_bSAR_SEQ_ChannelCounter_ST__STATUS_CONTROL_REG EQU CYREG_B0_UDB07_ST_CTL
Joystick_ADC_bSAR_SEQ_ChannelCounter_ST__STATUS_REG EQU CYREG_B0_UDB07_ST
Joystick_ADC_bSAR_SEQ_CtrlReg__0__MASK EQU 0x01
Joystick_ADC_bSAR_SEQ_CtrlReg__0__POS EQU 0
Joystick_ADC_bSAR_SEQ_CtrlReg__1__MASK EQU 0x02
Joystick_ADC_bSAR_SEQ_CtrlReg__1__POS EQU 1
Joystick_ADC_bSAR_SEQ_CtrlReg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB08_09_ACTL
Joystick_ADC_bSAR_SEQ_CtrlReg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB08_09_CTL
Joystick_ADC_bSAR_SEQ_CtrlReg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB08_09_CTL
Joystick_ADC_bSAR_SEQ_CtrlReg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB08_09_CTL
Joystick_ADC_bSAR_SEQ_CtrlReg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB08_09_CTL
Joystick_ADC_bSAR_SEQ_CtrlReg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB08_09_MSK
Joystick_ADC_bSAR_SEQ_CtrlReg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB08_09_MSK
Joystick_ADC_bSAR_SEQ_CtrlReg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB08_09_MSK
Joystick_ADC_bSAR_SEQ_CtrlReg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB08_09_MSK
Joystick_ADC_bSAR_SEQ_CtrlReg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB08_ACTL
Joystick_ADC_bSAR_SEQ_CtrlReg__CONTROL_REG EQU CYREG_B0_UDB08_CTL
Joystick_ADC_bSAR_SEQ_CtrlReg__CONTROL_ST_REG EQU CYREG_B0_UDB08_ST_CTL
Joystick_ADC_bSAR_SEQ_CtrlReg__COUNT_REG EQU CYREG_B0_UDB08_CTL
Joystick_ADC_bSAR_SEQ_CtrlReg__COUNT_ST_REG EQU CYREG_B0_UDB08_ST_CTL
Joystick_ADC_bSAR_SEQ_CtrlReg__MASK EQU 0x03
Joystick_ADC_bSAR_SEQ_CtrlReg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB08_MSK_ACTL
Joystick_ADC_bSAR_SEQ_CtrlReg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB08_MSK_ACTL
Joystick_ADC_bSAR_SEQ_CtrlReg__PERIOD_REG EQU CYREG_B0_UDB08_MSK
Joystick_ADC_bSAR_SEQ_EOCSts__0__MASK EQU 0x01
Joystick_ADC_bSAR_SEQ_EOCSts__0__POS EQU 0
Joystick_ADC_bSAR_SEQ_EOCSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB08_09_ACTL
Joystick_ADC_bSAR_SEQ_EOCSts__16BIT_STATUS_REG EQU CYREG_B1_UDB08_09_ST
Joystick_ADC_bSAR_SEQ_EOCSts__MASK EQU 0x01
Joystick_ADC_bSAR_SEQ_EOCSts__MASK_REG EQU CYREG_B1_UDB08_MSK
Joystick_ADC_bSAR_SEQ_EOCSts__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB08_ACTL
Joystick_ADC_bSAR_SEQ_EOCSts__STATUS_REG EQU CYREG_B1_UDB08_ST
Joystick_ADC_FinalBuf__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
Joystick_ADC_FinalBuf__DRQ_NUMBER EQU 0
Joystick_ADC_FinalBuf__NUMBEROF_TDS EQU 0
Joystick_ADC_FinalBuf__PRIORITY EQU 2
Joystick_ADC_FinalBuf__TERMIN_EN EQU 0
Joystick_ADC_FinalBuf__TERMIN_SEL EQU 0
Joystick_ADC_FinalBuf__TERMOUT0_EN EQU 1
Joystick_ADC_FinalBuf__TERMOUT0_SEL EQU 0
Joystick_ADC_FinalBuf__TERMOUT1_EN EQU 0
Joystick_ADC_FinalBuf__TERMOUT1_SEL EQU 0
Joystick_ADC_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Joystick_ADC_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Joystick_ADC_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Joystick_ADC_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
Joystick_ADC_IntClock__INDEX EQU 0x00
Joystick_ADC_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Joystick_ADC_IntClock__PM_ACT_MSK EQU 0x01
Joystick_ADC_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Joystick_ADC_IntClock__PM_STBY_MSK EQU 0x01
Joystick_ADC_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
Joystick_ADC_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
Joystick_ADC_IRQ__INTC_MASK EQU 0x01
Joystick_ADC_IRQ__INTC_NUMBER EQU 0
Joystick_ADC_IRQ__INTC_PRIOR_NUM EQU 7
Joystick_ADC_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
Joystick_ADC_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
Joystick_ADC_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
Joystick_ADC_SAR_ADC_SAR__CLK EQU CYREG_SAR0_CLK
Joystick_ADC_SAR_ADC_SAR__CSR0 EQU CYREG_SAR0_CSR0
Joystick_ADC_SAR_ADC_SAR__CSR1 EQU CYREG_SAR0_CSR1
Joystick_ADC_SAR_ADC_SAR__CSR2 EQU CYREG_SAR0_CSR2
Joystick_ADC_SAR_ADC_SAR__CSR3 EQU CYREG_SAR0_CSR3
Joystick_ADC_SAR_ADC_SAR__CSR4 EQU CYREG_SAR0_CSR4
Joystick_ADC_SAR_ADC_SAR__CSR5 EQU CYREG_SAR0_CSR5
Joystick_ADC_SAR_ADC_SAR__CSR6 EQU CYREG_SAR0_CSR6
Joystick_ADC_SAR_ADC_SAR__PM_ACT_CFG EQU CYREG_PM_ACT_CFG11
Joystick_ADC_SAR_ADC_SAR__PM_ACT_MSK EQU 0x01
Joystick_ADC_SAR_ADC_SAR__PM_STBY_CFG EQU CYREG_PM_STBY_CFG11
Joystick_ADC_SAR_ADC_SAR__PM_STBY_MSK EQU 0x01
Joystick_ADC_SAR_ADC_SAR__SW0 EQU CYREG_SAR0_SW0
Joystick_ADC_SAR_ADC_SAR__SW2 EQU CYREG_SAR0_SW2
Joystick_ADC_SAR_ADC_SAR__SW3 EQU CYREG_SAR0_SW3
Joystick_ADC_SAR_ADC_SAR__SW4 EQU CYREG_SAR0_SW4
Joystick_ADC_SAR_ADC_SAR__SW6 EQU CYREG_SAR0_SW6
Joystick_ADC_SAR_ADC_SAR__TR0 EQU CYREG_SAR0_TR0
Joystick_ADC_SAR_ADC_SAR__WRK0 EQU CYREG_SAR0_WRK0
Joystick_ADC_SAR_ADC_SAR__WRK1 EQU CYREG_SAR0_WRK1
Joystick_ADC_TempBuf__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
Joystick_ADC_TempBuf__DRQ_NUMBER EQU 1
Joystick_ADC_TempBuf__NUMBEROF_TDS EQU 0
Joystick_ADC_TempBuf__PRIORITY EQU 2
Joystick_ADC_TempBuf__TERMIN_EN EQU 0
Joystick_ADC_TempBuf__TERMIN_SEL EQU 0
Joystick_ADC_TempBuf__TERMOUT0_EN EQU 1
Joystick_ADC_TempBuf__TERMOUT0_SEL EQU 1
Joystick_ADC_TempBuf__TERMOUT1_EN EQU 0
Joystick_ADC_TempBuf__TERMOUT1_SEL EQU 0

/* Joystick_XPos */
Joystick_XPos__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
Joystick_XPos__0__MASK EQU 0x01
Joystick_XPos__0__PC EQU CYREG_PRT0_PC0
Joystick_XPos__0__PORT EQU 0
Joystick_XPos__0__SHIFT EQU 0
Joystick_XPos__AG EQU CYREG_PRT0_AG
Joystick_XPos__AMUX EQU CYREG_PRT0_AMUX
Joystick_XPos__BIE EQU CYREG_PRT0_BIE
Joystick_XPos__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Joystick_XPos__BYP EQU CYREG_PRT0_BYP
Joystick_XPos__CTL EQU CYREG_PRT0_CTL
Joystick_XPos__DM0 EQU CYREG_PRT0_DM0
Joystick_XPos__DM1 EQU CYREG_PRT0_DM1
Joystick_XPos__DM2 EQU CYREG_PRT0_DM2
Joystick_XPos__DR EQU CYREG_PRT0_DR
Joystick_XPos__INP_DIS EQU CYREG_PRT0_INP_DIS
Joystick_XPos__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Joystick_XPos__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Joystick_XPos__LCD_EN EQU CYREG_PRT0_LCD_EN
Joystick_XPos__MASK EQU 0x01
Joystick_XPos__PORT EQU 0
Joystick_XPos__PRT EQU CYREG_PRT0_PRT
Joystick_XPos__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Joystick_XPos__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Joystick_XPos__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Joystick_XPos__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Joystick_XPos__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Joystick_XPos__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Joystick_XPos__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Joystick_XPos__PS EQU CYREG_PRT0_PS
Joystick_XPos__SHIFT EQU 0
Joystick_XPos__SLW EQU CYREG_PRT0_SLW

/* Joystick_YPos */
Joystick_YPos__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
Joystick_YPos__0__MASK EQU 0x02
Joystick_YPos__0__PC EQU CYREG_PRT0_PC1
Joystick_YPos__0__PORT EQU 0
Joystick_YPos__0__SHIFT EQU 1
Joystick_YPos__AG EQU CYREG_PRT0_AG
Joystick_YPos__AMUX EQU CYREG_PRT0_AMUX
Joystick_YPos__BIE EQU CYREG_PRT0_BIE
Joystick_YPos__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Joystick_YPos__BYP EQU CYREG_PRT0_BYP
Joystick_YPos__CTL EQU CYREG_PRT0_CTL
Joystick_YPos__DM0 EQU CYREG_PRT0_DM0
Joystick_YPos__DM1 EQU CYREG_PRT0_DM1
Joystick_YPos__DM2 EQU CYREG_PRT0_DM2
Joystick_YPos__DR EQU CYREG_PRT0_DR
Joystick_YPos__INP_DIS EQU CYREG_PRT0_INP_DIS
Joystick_YPos__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Joystick_YPos__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Joystick_YPos__LCD_EN EQU CYREG_PRT0_LCD_EN
Joystick_YPos__MASK EQU 0x02
Joystick_YPos__PORT EQU 0
Joystick_YPos__PRT EQU CYREG_PRT0_PRT
Joystick_YPos__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Joystick_YPos__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Joystick_YPos__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Joystick_YPos__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Joystick_YPos__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Joystick_YPos__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Joystick_YPos__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Joystick_YPos__PS EQU CYREG_PRT0_PS
Joystick_YPos__SHIFT EQU 1
Joystick_YPos__SLW EQU CYREG_PRT0_SLW

/* RGB_PWM_green */
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB13_14_ACTL
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB13_14_CTL
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB13_14_CTL
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB13_14_CTL
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB13_14_CTL
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB13_14_MSK
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB13_14_MSK
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB13_14_MSK
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB13_14_MSK
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB13_ACTL
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB13_CTL
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB13_ST_CTL
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_B0_UDB13_CTL
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB13_ST_CTL
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB13_MSK_ACTL
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB13_MSK_ACTL
RGB_PWM_green_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB13_MSK
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB13_14_A0
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB13_14_A1
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB13_14_D0
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB13_14_D1
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB13_14_ACTL
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB13_14_F0
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB13_14_F1
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__A0_A1_REG EQU CYREG_B0_UDB13_A0_A1
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__A0_REG EQU CYREG_B0_UDB13_A0
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__A1_REG EQU CYREG_B0_UDB13_A1
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__D0_D1_REG EQU CYREG_B0_UDB13_D0_D1
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__D0_REG EQU CYREG_B0_UDB13_D0
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__D1_REG EQU CYREG_B0_UDB13_D1
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB13_ACTL
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__F0_F1_REG EQU CYREG_B0_UDB13_F0_F1
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__F0_REG EQU CYREG_B0_UDB13_F0
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__F1_REG EQU CYREG_B0_UDB13_F1
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB13_MSK_ACTL
RGB_PWM_green_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB13_MSK_ACTL

/* WD_ResetButton */
WD_ResetButton__0__INTTYPE EQU CYREG_PICU0_INTTYPE2
WD_ResetButton__0__MASK EQU 0x04
WD_ResetButton__0__PC EQU CYREG_PRT0_PC2
WD_ResetButton__0__PORT EQU 0
WD_ResetButton__0__SHIFT EQU 2
WD_ResetButton__AG EQU CYREG_PRT0_AG
WD_ResetButton__AMUX EQU CYREG_PRT0_AMUX
WD_ResetButton__BIE EQU CYREG_PRT0_BIE
WD_ResetButton__BIT_MASK EQU CYREG_PRT0_BIT_MASK
WD_ResetButton__BYP EQU CYREG_PRT0_BYP
WD_ResetButton__CTL EQU CYREG_PRT0_CTL
WD_ResetButton__DM0 EQU CYREG_PRT0_DM0
WD_ResetButton__DM1 EQU CYREG_PRT0_DM1
WD_ResetButton__DM2 EQU CYREG_PRT0_DM2
WD_ResetButton__DR EQU CYREG_PRT0_DR
WD_ResetButton__INP_DIS EQU CYREG_PRT0_INP_DIS
WD_ResetButton__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
WD_ResetButton__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
WD_ResetButton__LCD_EN EQU CYREG_PRT0_LCD_EN
WD_ResetButton__MASK EQU 0x04
WD_ResetButton__PORT EQU 0
WD_ResetButton__PRT EQU CYREG_PRT0_PRT
WD_ResetButton__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
WD_ResetButton__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
WD_ResetButton__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
WD_ResetButton__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
WD_ResetButton__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
WD_ResetButton__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
WD_ResetButton__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
WD_ResetButton__PS EQU CYREG_PRT0_PS
WD_ResetButton__SHIFT EQU 2
WD_ResetButton__SLW EQU CYREG_PRT0_SLW

/* isr_button_reset */
isr_button_reset__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_button_reset__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_button_reset__INTC_MASK EQU 0x02
isr_button_reset__INTC_NUMBER EQU 1
isr_button_reset__INTC_PRIOR_NUM EQU 7
isr_button_reset__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
isr_button_reset__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_button_reset__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 26
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 26
CYDEV_CHIP_MEMBER_4AA EQU 25
CYDEV_CHIP_MEMBER_4AB EQU 30
CYDEV_CHIP_MEMBER_4AC EQU 14
CYDEV_CHIP_MEMBER_4AD EQU 15
CYDEV_CHIP_MEMBER_4AE EQU 16
CYDEV_CHIP_MEMBER_4D EQU 20
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 27
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 24
CYDEV_CHIP_MEMBER_4I EQU 32
CYDEV_CHIP_MEMBER_4J EQU 21
CYDEV_CHIP_MEMBER_4K EQU 22
CYDEV_CHIP_MEMBER_4L EQU 31
CYDEV_CHIP_MEMBER_4M EQU 29
CYDEV_CHIP_MEMBER_4N EQU 11
CYDEV_CHIP_MEMBER_4O EQU 8
CYDEV_CHIP_MEMBER_4P EQU 28
CYDEV_CHIP_MEMBER_4Q EQU 17
CYDEV_CHIP_MEMBER_4R EQU 9
CYDEV_CHIP_MEMBER_4S EQU 12
CYDEV_CHIP_MEMBER_4T EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 23
CYDEV_CHIP_MEMBER_4W EQU 13
CYDEV_CHIP_MEMBER_4X EQU 7
CYDEV_CHIP_MEMBER_4Y EQU 18
CYDEV_CHIP_MEMBER_4Z EQU 19
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 33
CYDEV_CHIP_MEMBER_FM3 EQU 37
CYDEV_CHIP_MEMBER_FM4 EQU 38
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 34
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 35
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 36
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4AA_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AB_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AC_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AD_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AE_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4W_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4X_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Y_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Z_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000003
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000003
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */
