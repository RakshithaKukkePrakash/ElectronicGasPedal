/***************************************************************************
* File Name: Joystick_ADC_FinalBuf_dma.c  
* Version 1.70
*
*  Description:
*   Provides an API for the DMAC component. The API includes functions
*   for the DMA controller, DMA channels and Transfer Descriptors.
*
*
*   Note:
*     This module requires the developer to finish or fill in the auto
*     generated funcions and setup the dma channel and TD's.
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/
#include <CYLIB.H>
#include <CYDMAC.H>
#include <Joystick_ADC_FinalBuf_dma.H>



/****************************************************************************
* 
* The following defines are available in Cyfitter.h
* 
* 
* 
* Joystick_ADC_FinalBuf__DRQ_CTL_REG
* 
* 
* Joystick_ADC_FinalBuf__DRQ_NUMBER
* 
* Number of TD's used by this channel.
* Joystick_ADC_FinalBuf__NUMBEROF_TDS
* 
* Priority of this channel.
* Joystick_ADC_FinalBuf__PRIORITY
* 
* True if Joystick_ADC_FinalBuf_TERMIN_SEL is used.
* Joystick_ADC_FinalBuf__TERMIN_EN
* 
* TERMIN interrupt line to signal terminate.
* Joystick_ADC_FinalBuf__TERMIN_SEL
* 
* 
* True if Joystick_ADC_FinalBuf_TERMOUT0_SEL is used.
* Joystick_ADC_FinalBuf__TERMOUT0_EN
* 
* 
* TERMOUT0 interrupt line to signal completion.
* Joystick_ADC_FinalBuf__TERMOUT0_SEL
* 
* 
* True if Joystick_ADC_FinalBuf_TERMOUT1_SEL is used.
* Joystick_ADC_FinalBuf__TERMOUT1_EN
* 
* 
* TERMOUT1 interrupt line to signal completion.
* Joystick_ADC_FinalBuf__TERMOUT1_SEL
* 
****************************************************************************/


/* Zero based index of Joystick_ADC_FinalBuf dma channel */
uint8 Joystick_ADC_FinalBuf_DmaHandle = DMA_INVALID_CHANNEL;

/*********************************************************************
* Function Name: uint8 Joystick_ADC_FinalBuf_DmaInitalize
**********************************************************************
* Summary:
*   Allocates and initialises a channel of the DMAC to be used by the
*   caller.
*
* Parameters:
*   BurstCount.
*       
*       
*   ReqestPerBurst.
*       
*       
*   UpperSrcAddress.
*       
*       
*   UpperDestAddress.
*       
*
* Return:
*   The channel that can be used by the caller for DMA activity.
*   DMA_INVALID_CHANNEL (0xFF) if there are no channels left. 
*
*
*******************************************************************/
uint8 Joystick_ADC_FinalBuf_DmaInitialize(uint8 BurstCount, uint8 ReqestPerBurst, uint16 UpperSrcAddress, uint16 UpperDestAddress) 
{

    /* Allocate a DMA channel. */
    Joystick_ADC_FinalBuf_DmaHandle = (uint8)Joystick_ADC_FinalBuf__DRQ_NUMBER;

    /* Configure the channel. */
    (void)CyDmaChSetConfiguration(Joystick_ADC_FinalBuf_DmaHandle,
                                  BurstCount,
                                  ReqestPerBurst,
                                  (uint8)Joystick_ADC_FinalBuf__TERMOUT0_SEL,
                                  (uint8)Joystick_ADC_FinalBuf__TERMOUT1_SEL,
                                  (uint8)Joystick_ADC_FinalBuf__TERMIN_SEL);

    /* Set the extended address for the transfers */
    (void)CyDmaChSetExtendedAddress(Joystick_ADC_FinalBuf_DmaHandle, UpperSrcAddress, UpperDestAddress);

    /* Set the priority for this channel */
    (void)CyDmaChPriority(Joystick_ADC_FinalBuf_DmaHandle, (uint8)Joystick_ADC_FinalBuf__PRIORITY);
    
    return Joystick_ADC_FinalBuf_DmaHandle;
}

/*********************************************************************
* Function Name: void Joystick_ADC_FinalBuf_DmaRelease
**********************************************************************
* Summary:
*   Frees the channel associated with Joystick_ADC_FinalBuf.
*
*
* Parameters:
*   void.
*
*
*
* Return:
*   void.
*
*******************************************************************/
void Joystick_ADC_FinalBuf_DmaRelease(void) 
{
    /* Disable the channel */
    (void)CyDmaChDisable(Joystick_ADC_FinalBuf_DmaHandle);
}

