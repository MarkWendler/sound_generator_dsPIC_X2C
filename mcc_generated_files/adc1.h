/**
  ADC1 Generated Driver API Header File

  @Company
    Microchip Technology Inc.

  @File Name
    adc1.h

  @Summary
    This is the generated header file for the ADC1 driver using PIC24 / dsPIC33 / PIC32MM MCUs

  @Description
    This header file provides APIs for driver for ADC1.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.169.0
        Device            :  dsPIC33CK256MP508
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.50
        MPLAB 	          :  MPLAB X v5.40
*/

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#ifndef _ADC1_H
#define _ADC1_H

/**
  Section: Included Files
*/

#include <xc.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif

/**
  Section: Data Types
*/

/** Scan Selected Macro Definition
 
 @Summary 
   Defines the scan option selection done for the shared channels.
 
 @Description
   This macro defines the scan option selection done for the shared channels.
 
 Remarks:
   None
 */
#define ADC1_SCAN_MODE_SELECTED true

/** ADC1 Channel Definition
 
 @Summary 
   Defines the channels selected.
 
 @Description
   This routine defines the channels that are available for the module to use.
 
 Remarks:
   None
 */
typedef enum 
{
    CH_AN2_TEMPEXT,//Channel Name:AN2   Assigned to:Shared Channel
    CH_AN4_IBUS,//Channel Name:AN4   Assigned to:Shared Channel
    CH_AN11_POT,//Channel Name:AN11   Assigned to:Shared Channel
    CH_AN12_TEMPLOCAL,//Channel Name:AN12   Assigned to:Shared Channel
    CH_AN15_VBUS,//Channel Name:AN15   Assigned to:Shared Channel
    CH_AN17_VA,//Channel Name:AN17   Assigned to:Shared Channel
    CH_AN22_VC,//Channel Name:AN22   Assigned to:Shared Channel
    CH_AN23_VB,//Channel Name:AN23   Assigned to:Shared Channel
    CH_AN0_IA,//Channel Name:AN0   Assigned to:Dedicated Core0
} ADC1_CHANNEL;

/**
  Section: Interface Routines
*/

/**
  @Summary
    Initializes ADC1 module.

  @Description
    This routine initializes ADC1 module, using the given initialization data. 
    This routine must be called before any other ADC routine is called. 

  @Preconditions
    None.

  @Param
    None.

  @Returns
    None

  @Example
    <code>
        int conversion,i=0;
        ADC1_Initialize();

        ADC1_Enable();
        ADC1_ChannelSelect(channel);
        ADC1_SoftwareTriggerEnable();
        //Provide Delay
        for(i=0;i <1000;i++)
        {
        }
        ADC1_SoftwareTriggerDisable();
        while(!ADC1_IsConversionComplete(channel));
        conversion = ADC1_ConversionResultGet(channel);
        ADC1_Disable(); 
    </code>
*/
void ADC1_Initialize (void);

/**
  @Summary
    Enables the ADC1 module.

  @Description
    This routine is used to enable the ADC1 module.
 
  @Preconditions
    ADC1_Initialize function should have been called 
    before calling this function.

  @Param
    None.

  @Returns
    None.

  @Example
    <code>
        int conversion,i=0;
        ADC1_Initialize();

        ADC1_Enable();
        ADC1_ChannelSelect(channel);
        ADC1_SoftwareTriggerEnable();
        //Provide Delay
        for(i=0;i <1000;i++)
        {
        }
        ADC1_SoftwareTriggerDisable();
        while(!ADC1_IsConversionComplete(channel));
        conversion = ADC1_ConversionResultGet(channel);
        ADC1_Disable(); 
    </code>
*/
inline static void ADC1_Enable(void)
{
   ADCON1Lbits.ADON = 1;
}

/**
  @Summary
    Disables the ADC1 module.

  @Description
    This routine is used to disable the ADC1 module.
 
  @Preconditions
    ADC1_Initialize function should have been called 
    before calling this function.

  @Param
    None.

  @Returns
    None.

  @Example
    <code>
        int conversion,i=0;
        ADC1_Initialize();

        ADC1_Enable();
        ADC1_ChannelSelect(channel);
        ADC1_SoftwareTriggerEnable();
        //Provide Delay
        for(i=0;i <1000;i++)
        {
        }
        ADC1_SoftwareTriggerDisable();
        while(!ADC1_IsConversionComplete(channel));
        conversion = ADC1_ConversionResultGet(channel);
        ADC1_Disable(); 
    </code>
*/
inline static void ADC1_Disable(void)
{
   ADCON1Lbits.ADON = 0;
}

/**
  @Summary
    Enables software common trigger.

  @Description
    This routine is used to enable the ADC1 software common trigger.
 
  @Preconditions
    ADC1_Initialize function should have been called 
    before calling this function.

  @Param
    None.

  @Returns
    None.

  @Example
    <code>
        int conversion,i=0;
        ADC1_Initialize();

        ADC1_Enable();
        ADC1_ChannelSelect(channel);
        ADC1_SoftwareTriggerEnable();
        //Provide Delay
        for(i=0;i <1000;i++)
        {
        }
        ADC1_SoftwareTriggerDisable();
        while(!ADC1_IsConversionComplete(channel));
        conversion = ADC1_ConversionResultGet(channel);
        ADC1_Disable(); 
    </code>
*/

inline static void ADC1_SoftwareTriggerEnable(void)
{
   ADCON3Lbits.SWCTRG = 1;
}

/**
  @Summary
    Disables software common trigger.

  @Description
    This routine is used to disable the ADC1 software common trigger.
 
  @Preconditions
    ADC1_Initialize function should have been called 
    before calling this function.

  @Param
    None.

  @Returns
    None.

  @Example
    <code>
        int conversion,i=0;
        ADC1_Initialize();

        ADC1_Enable();
        ADC1_ChannelSelect(channel);
        ADC1_SoftwareTriggerEnable();
        //Provide Delay
        for(i=0;i <1000;i++)
        {
        }
        ADC1_SoftwareTriggerDisable();
        while(!ADC1_IsConversionComplete(channel));
        conversion = ADC1_ConversionResultGet(channel);
        ADC1_Disable(); 
    </code>
*/
inline static void ADC1_SoftwareTriggerDisable(void)
{
   ADCON3Lbits.SWCTRG = 0;
}

/**
  @Summary
    Allows selection of a channel for conversion.

  @Description
    This routine is used to select desired channel for conversion.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.

  @Param
    channel - Channel for conversion

  @Returns
    None
  
  @Example
    <code>
        int conversion,i=0;
        ADC1_Initialize();

        ADC1_Enable();
        ADC1_ChannelSelect(channel);
        ADC1_SoftwareTriggerEnable();
        //Provide Delay
        for(i=0;i <1000;i++)
        {
        }
        ADC1_SoftwareTriggerDisable();
        while(!ADC1_IsConversionComplete(channel));
        conversion = ADC1_ConversionResultGet(channel);
        ADC1_Disable(); 
    </code>
*/
inline static void ADC1_ChannelSelect( ADC1_CHANNEL channel )
{
    /*This routine does not have any implementation since 
            *Shared channels are selected from UI.
            *Dedicated channels are selected from UI.
    */
}

/**
  @Summary
    Returns the conversion value for the channel selected.

  @Description
    This routine is used to get the analog to digital converted value for a 
    specific channel.
 
  @Preconditions
    This routine returns the conversion value only after the conversion is complete. 
    Conversion completion status can be checked using ADC1_IsConversionComplete(channel)
    routine.

  @Param
    channel - Selected channel
   
  @Returns
   Returns the analog to digital converted value
  
  @Example
    <code>
        int conversion,i=0;
        ADC1_Initialize();

        ADC1_Enable();
        ADC1_ChannelSelect(channel);
        ADC1_SoftwareTriggerEnable();
        //Provide Delay
        for(i=0;i <1000;i++)
        {
        }
        ADC1_SoftwareTriggerDisable();
        while(!ADC1_IsConversionComplete(channel));
        conversion = ADC1_ConversionResultGet(channel);
        ADC1_Disable(); 
    </code>
 */
inline static uint16_t ADC1_ConversionResultGet( ADC1_CHANNEL channel )
{
    uint16_t result;

    switch(channel)
    {
        case CH_AN2_TEMPEXT:
                result = ADCBUF2;
                break;
        case CH_AN4_IBUS:
                result = ADCBUF4;
                break;
        case CH_AN11_POT:
                result = ADCBUF11;
                break;
        case CH_AN12_TEMPLOCAL:
                result = ADCBUF12;
                break;
        case CH_AN15_VBUS:
                result = ADCBUF15;
                break;
        case CH_AN17_VA:
                result = ADCBUF17;
                break;
        case CH_AN22_VC:
                result = ADCBUF22;
                break;
        case CH_AN23_VB:
                result = ADCBUF23;
                break;
        case CH_AN0_IA:
                result = ADCBUF0;
                break;
        default:
                break;
    }
    return result;
}

/**
  @Summary
    Returns the status of conversion.

  @Description
    This routine is used to determine if conversion is completed. When conversion
    is complete the routine returns true otherwise false.
 
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.

  @Param
    channel - Selected channel
 
  @Returns
    true - Conversion is complete.
    false - Conversion is not complete.
  
  @Example
    <code>
        int conversion,i=0;
        ADC1_Initialize();

        ADC1_Enable();
        ADC1_ChannelSelect(channel);
        ADC1_SoftwareTriggerEnable();
        //Provide Delay
        for(i=0;i <1000;i++)
        {
        }
        ADC1_SoftwareTriggerDisable();
        while(!ADC1_IsConversionComplete(channel));
        conversion = ADC1_ConversionResultGet(channel);
        ADC1_Disable(); 
    </code>
 */
inline static bool ADC1_IsConversionComplete(ADC1_CHANNEL channel)
{
    bool status;

    switch(channel)
    {
        case CH_AN2_TEMPEXT:
                status = ADSTATLbits.AN2RDY;
                break;
        case CH_AN4_IBUS:
                status = ADSTATLbits.AN4RDY;
                break;
        case CH_AN11_POT:
                status = ADSTATLbits.AN11RDY;
                break;
        case CH_AN12_TEMPLOCAL:
                status = ADSTATLbits.AN12RDY;
                break;
        case CH_AN15_VBUS:
                status = ADSTATLbits.AN15RDY;
                break;
        case CH_AN17_VA:
                status = ADSTATHbits.AN17RDY;
                break;
        case CH_AN22_VC:
                status = ADSTATHbits.AN22RDY;
                break;
        case CH_AN23_VB:
                status = ADSTATHbits.AN23RDY;
                break;
        case CH_AN0_IA:
                status = ADSTATLbits.AN0RDY;
                break;
        default:
                break;
    }

    return status;
}

/**
  @Summary
    Enables interrupts.

  @Description
    This routine is used to enable the ADC1 interrupt.
 
  @Preconditions
    None.

  @Param
    None.

  @Returns
    None.

  @Example
    <code>
        ADC1_InterruptEnable(); 
    </code>
*/
inline static void ADC1_InterruptEnable(void)
{
    IEC5bits.ADCIE = 1;
}

/**
  @Summary
    Disables interrupts.

  @Description
    This routine is used to disable the ADC1 interrupt.
 
  @Preconditions
    None.

  @Param
    None.

  @Returns
    None.

  @Example
    <code>
        ADC1_InterruptDisable(); 
    </code>
*/
inline static void ADC1_InterruptDisable(void)
{
    IEC5bits.ADCIE = 0;
}

/**
  @Summary
    Clears interrupt flag

  @Description
    This routine is used to clear the interrupt flag manually.
 
  @Preconditions
    None.

  @Param
    None.

  @Returns
    None.

  @Example
    <code>
        ADC1_InterruptFlagClear(); 
    </code>
*/
inline static void ADC1_InterruptFlagClear(void)
{
    IFS5bits.ADCIF = 0;
}

/**
  @Summary
    Allows selection of priority for interrupt.

  @Description
    This routine is used to select desired priority for interrupt.
  
  @Preconditions
    None.

  @Param
    None.

  @Returns
    None.

  @Example
    <code>
        uint16_t priorityValue;
        priorityValue = 0x002;
 
        ADC1_InterruptPrioritySet(priorityValue); 
    </code>
*/
inline static void ADC1_InterruptPrioritySet( uint16_t priorityValue )
{
    IPC22bits.ADCIP = 0x7 & priorityValue;
}

/**
  @Summary
    ADC1 Common callback routine.

  @Description
    This routine is a ADC1 Common callback function.
  
  @Preconditions
    None.

  @Param
    None.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCommonInterruptHandler(&ADC1_CallBack);
    </code>
*/
void ADC1_CallBack(void);

/**
  @Summary
    Assigns a function pointer with a ADC1 Common callback address.

  @Description
    This routine assigns a function pointer with a ADC1 Common callback address.
  
  @Preconditions
    None.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCommonInterruptHandler(&ADC1_CallBack);
    </code>
*/
void ADC1_SetCommonInterruptHandler(void* handler);

/**
  @Summary
    Polled implementation

  @Description
    This routine is used to implement the tasks for polled implementations.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Param
    None

  @Returns 
    None
 
  @Example
    <code>    
        ADC1_Tasks();
    </code>
*/
void ADC1_Tasks(void);

/**
  @Summary
    Enables individual channel interrupt.

  @Description
    This routine is used to enable the ADC1 individual channel
    interrupt.
 
  @Preconditions
    None.

  @Param
    channel - Selected channel

  @Returns
    None.

  @Example
    <code>
        ADC1_IndividualChannelInterruptEnable(channel); 
    </code>
*/
inline static void ADC1_IndividualChannelInterruptEnable(ADC1_CHANNEL channel)
{
    switch(channel)
    {
        case CH_AN2_TEMPEXT:
                IEC5bits.ADCAN2IE = 1;
                break;
        case CH_AN4_IBUS:
                IEC5bits.ADCAN4IE = 1;
                break;
        case CH_AN11_POT:
                IEC6bits.ADCAN11IE = 1;
                break;
        case CH_AN12_TEMPLOCAL:
                IEC6bits.ADCAN12IE = 1;
                break;
        case CH_AN15_VBUS:
                IEC6bits.ADCAN15IE = 1;
                break;
        case CH_AN17_VA:
                IEC6bits.ADCAN17IE = 1;
                break;
        case CH_AN22_VC:
                IEC7bits.ADCAN22IE = 1;
                break;
        case CH_AN23_VB:
                IEC7bits.ADCAN23IE = 1;
                break;
        case CH_AN0_IA:
                IEC5bits.ADCAN0IE = 1;
                break;
        default:
                break;
    }
}

/**
  @Summary
    Disables individual channel interrupt.

  @Description
    This routine is used to disable the ADC1 individual channel
    interrupt.
 
  @Preconditions
    None.

  @Param
    channel - Selected channel

  @Returns
    None.

  @Example
    <code>
        ADC1_IndividualChannelInterruptDisable(channel); 
    </code>
*/
inline static void ADC1_IndividualChannelInterruptDisable(ADC1_CHANNEL channel)
{
    switch(channel)
    {
        case CH_AN2_TEMPEXT:
                IEC5bits.ADCAN2IE = 0;
                break;
        case CH_AN4_IBUS:
                IEC5bits.ADCAN4IE = 0;
                break;
        case CH_AN11_POT:
                IEC6bits.ADCAN11IE = 0;
                break;
        case CH_AN12_TEMPLOCAL:
                IEC6bits.ADCAN12IE = 0;
                break;
        case CH_AN15_VBUS:
                IEC6bits.ADCAN15IE = 0;
                break;
        case CH_AN17_VA:
                IEC6bits.ADCAN17IE = 0;
                break;
        case CH_AN22_VC:
                IEC7bits.ADCAN22IE = 0;
                break;
        case CH_AN23_VB:
                IEC7bits.ADCAN23IE = 0;
                break;
        case CH_AN0_IA:
                IEC5bits.ADCAN0IE = 0;
                break;
        default:
                break;
    }
}

/**
  @Summary
    Clears individual channel interrupt flag

  @Description
    This routine is used to clear the individual channel interrupt flag manually.
 
  @Preconditions
    None.

  @Param
    channel - Selected channel

  @Returns
    None.

  @Example
    <code>
        ADC1_IndividualChannelInterruptFlagClear(channel); 
    </code>
*/
inline static void ADC1_IndividualChannelInterruptFlagClear(ADC1_CHANNEL channel)
{
    switch(channel)
    {
        case CH_AN2_TEMPEXT:
                IFS5bits.ADCAN2IF = 0;
                break;
        case CH_AN4_IBUS:
                IFS5bits.ADCAN4IF = 0;
                break;
        case CH_AN11_POT:
                IFS6bits.ADCAN11IF = 0;
                break;
        case CH_AN12_TEMPLOCAL:
                IFS6bits.ADCAN12IF = 0;
                break;
        case CH_AN15_VBUS:
                IFS6bits.ADCAN15IF = 0;
                break;
        case CH_AN17_VA:
                IFS6bits.ADCAN17IF = 0;
                break;
        case CH_AN22_VC:
                IFS7bits.ADCAN22IF = 0;
                break;
        case CH_AN23_VB:
                IFS7bits.ADCAN23IF = 0;
                break;
        case CH_AN0_IA:
                IFS5bits.ADCAN0IF = 0;
                break;
        default:
                break;
    }
}

/**
  @Summary
    ADC1 CH_AN2_TEMPEXT callback routine.

  @Description
    This routine is a ADC1 CH_AN2_TEMPEXT callback function.
  
  @Preconditions
    None.

  @Param
    None.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN2_TEMPEXTInterruptHandler(&ADC1_CH_AN2_TEMPEXT_CallBack);
    </code>
*/
void ADC1_CH_AN2_TEMPEXT_CallBack(uint16_t adcVal);

/**
  @Summary
    Assigns a function pointer with a ADC1 CH_AN2_TEMPEXT callback address.

  @Description
    This routine assigns a function pointer with a ADC1 CH_AN2_TEMPEXT callback address.
  
  @Preconditions
    None.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN2_TEMPEXTInterruptHandler(&ADC1_CH_AN2_TEMPEXT_CallBack);
    </code>
*/
void ADC1_SetCH_AN2_TEMPEXTInterruptHandler(void* handler);

/**
  @Summary
    Polled implementation

  @Description
    This routine is used to implement the tasks for ADC1 CH_AN2_TEMPEXT polled implementations.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Param
    None

  @Returns 
    None
 
  @Example
    <code>    
        ADC1_CH_AN2_TEMPEXT_Tasks();
    </code>
*/
void ADC1_CH_AN2_TEMPEXT_Tasks(void);

/**
  @Summary
    ADC1 CH_AN4_IBUS callback routine.

  @Description
    This routine is a ADC1 CH_AN4_IBUS callback function.
  
  @Preconditions
    None.

  @Param
    None.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN4_IBUSInterruptHandler(&ADC1_CH_AN4_IBUS_CallBack);
    </code>
*/
void ADC1_CH_AN4_IBUS_CallBack(uint16_t adcVal);

/**
  @Summary
    Assigns a function pointer with a ADC1 CH_AN4_IBUS callback address.

  @Description
    This routine assigns a function pointer with a ADC1 CH_AN4_IBUS callback address.
  
  @Preconditions
    None.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN4_IBUSInterruptHandler(&ADC1_CH_AN4_IBUS_CallBack);
    </code>
*/
void ADC1_SetCH_AN4_IBUSInterruptHandler(void* handler);

/**
  @Summary
    Polled implementation

  @Description
    This routine is used to implement the tasks for ADC1 CH_AN4_IBUS polled implementations.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Param
    None

  @Returns 
    None
 
  @Example
    <code>    
        ADC1_CH_AN4_IBUS_Tasks();
    </code>
*/
void ADC1_CH_AN4_IBUS_Tasks(void);

/**
  @Summary
    ADC1 CH_AN11_POT callback routine.

  @Description
    This routine is a ADC1 CH_AN11_POT callback function.
  
  @Preconditions
    None.

  @Param
    None.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN11_POTInterruptHandler(&ADC1_CH_AN11_POT_CallBack);
    </code>
*/
void ADC1_CH_AN11_POT_CallBack(uint16_t adcVal);

/**
  @Summary
    Assigns a function pointer with a ADC1 CH_AN11_POT callback address.

  @Description
    This routine assigns a function pointer with a ADC1 CH_AN11_POT callback address.
  
  @Preconditions
    None.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN11_POTInterruptHandler(&ADC1_CH_AN11_POT_CallBack);
    </code>
*/
void ADC1_SetCH_AN11_POTInterruptHandler(void* handler);

/**
  @Summary
    Polled implementation

  @Description
    This routine is used to implement the tasks for ADC1 CH_AN11_POT polled implementations.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Param
    None

  @Returns 
    None
 
  @Example
    <code>    
        ADC1_CH_AN11_POT_Tasks();
    </code>
*/
void ADC1_CH_AN11_POT_Tasks(void);

/**
  @Summary
    ADC1 CH_AN12_TEMPLOCAL callback routine.

  @Description
    This routine is a ADC1 CH_AN12_TEMPLOCAL callback function.
  
  @Preconditions
    None.

  @Param
    None.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN12_TEMPLOCALInterruptHandler(&ADC1_CH_AN12_TEMPLOCAL_CallBack);
    </code>
*/
void ADC1_CH_AN12_TEMPLOCAL_CallBack(uint16_t adcVal);

/**
  @Summary
    Assigns a function pointer with a ADC1 CH_AN12_TEMPLOCAL callback address.

  @Description
    This routine assigns a function pointer with a ADC1 CH_AN12_TEMPLOCAL callback address.
  
  @Preconditions
    None.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN12_TEMPLOCALInterruptHandler(&ADC1_CH_AN12_TEMPLOCAL_CallBack);
    </code>
*/
void ADC1_SetCH_AN12_TEMPLOCALInterruptHandler(void* handler);

/**
  @Summary
    Polled implementation

  @Description
    This routine is used to implement the tasks for ADC1 CH_AN12_TEMPLOCAL polled implementations.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Param
    None

  @Returns 
    None
 
  @Example
    <code>    
        ADC1_CH_AN12_TEMPLOCAL_Tasks();
    </code>
*/
void ADC1_CH_AN12_TEMPLOCAL_Tasks(void);

/**
  @Summary
    ADC1 CH_AN15_VBUS callback routine.

  @Description
    This routine is a ADC1 CH_AN15_VBUS callback function.
  
  @Preconditions
    None.

  @Param
    None.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN15_VBUSInterruptHandler(&ADC1_CH_AN15_VBUS_CallBack);
    </code>
*/
void ADC1_CH_AN15_VBUS_CallBack(uint16_t adcVal);

/**
  @Summary
    Assigns a function pointer with a ADC1 CH_AN15_VBUS callback address.

  @Description
    This routine assigns a function pointer with a ADC1 CH_AN15_VBUS callback address.
  
  @Preconditions
    None.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN15_VBUSInterruptHandler(&ADC1_CH_AN15_VBUS_CallBack);
    </code>
*/
void ADC1_SetCH_AN15_VBUSInterruptHandler(void* handler);

/**
  @Summary
    Polled implementation

  @Description
    This routine is used to implement the tasks for ADC1 CH_AN15_VBUS polled implementations.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Param
    None

  @Returns 
    None
 
  @Example
    <code>    
        ADC1_CH_AN15_VBUS_Tasks();
    </code>
*/
void ADC1_CH_AN15_VBUS_Tasks(void);

/**
  @Summary
    ADC1 CH_AN17_VA callback routine.

  @Description
    This routine is a ADC1 CH_AN17_VA callback function.
  
  @Preconditions
    None.

  @Param
    None.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN17_VAInterruptHandler(&ADC1_CH_AN17_VA_CallBack);
    </code>
*/
void ADC1_CH_AN17_VA_CallBack(uint16_t adcVal);

/**
  @Summary
    Assigns a function pointer with a ADC1 CH_AN17_VA callback address.

  @Description
    This routine assigns a function pointer with a ADC1 CH_AN17_VA callback address.
  
  @Preconditions
    None.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN17_VAInterruptHandler(&ADC1_CH_AN17_VA_CallBack);
    </code>
*/
void ADC1_SetCH_AN17_VAInterruptHandler(void* handler);

/**
  @Summary
    Polled implementation

  @Description
    This routine is used to implement the tasks for ADC1 CH_AN17_VA polled implementations.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Param
    None

  @Returns 
    None
 
  @Example
    <code>    
        ADC1_CH_AN17_VA_Tasks();
    </code>
*/
void ADC1_CH_AN17_VA_Tasks(void);

/**
  @Summary
    ADC1 CH_AN22_VC callback routine.

  @Description
    This routine is a ADC1 CH_AN22_VC callback function.
  
  @Preconditions
    None.

  @Param
    None.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN22_VCInterruptHandler(&ADC1_CH_AN22_VC_CallBack);
    </code>
*/
void ADC1_CH_AN22_VC_CallBack(uint16_t adcVal);

/**
  @Summary
    Assigns a function pointer with a ADC1 CH_AN22_VC callback address.

  @Description
    This routine assigns a function pointer with a ADC1 CH_AN22_VC callback address.
  
  @Preconditions
    None.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN22_VCInterruptHandler(&ADC1_CH_AN22_VC_CallBack);
    </code>
*/
void ADC1_SetCH_AN22_VCInterruptHandler(void* handler);

/**
  @Summary
    Polled implementation

  @Description
    This routine is used to implement the tasks for ADC1 CH_AN22_VC polled implementations.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Param
    None

  @Returns 
    None
 
  @Example
    <code>    
        ADC1_CH_AN22_VC_Tasks();
    </code>
*/
void ADC1_CH_AN22_VC_Tasks(void);

/**
  @Summary
    ADC1 CH_AN23_VB callback routine.

  @Description
    This routine is a ADC1 CH_AN23_VB callback function.
  
  @Preconditions
    None.

  @Param
    None.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN23_VBInterruptHandler(&ADC1_CH_AN23_VB_CallBack);
    </code>
*/
void ADC1_CH_AN23_VB_CallBack(uint16_t adcVal);

/**
  @Summary
    Assigns a function pointer with a ADC1 CH_AN23_VB callback address.

  @Description
    This routine assigns a function pointer with a ADC1 CH_AN23_VB callback address.
  
  @Preconditions
    None.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN23_VBInterruptHandler(&ADC1_CH_AN23_VB_CallBack);
    </code>
*/
void ADC1_SetCH_AN23_VBInterruptHandler(void* handler);

/**
  @Summary
    Polled implementation

  @Description
    This routine is used to implement the tasks for ADC1 CH_AN23_VB polled implementations.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Param
    None

  @Returns 
    None
 
  @Example
    <code>    
        ADC1_CH_AN23_VB_Tasks();
    </code>
*/
void ADC1_CH_AN23_VB_Tasks(void);


/**
  @Summary
    ADC1 CH_AN0_IA callback routine.

  @Description
    This routine is a ADC1 CH_AN0_IA callback function.
  
  @Preconditions
    None.

  @Param
    None.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN0_IAInterruptHandler(&ADC1_CH_AN0_IA_CallBack);
    </code>
*/
void ADC1_CH_AN0_IA_CallBack(uint16_t adcVal);

/**
  @Summary
    Assigns a function pointer with a ADC1 CH_AN0_IA callback address.

  @Description
    This routine assigns a function pointer with a ADC1 CH_AN0_IA callback address.
  
  @Preconditions
    None.

  @Param
    Address of the callback routine.

  @Returns
    None
 
  @Example 
    <code>
        ADC1_SetCH_AN0_IAInterruptHandler(&ADC1_CH_AN0_IA_CallBack);
    </code>
*/
void ADC1_SetCH_AN0_IAInterruptHandler(void* handler);



/**
  Section: Interface Routines: Dedicated Core
*/
/**
  @Summary
    Enables power for Core 0 

  @Description
    This routine is used to set the analog and digital power for ADC1 Core 0.
 
  @Preconditions
    None.

  @Param
    None

  @Returns
    None.

  @Example
    Refer to ADC1_Initialize() for an example
*/
void ADC1_Core0PowerEnable(void);

/**
  @Summary
    Enables power for Core 1 

  @Description
    This routine is used to set the analog and digital power for ADC1 Core 1.
 
  @Preconditions
    None.

  @Param
    None

  @Returns
    None.

  @Example
    Refer to ADC1_Initialize() for an example
*/
void ADC1_Core1PowerEnable(void);


/**
  @Summary
    Enables power for ADC1 shared Core

  @Description
    This routine is used to set the analog and digital power for ADC1 shared Core.
 
  @Preconditions
    None.

  @Param
    None

  @Returns
    None.

  @Example
    Refer to ADC1_Initialize() for an example
*/
void ADC1_SharedCorePowerEnable(void);



/*******************************************************************************

  !!! Deprecated Definitions and APIs !!!
  !!! These functions will not be supported in future releases !!!

*******************************************************************************/
/** ADC1 Core 0 Channel Definition

 @Summary 
   Defines the Core 0 channels available for conversion
 
 @Description
   This routine defines the channels that are available conversion.
 
 Remarks:
   None
*/
typedef enum 
{   
    ADC1_CORE0_AN0  =  0,

    ADC1_CORE0_ANA0  =  1,
} ADC1_CORE0_CHANNEL;
/** ADC1 Core 1 Channel Definition
 @Summary 
   Defines the Core 1 channels available for conversion
 
 @Description
   This routine defines the channels that are available conversion.
 
 Remarks:
   None
*/
typedef enum 
{   
    ADC1_CORE1_AN1  =  0,

    ADC1_CORE1_ANA1  =  1,
} ADC1_CORE1_CHANNEL;
/** ADC1 Data Format Type Definition
 
 @Summary 
   Defines the data format types available
 
 @Description
   This routine defines the data format types that are available for the module 
   to use.
 
 Remarks:
   None
 */
typedef enum 
{
    ADC1_FORM_INT   = 0, /* Integer */
    ADC1_FORM_FRACT = 1  /* Fraction */
} ADC1_FORM_TYPE;

/** ADC1 Resolution Type Definition
 
 @Summary 
   Defines the resolution types available
 
 @Description
   This routine defines the resolution types that are available for the module 
   to use.
 
 Remarks:
   None
 */
typedef enum 
{
    ADC1_RESOLUTION_6_BIT    = 0, /* 6-bit ADC1 operation */
    ADC1_RESOLUTION_8_BIT    = 1, /* 8-bit ADC1 operation */
    ADC1_RESOLUTION_10_BIT   = 0, /* 10-bit ADC1 operation */
    ADC1_RESOLUTION_12_BIT   = 1  /* 12-bit ADC1 operation */
} ADC1_RESOLUTION_TYPE;

/**
  @Summary
    Allows software level-sensitive common trigger to be enabled manually

  @Description
    This routine is used to enable the ADC1 software level-sensitive common trigger manually
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function. 
 
  @Returns
    None

  @Param
    None
  
  @Example
*/
inline static void __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_SoftwareLevelTriggerEnable(void)
{
    ADCON3Lbits.SWLCTRG = 1;
}

/**

  @Summary
    Sets Core 0 channel

  @Description
    This routine is used to set the ADC1 Core 0 channel manually.
 
  @Preconditions
    None.

  @Param
    None

  @Returns
    None.

  @Example
    Refer to ADC1_Initialize() for an example

*/
inline static void __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_Core0ChannelSelect(ADC1_CORE0_CHANNEL channel)
{
   ADCON4Hbits.C0CHS = channel;
}
/**
  @Summary
    Returns the ADC1 conversion value for Core 0.

  @Description
    This routine is used to get the analog to digital converted value. This
    routine gets converted values from the channel specified.
 
  @Preconditions
    The core required must be enabled and calibrated before calling this routine 
    using ADC1_Core0PowerEnable() and ADC1_Core0Calibration() 
    respectively. This routine returns the conversion value only after the 
    conversion is complete. Completion status conversion can be checked using 
    ADC1_IsCore0ConversionComplete() routine.
   
  @Returns
    Returns the buffer containing the conversion value.

  @Param
    Buffer address
  
  @Example
    Refer to ADC1_Initialize(); for an example
 */

inline static uint16_t __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_Core0ConversionResultGet(void) 
{
    return ADCBUF0;
}
/**
  @Summary
    Allows selection of a resolution mode for conversion

  @Description
    This routine is used to select desired resolution mode for conversion.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    None

  @Param
    Pass in required resolution mode from the ADC1_RESOLUTION_TYPE list
  
  @Example
    Refer to ADC1_Initialize(); for an example
*/

inline static void __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_Core0ResolutionModeSet( ADC1_RESOLUTION_TYPE resolution )
{
    ADCORE0Hbits.RES = resolution;
}
/**
  @Summary
    Returns the conversion status of core0 for conversion

  @Description
    This routine is used to return the conversion status of core0 selected for conversion.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    The value of the Core Conversion register

  @Param
    None
  
  @Example
    Refer to ADC1_Initialize(); for an example
 
*/

inline static bool __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_IsCore0ConversionComplete(void)
{   
    return ADSTATLbits.AN0RDY;
}

/**
  @Summary
    Allows conversion clock prescaler value to be set

  @Description
    This routine is used to allow conversion clock prescaler value to be set manually
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    None

  @Param
    Pass in required prescaler integer value
  
  @Example
    Refer to ADC1_Initialize(); for an example
 
*/

inline static void __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_Core0ConversionClockPrescalerSet(uint8_t prescaler)
{
    ADCORE0Hbits.ADCS = prescaler;
}

/**

  @Summary
    Sets Core 0 channel

  @Description
    This routine is used to set the ADC1 Core 1 channel manually.
 
  @Preconditions
    None.

  @Param
    None

  @Returns
    None.

  @Example
    Refer to ADC1_Initialize() for an example

*/
inline static void __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_Core1ChannelSelect(ADC1_CORE1_CHANNEL channel)
{
   ADCON4Hbits.C1CHS = channel;
}
/**
  @Summary
    Returns the ADC1 conversion value for Core 1.

  @Description
    This routine is used to get the analog to digital converted value. This
    routine gets converted values from the channel specified.
 
  @Preconditions
    The core required must be enabled and calibrated before calling this routine 
    using ADC1_Core1PowerEnable() and ADC1_Core1Calibration() 
    respectively. This routine returns the conversion value only after the 
    conversion is complete. Completion status conversion can be checked using 
    ADC1_IsCore1ConversionComplete() routine.
   
  @Returns
    Returns the buffer containing the conversion value.

  @Param
    Buffer address
  
  @Example
    Refer to ADC1_Initialize(); for an example
 */

inline static uint16_t __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_Core1ConversionResultGet(void) 
{
    return ADCBUF1;
}
/**
  @Summary
    Allows selection of a resolution mode for conversion

  @Description
    This routine is used to select desired resolution mode for conversion.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    None

  @Param
    Pass in required resolution mode from the ADC1_RESOLUTION_TYPE list
  
  @Example
    Refer to ADC1_Initialize(); for an example
*/

inline static void __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_Core1ResolutionModeSet( ADC1_RESOLUTION_TYPE resolution )
{
    ADCORE1Hbits.RES = resolution;
}
/**
  @Summary
    Returns the conversion status of core1 for conversion

  @Description
    This routine is used to return the conversion status of core1 selected for conversion.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    The value of the Core Conversion register

  @Param
    None
  
  @Example
    Refer to ADC1_Initialize(); for an example
 
*/

inline static bool __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_IsCore1ConversionComplete(void)
{   
    return ADSTATLbits.AN1RDY;
}

/**
  @Summary
    Allows conversion clock prescaler value to be set

  @Description
    This routine is used to allow conversion clock prescaler value to be set manually
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    None

  @Param
    Pass in required prescaler integer value
  
  @Example
    Refer to ADC1_Initialize(); for an example
 
*/

inline static void __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_Core1ConversionClockPrescalerSet(uint8_t prescaler)
{
    ADCORE1Hbits.ADCS = prescaler;
}

/**
  @Summary
    Allows selection of a data format type for conversion

  @Description
    This routine is used to select desired data format for conversion.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    None

  @Param
    Pass in required data format type from the ADC1_FORM_TYPE list
  
  @Example
    Refer to ADC1_Initialize(); for an example
*/
inline static void __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_FormatDataSet( ADC1_FORM_TYPE form )
{
    ADCON1Hbits.FORM = form;
}
/**
  @Summary
    Allows selection of a resolution mode for conversion

  @Description
    This routine is used to select desired resolution mode for conversion.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    None

  @Param
    Pass in required resolution mode from the ADC1_RESOLUTION_TYPE list
  
  @Example
    Refer to ADC1_Initialize(); for an example
*/
inline static void __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_SharedCoreResolutionModeSet( ADC1_RESOLUTION_TYPE resolution )
{
    ADCON1Hbits.SHRRES = resolution;
}
/**
  @Summary
    Allows conversion clock prescaler value to be set

  @Description
    This routine is used to allow conversion clock prescaler value to be set manually
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    None

  @Param
    Pass in required prescaler integer value
  
  @Example
    Refer to ADC1_Initialize(); for an example
 
*/
inline static void __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_SharedCoreConversionClockPrescalerSet(uint8_t prescaler)
{
    ADCON2Lbits.SHRADCS = prescaler;
}
/**
  @Summary
    Returns the ADC1 conversion value for the shared core channel AN2

  @Description
    This routine is used to get the analog to digital converted value for channel AN2. This
    routine gets converted values from the shared core channel AN2.
 
  @Preconditions
    The shared core must be enabled and calibrated before calling this routine 
    using ADC1_SharedCorePowerEnable() and ADC1_SharedCoreCalibration() 
    respectively. This routine returns the conversion value only after the 
    conversion is complete. Completion status conversion can be checked using 
    ADC1_IsSharedChannelAN2ConversionComplete() routine.
   
  @Returns
    Returns the buffer containing the conversion value.

  @Param
    Buffer address
  
  @Example
    Refer to ADC1_Initialize(); for an example
 */
inline static uint16_t __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_SharedChannelAN2ConversionResultGet(void) 
{
    return ADCBUF2;
}
/**
  @Summary
    Returns the conversion status of shared channel AN2 selected for conversion

  @Description
    This routine is used to return the conversion status of the shared channel AN2 
    selected for conversion.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    The value of the Channel AN2 Conversion register

  @Param
    None
  
  @Example
    Refer to ADC1_Initialize(); for an example
 
*/

inline static bool __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_IsSharedChannelAN2ConversionComplete(void)
{   
    return ADSTATLbits.AN2RDY;
}
/**
  @Summary
    Returns the ADC1 conversion value for the shared core channel AN4

  @Description
    This routine is used to get the analog to digital converted value for channel AN4. This
    routine gets converted values from the shared core channel AN4.
 
  @Preconditions
    The shared core must be enabled and calibrated before calling this routine 
    using ADC1_SharedCorePowerEnable() and ADC1_SharedCoreCalibration() 
    respectively. This routine returns the conversion value only after the 
    conversion is complete. Completion status conversion can be checked using 
    ADC1_IsSharedChannelAN4ConversionComplete() routine.
   
  @Returns
    Returns the buffer containing the conversion value.

  @Param
    Buffer address
  
  @Example
    Refer to ADC1_Initialize(); for an example
 */
inline static uint16_t __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_SharedChannelAN4ConversionResultGet(void) 
{
    return ADCBUF4;
}
/**
  @Summary
    Returns the conversion status of shared channel AN4 selected for conversion

  @Description
    This routine is used to return the conversion status of the shared channel AN4 
    selected for conversion.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    The value of the Channel AN4 Conversion register

  @Param
    None
  
  @Example
    Refer to ADC1_Initialize(); for an example
 
*/

inline static bool __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_IsSharedChannelAN4ConversionComplete(void)
{   
    return ADSTATLbits.AN4RDY;
}
/**
  @Summary
    Returns the ADC1 conversion value for the shared core channel AN11

  @Description
    This routine is used to get the analog to digital converted value for channel AN11. This
    routine gets converted values from the shared core channel AN11.
 
  @Preconditions
    The shared core must be enabled and calibrated before calling this routine 
    using ADC1_SharedCorePowerEnable() and ADC1_SharedCoreCalibration() 
    respectively. This routine returns the conversion value only after the 
    conversion is complete. Completion status conversion can be checked using 
    ADC1_IsSharedChannelAN11ConversionComplete() routine.
   
  @Returns
    Returns the buffer containing the conversion value.

  @Param
    Buffer address
  
  @Example
    Refer to ADC1_Initialize(); for an example
 */
inline static uint16_t __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_SharedChannelAN11ConversionResultGet(void) 
{
    return ADCBUF11;
}
/**
  @Summary
    Returns the conversion status of shared channel AN11 selected for conversion

  @Description
    This routine is used to return the conversion status of the shared channel AN11 
    selected for conversion.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    The value of the Channel AN11 Conversion register

  @Param
    None
  
  @Example
    Refer to ADC1_Initialize(); for an example
 
*/

inline static bool __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_IsSharedChannelAN11ConversionComplete(void)
{   
    return ADSTATLbits.AN11RDY;
}
/**
  @Summary
    Returns the ADC1 conversion value for the shared core channel AN12

  @Description
    This routine is used to get the analog to digital converted value for channel AN12. This
    routine gets converted values from the shared core channel AN12.
 
  @Preconditions
    The shared core must be enabled and calibrated before calling this routine 
    using ADC1_SharedCorePowerEnable() and ADC1_SharedCoreCalibration() 
    respectively. This routine returns the conversion value only after the 
    conversion is complete. Completion status conversion can be checked using 
    ADC1_IsSharedChannelAN12ConversionComplete() routine.
   
  @Returns
    Returns the buffer containing the conversion value.

  @Param
    Buffer address
  
  @Example
    Refer to ADC1_Initialize(); for an example
 */
inline static uint16_t __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_SharedChannelAN12ConversionResultGet(void) 
{
    return ADCBUF12;
}
/**
  @Summary
    Returns the conversion status of shared channel AN12 selected for conversion

  @Description
    This routine is used to return the conversion status of the shared channel AN12 
    selected for conversion.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    The value of the Channel AN12 Conversion register

  @Param
    None
  
  @Example
    Refer to ADC1_Initialize(); for an example
 
*/

inline static bool __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_IsSharedChannelAN12ConversionComplete(void)
{   
    return ADSTATLbits.AN12RDY;
}
/**
  @Summary
    Returns the ADC1 conversion value for the shared core channel AN15

  @Description
    This routine is used to get the analog to digital converted value for channel AN15. This
    routine gets converted values from the shared core channel AN15.
 
  @Preconditions
    The shared core must be enabled and calibrated before calling this routine 
    using ADC1_SharedCorePowerEnable() and ADC1_SharedCoreCalibration() 
    respectively. This routine returns the conversion value only after the 
    conversion is complete. Completion status conversion can be checked using 
    ADC1_IsSharedChannelAN15ConversionComplete() routine.
   
  @Returns
    Returns the buffer containing the conversion value.

  @Param
    Buffer address
  
  @Example
    Refer to ADC1_Initialize(); for an example
 */
inline static uint16_t __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_SharedChannelAN15ConversionResultGet(void) 
{
    return ADCBUF15;
}
/**
  @Summary
    Returns the conversion status of shared channel AN15 selected for conversion

  @Description
    This routine is used to return the conversion status of the shared channel AN15 
    selected for conversion.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    The value of the Channel AN15 Conversion register

  @Param
    None
  
  @Example
    Refer to ADC1_Initialize(); for an example
 
*/

inline static bool __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_IsSharedChannelAN15ConversionComplete(void)
{   
    return ADSTATLbits.AN15RDY;
}
/**
  @Summary
    Returns the ADC1 conversion value for the shared core channel AN17

  @Description
    This routine is used to get the analog to digital converted value for channel AN17. This
    routine gets converted values from the shared core channel AN17.
 
  @Preconditions
    The shared core must be enabled and calibrated before calling this routine 
    using ADC1_SharedCorePowerEnable() and ADC1_SharedCoreCalibration() 
    respectively. This routine returns the conversion value only after the 
    conversion is complete. Completion status conversion can be checked using 
    ADC1_IsSharedChannelAN17ConversionComplete() routine.
   
  @Returns
    Returns the buffer containing the conversion value.

  @Param
    Buffer address
  
  @Example
    Refer to ADC1_Initialize(); for an example
 */
inline static uint16_t __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_SharedChannelAN17ConversionResultGet(void) 
{
    return ADCBUF17;
}
/**
  @Summary
    Returns the conversion status of shared channel AN17 selected for conversion

  @Description
    This routine is used to return the conversion status of the shared channel AN17 
    selected for conversion.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    The value of the Channel AN17 Conversion register

  @Param
    None
  
  @Example
    Refer to ADC1_Initialize(); for an example
 
*/

inline static bool __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_IsSharedChannelAN17ConversionComplete(void)
{   
    return ADSTATHbits.AN17RDY;
}
/**
  @Summary
    Returns the ADC1 conversion value for the shared core channel AN22

  @Description
    This routine is used to get the analog to digital converted value for channel AN22. This
    routine gets converted values from the shared core channel AN22.
 
  @Preconditions
    The shared core must be enabled and calibrated before calling this routine 
    using ADC1_SharedCorePowerEnable() and ADC1_SharedCoreCalibration() 
    respectively. This routine returns the conversion value only after the 
    conversion is complete. Completion status conversion can be checked using 
    ADC1_IsSharedChannelAN22ConversionComplete() routine.
   
  @Returns
    Returns the buffer containing the conversion value.

  @Param
    Buffer address
  
  @Example
    Refer to ADC1_Initialize(); for an example
 */
inline static uint16_t __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_SharedChannelAN22ConversionResultGet(void) 
{
    return ADCBUF22;
}
/**
  @Summary
    Returns the conversion status of shared channel AN22 selected for conversion

  @Description
    This routine is used to return the conversion status of the shared channel AN22 
    selected for conversion.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    The value of the Channel AN22 Conversion register

  @Param
    None
  
  @Example
    Refer to ADC1_Initialize(); for an example
 
*/

inline static bool __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_IsSharedChannelAN22ConversionComplete(void)
{   
    return ADSTATHbits.AN22RDY;
}
/**
  @Summary
    Returns the ADC1 conversion value for the shared core channel AN23

  @Description
    This routine is used to get the analog to digital converted value for channel AN23. This
    routine gets converted values from the shared core channel AN23.
 
  @Preconditions
    The shared core must be enabled and calibrated before calling this routine 
    using ADC1_SharedCorePowerEnable() and ADC1_SharedCoreCalibration() 
    respectively. This routine returns the conversion value only after the 
    conversion is complete. Completion status conversion can be checked using 
    ADC1_IsSharedChannelAN23ConversionComplete() routine.
   
  @Returns
    Returns the buffer containing the conversion value.

  @Param
    Buffer address
  
  @Example
    Refer to ADC1_Initialize(); for an example
 */
inline static uint16_t __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_SharedChannelAN23ConversionResultGet(void) 
{
    return ADCBUF23;
}
/**
  @Summary
    Returns the conversion status of shared channel AN23 selected for conversion

  @Description
    This routine is used to return the conversion status of the shared channel AN23 
    selected for conversion.
  
  @Preconditions
    ADC1_Initialize() function should have been 
    called before calling this function.
 
  @Returns
    The value of the Channel AN23 Conversion register

  @Param
    None
  
  @Example
    Refer to ADC1_Initialize(); for an example
 
*/

inline static bool __attribute__((deprecated("\nThis will be removed in future MCC releases."))) ADC1_IsSharedChannelAN23ConversionComplete(void)
{   
    return ADSTATHbits.AN23RDY;
}

#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif

#endif //_ADC1_H
    
/**
 End of File
*/
