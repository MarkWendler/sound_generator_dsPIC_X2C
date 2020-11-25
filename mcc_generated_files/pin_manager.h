/**
  PIN MANAGER Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description:
    This source file provides implementations for PIN MANAGER.
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

#ifndef _PIN_MANAGER_H
#define _PIN_MANAGER_H
/**
    Section: Includes
*/
#include <xc.h>

/**
    Section: Device Pin Macros
*/
/**
  @Summary
    Sets the GPIO pin, RA0, high using LATA0.

  @Description
    Sets the GPIO pin, RA0, high using LATA0.

  @Preconditions
    The RA0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA0 high (1)
    CH_AN0_IA_SetHigh();
    </code>

*/
#define CH_AN0_IA_SetHigh()          (_LATA0 = 1)
/**
  @Summary
    Sets the GPIO pin, RA0, low using LATA0.

  @Description
    Sets the GPIO pin, RA0, low using LATA0.

  @Preconditions
    The RA0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA0 low (0)
    CH_AN0_IA_SetLow();
    </code>

*/
#define CH_AN0_IA_SetLow()           (_LATA0 = 0)
/**
  @Summary
    Toggles the GPIO pin, RA0, using LATA0.

  @Description
    Toggles the GPIO pin, RA0, using LATA0.

  @Preconditions
    The RA0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA0
    CH_AN0_IA_Toggle();
    </code>

*/
#define CH_AN0_IA_Toggle()           (_LATA0 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RA0.

  @Description
    Reads the value of the GPIO pin, RA0.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA0
    postValue = CH_AN0_IA_GetValue();
    </code>

*/
#define CH_AN0_IA_GetValue()         _RA0
/**
  @Summary
    Configures the GPIO pin, RA0, as an input.

  @Description
    Configures the GPIO pin, RA0, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA0 as an input
    CH_AN0_IA_SetDigitalInput();
    </code>

*/
#define CH_AN0_IA_SetDigitalInput()  (_TRISA0 = 1)
/**
  @Summary
    Configures the GPIO pin, RA0, as an output.

  @Description
    Configures the GPIO pin, RA0, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA0 as an output
    CH_AN0_IA_SetDigitalOutput();
    </code>

*/
#define CH_AN0_IA_SetDigitalOutput() (_TRISA0 = 0)
/**
  @Summary
    Sets the GPIO pin, RA1, high using LATA1.

  @Description
    Sets the GPIO pin, RA1, high using LATA1.

  @Preconditions
    The RA1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA1 high (1)
    __MCC__WRONGPIN_SetHigh();
    </code>

*/
#define __MCC__WRONGPIN_SetHigh()          (_LATA1 = 1)
/**
  @Summary
    Sets the GPIO pin, RA1, low using LATA1.

  @Description
    Sets the GPIO pin, RA1, low using LATA1.

  @Preconditions
    The RA1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA1 low (0)
    __MCC__WRONGPIN_SetLow();
    </code>

*/
#define __MCC__WRONGPIN_SetLow()           (_LATA1 = 0)
/**
  @Summary
    Toggles the GPIO pin, RA1, using LATA1.

  @Description
    Toggles the GPIO pin, RA1, using LATA1.

  @Preconditions
    The RA1 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA1
    __MCC__WRONGPIN_Toggle();
    </code>

*/
#define __MCC__WRONGPIN_Toggle()           (_LATA1 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RA1.

  @Description
    Reads the value of the GPIO pin, RA1.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA1
    postValue = __MCC__WRONGPIN_GetValue();
    </code>

*/
#define __MCC__WRONGPIN_GetValue()         _RA1
/**
  @Summary
    Configures the GPIO pin, RA1, as an input.

  @Description
    Configures the GPIO pin, RA1, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA1 as an input
    __MCC__WRONGPIN_SetDigitalInput();
    </code>

*/
#define __MCC__WRONGPIN_SetDigitalInput()  (_TRISA1 = 1)
/**
  @Summary
    Configures the GPIO pin, RA1, as an output.

  @Description
    Configures the GPIO pin, RA1, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA1 as an output
    __MCC__WRONGPIN_SetDigitalOutput();
    </code>

*/
#define __MCC__WRONGPIN_SetDigitalOutput() (_TRISA1 = 0)
/**
  @Summary
    Sets the GPIO pin, RA4, high using LATA4.

  @Description
    Sets the GPIO pin, RA4, high using LATA4.

  @Preconditions
    The RA4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA4 high (1)
    CH_AN4_IBUS_SetHigh();
    </code>

*/
#define CH_AN4_IBUS_SetHigh()          (_LATA4 = 1)
/**
  @Summary
    Sets the GPIO pin, RA4, low using LATA4.

  @Description
    Sets the GPIO pin, RA4, low using LATA4.

  @Preconditions
    The RA4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RA4 low (0)
    CH_AN4_IBUS_SetLow();
    </code>

*/
#define CH_AN4_IBUS_SetLow()           (_LATA4 = 0)
/**
  @Summary
    Toggles the GPIO pin, RA4, using LATA4.

  @Description
    Toggles the GPIO pin, RA4, using LATA4.

  @Preconditions
    The RA4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RA4
    CH_AN4_IBUS_Toggle();
    </code>

*/
#define CH_AN4_IBUS_Toggle()           (_LATA4 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RA4.

  @Description
    Reads the value of the GPIO pin, RA4.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RA4
    postValue = CH_AN4_IBUS_GetValue();
    </code>

*/
#define CH_AN4_IBUS_GetValue()         _RA4
/**
  @Summary
    Configures the GPIO pin, RA4, as an input.

  @Description
    Configures the GPIO pin, RA4, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA4 as an input
    CH_AN4_IBUS_SetDigitalInput();
    </code>

*/
#define CH_AN4_IBUS_SetDigitalInput()  (_TRISA4 = 1)
/**
  @Summary
    Configures the GPIO pin, RA4, as an output.

  @Description
    Configures the GPIO pin, RA4, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RA4 as an output
    CH_AN4_IBUS_SetDigitalOutput();
    </code>

*/
#define CH_AN4_IBUS_SetDigitalOutput() (_TRISA4 = 0)
/**
  @Summary
    Sets the GPIO pin, RB2, high using LATB2.

  @Description
    Sets the GPIO pin, RB2, high using LATB2.

  @Preconditions
    The RB2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB2 high (1)
    CH_AN1_IB_SetHigh();
    </code>

*/
#define CH_AN1_IB_SetHigh()          (_LATB2 = 1)
/**
  @Summary
    Sets the GPIO pin, RB2, low using LATB2.

  @Description
    Sets the GPIO pin, RB2, low using LATB2.

  @Preconditions
    The RB2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB2 low (0)
    CH_AN1_IB_SetLow();
    </code>

*/
#define CH_AN1_IB_SetLow()           (_LATB2 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB2, using LATB2.

  @Description
    Toggles the GPIO pin, RB2, using LATB2.

  @Preconditions
    The RB2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB2
    CH_AN1_IB_Toggle();
    </code>

*/
#define CH_AN1_IB_Toggle()           (_LATB2 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB2.

  @Description
    Reads the value of the GPIO pin, RB2.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB2
    postValue = CH_AN1_IB_GetValue();
    </code>

*/
#define CH_AN1_IB_GetValue()         _RB2
/**
  @Summary
    Configures the GPIO pin, RB2, as an input.

  @Description
    Configures the GPIO pin, RB2, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB2 as an input
    CH_AN1_IB_SetDigitalInput();
    </code>

*/
#define CH_AN1_IB_SetDigitalInput()  (_TRISB2 = 1)
/**
  @Summary
    Configures the GPIO pin, RB2, as an output.

  @Description
    Configures the GPIO pin, RB2, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB2 as an output
    CH_AN1_IB_SetDigitalOutput();
    </code>

*/
#define CH_AN1_IB_SetDigitalOutput() (_TRISB2 = 0)
/**
  @Summary
    Sets the GPIO pin, RB7, high using LATB7.

  @Description
    Sets the GPIO pin, RB7, high using LATB7.

  @Preconditions
    The RB7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB7 high (1)
    CH_AN2_TEMPEXT_SetHigh();
    </code>

*/
#define CH_AN2_TEMPEXT_SetHigh()          (_LATB7 = 1)
/**
  @Summary
    Sets the GPIO pin, RB7, low using LATB7.

  @Description
    Sets the GPIO pin, RB7, low using LATB7.

  @Preconditions
    The RB7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB7 low (0)
    CH_AN2_TEMPEXT_SetLow();
    </code>

*/
#define CH_AN2_TEMPEXT_SetLow()           (_LATB7 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB7, using LATB7.

  @Description
    Toggles the GPIO pin, RB7, using LATB7.

  @Preconditions
    The RB7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB7
    CH_AN2_TEMPEXT_Toggle();
    </code>

*/
#define CH_AN2_TEMPEXT_Toggle()           (_LATB7 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB7.

  @Description
    Reads the value of the GPIO pin, RB7.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB7
    postValue = CH_AN2_TEMPEXT_GetValue();
    </code>

*/
#define CH_AN2_TEMPEXT_GetValue()         _RB7
/**
  @Summary
    Configures the GPIO pin, RB7, as an input.

  @Description
    Configures the GPIO pin, RB7, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB7 as an input
    CH_AN2_TEMPEXT_SetDigitalInput();
    </code>

*/
#define CH_AN2_TEMPEXT_SetDigitalInput()  (_TRISB7 = 1)
/**
  @Summary
    Configures the GPIO pin, RB7, as an output.

  @Description
    Configures the GPIO pin, RB7, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB7 as an output
    CH_AN2_TEMPEXT_SetDigitalOutput();
    </code>

*/
#define CH_AN2_TEMPEXT_SetDigitalOutput() (_TRISB7 = 0)
/**
  @Summary
    Sets the GPIO pin, RB9, high using LATB9.

  @Description
    Sets the GPIO pin, RB9, high using LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB9 high (1)
    CH_AN11_POT_SetHigh();
    </code>

*/
#define CH_AN11_POT_SetHigh()          (_LATB9 = 1)
/**
  @Summary
    Sets the GPIO pin, RB9, low using LATB9.

  @Description
    Sets the GPIO pin, RB9, low using LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB9 low (0)
    CH_AN11_POT_SetLow();
    </code>

*/
#define CH_AN11_POT_SetLow()           (_LATB9 = 0)
/**
  @Summary
    Toggles the GPIO pin, RB9, using LATB9.

  @Description
    Toggles the GPIO pin, RB9, using LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB9
    CH_AN11_POT_Toggle();
    </code>

*/
#define CH_AN11_POT_Toggle()           (_LATB9 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RB9.

  @Description
    Reads the value of the GPIO pin, RB9.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB9
    postValue = CH_AN11_POT_GetValue();
    </code>

*/
#define CH_AN11_POT_GetValue()         _RB9
/**
  @Summary
    Configures the GPIO pin, RB9, as an input.

  @Description
    Configures the GPIO pin, RB9, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB9 as an input
    CH_AN11_POT_SetDigitalInput();
    </code>

*/
#define CH_AN11_POT_SetDigitalInput()  (_TRISB9 = 1)
/**
  @Summary
    Configures the GPIO pin, RB9, as an output.

  @Description
    Configures the GPIO pin, RB9, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB9 as an output
    CH_AN11_POT_SetDigitalOutput();
    </code>

*/
#define CH_AN11_POT_SetDigitalOutput() (_TRISB9 = 0)
/**
  @Summary
    Sets the GPIO pin, RC0, high using LATC0.

  @Description
    Sets the GPIO pin, RC0, high using LATC0.

  @Preconditions
    The RC0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC0 high (1)
    CH_AN12_TEMPLOCAL_SetHigh();
    </code>

*/
#define CH_AN12_TEMPLOCAL_SetHigh()          (_LATC0 = 1)
/**
  @Summary
    Sets the GPIO pin, RC0, low using LATC0.

  @Description
    Sets the GPIO pin, RC0, low using LATC0.

  @Preconditions
    The RC0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC0 low (0)
    CH_AN12_TEMPLOCAL_SetLow();
    </code>

*/
#define CH_AN12_TEMPLOCAL_SetLow()           (_LATC0 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC0, using LATC0.

  @Description
    Toggles the GPIO pin, RC0, using LATC0.

  @Preconditions
    The RC0 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC0
    CH_AN12_TEMPLOCAL_Toggle();
    </code>

*/
#define CH_AN12_TEMPLOCAL_Toggle()           (_LATC0 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC0.

  @Description
    Reads the value of the GPIO pin, RC0.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC0
    postValue = CH_AN12_TEMPLOCAL_GetValue();
    </code>

*/
#define CH_AN12_TEMPLOCAL_GetValue()         _RC0
/**
  @Summary
    Configures the GPIO pin, RC0, as an input.

  @Description
    Configures the GPIO pin, RC0, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC0 as an input
    CH_AN12_TEMPLOCAL_SetDigitalInput();
    </code>

*/
#define CH_AN12_TEMPLOCAL_SetDigitalInput()  (_TRISC0 = 1)
/**
  @Summary
    Configures the GPIO pin, RC0, as an output.

  @Description
    Configures the GPIO pin, RC0, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC0 as an output
    CH_AN12_TEMPLOCAL_SetDigitalOutput();
    </code>

*/
#define CH_AN12_TEMPLOCAL_SetDigitalOutput() (_TRISC0 = 0)
/**
  @Summary
    Sets the GPIO pin, RC12, high using LATC12.

  @Description
    Sets the GPIO pin, RC12, high using LATC12.

  @Preconditions
    The RC12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC12 high (1)
    IO_QEI_A_SetHigh();
    </code>

*/
#define IO_QEI_A_SetHigh()          (_LATC12 = 1)
/**
  @Summary
    Sets the GPIO pin, RC12, low using LATC12.

  @Description
    Sets the GPIO pin, RC12, low using LATC12.

  @Preconditions
    The RC12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC12 low (0)
    IO_QEI_A_SetLow();
    </code>

*/
#define IO_QEI_A_SetLow()           (_LATC12 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC12, using LATC12.

  @Description
    Toggles the GPIO pin, RC12, using LATC12.

  @Preconditions
    The RC12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC12
    IO_QEI_A_Toggle();
    </code>

*/
#define IO_QEI_A_Toggle()           (_LATC12 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC12.

  @Description
    Reads the value of the GPIO pin, RC12.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC12
    postValue = IO_QEI_A_GetValue();
    </code>

*/
#define IO_QEI_A_GetValue()         _RC12
/**
  @Summary
    Configures the GPIO pin, RC12, as an input.

  @Description
    Configures the GPIO pin, RC12, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC12 as an input
    IO_QEI_A_SetDigitalInput();
    </code>

*/
#define IO_QEI_A_SetDigitalInput()  (_TRISC12 = 1)
/**
  @Summary
    Configures the GPIO pin, RC12, as an output.

  @Description
    Configures the GPIO pin, RC12, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC12 as an output
    IO_QEI_A_SetDigitalOutput();
    </code>

*/
#define IO_QEI_A_SetDigitalOutput() (_TRISC12 = 0)
/**
  @Summary
    Sets the GPIO pin, RC13, high using LATC13.

  @Description
    Sets the GPIO pin, RC13, high using LATC13.

  @Preconditions
    The RC13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC13 high (1)
    IO_QEI_B_SetHigh();
    </code>

*/
#define IO_QEI_B_SetHigh()          (_LATC13 = 1)
/**
  @Summary
    Sets the GPIO pin, RC13, low using LATC13.

  @Description
    Sets the GPIO pin, RC13, low using LATC13.

  @Preconditions
    The RC13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC13 low (0)
    IO_QEI_B_SetLow();
    </code>

*/
#define IO_QEI_B_SetLow()           (_LATC13 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC13, using LATC13.

  @Description
    Toggles the GPIO pin, RC13, using LATC13.

  @Preconditions
    The RC13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC13
    IO_QEI_B_Toggle();
    </code>

*/
#define IO_QEI_B_Toggle()           (_LATC13 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC13.

  @Description
    Reads the value of the GPIO pin, RC13.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC13
    postValue = IO_QEI_B_GetValue();
    </code>

*/
#define IO_QEI_B_GetValue()         _RC13
/**
  @Summary
    Configures the GPIO pin, RC13, as an input.

  @Description
    Configures the GPIO pin, RC13, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC13 as an input
    IO_QEI_B_SetDigitalInput();
    </code>

*/
#define IO_QEI_B_SetDigitalInput()  (_TRISC13 = 1)
/**
  @Summary
    Configures the GPIO pin, RC13, as an output.

  @Description
    Configures the GPIO pin, RC13, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC13 as an output
    IO_QEI_B_SetDigitalOutput();
    </code>

*/
#define IO_QEI_B_SetDigitalOutput() (_TRISC13 = 0)
/**
  @Summary
    Sets the GPIO pin, RC14, high using LATC14.

  @Description
    Sets the GPIO pin, RC14, high using LATC14.

  @Preconditions
    The RC14 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC14 high (1)
    IO_QEI_INDEX_SetHigh();
    </code>

*/
#define IO_QEI_INDEX_SetHigh()          (_LATC14 = 1)
/**
  @Summary
    Sets the GPIO pin, RC14, low using LATC14.

  @Description
    Sets the GPIO pin, RC14, low using LATC14.

  @Preconditions
    The RC14 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC14 low (0)
    IO_QEI_INDEX_SetLow();
    </code>

*/
#define IO_QEI_INDEX_SetLow()           (_LATC14 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC14, using LATC14.

  @Description
    Toggles the GPIO pin, RC14, using LATC14.

  @Preconditions
    The RC14 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC14
    IO_QEI_INDEX_Toggle();
    </code>

*/
#define IO_QEI_INDEX_Toggle()           (_LATC14 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC14.

  @Description
    Reads the value of the GPIO pin, RC14.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC14
    postValue = IO_QEI_INDEX_GetValue();
    </code>

*/
#define IO_QEI_INDEX_GetValue()         _RC14
/**
  @Summary
    Configures the GPIO pin, RC14, as an input.

  @Description
    Configures the GPIO pin, RC14, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC14 as an input
    IO_QEI_INDEX_SetDigitalInput();
    </code>

*/
#define IO_QEI_INDEX_SetDigitalInput()  (_TRISC14 = 1)
/**
  @Summary
    Configures the GPIO pin, RC14, as an output.

  @Description
    Configures the GPIO pin, RC14, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC14 as an output
    IO_QEI_INDEX_SetDigitalOutput();
    </code>

*/
#define IO_QEI_INDEX_SetDigitalOutput() (_TRISC14 = 0)
/**
  @Summary
    Sets the GPIO pin, RC15, high using LATC15.

  @Description
    Sets the GPIO pin, RC15, high using LATC15.

  @Preconditions
    The RC15 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC15 high (1)
    IO_QEI_HOME_SetHigh();
    </code>

*/
#define IO_QEI_HOME_SetHigh()          (_LATC15 = 1)
/**
  @Summary
    Sets the GPIO pin, RC15, low using LATC15.

  @Description
    Sets the GPIO pin, RC15, low using LATC15.

  @Preconditions
    The RC15 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC15 low (0)
    IO_QEI_HOME_SetLow();
    </code>

*/
#define IO_QEI_HOME_SetLow()           (_LATC15 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC15, using LATC15.

  @Description
    Toggles the GPIO pin, RC15, using LATC15.

  @Preconditions
    The RC15 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC15
    IO_QEI_HOME_Toggle();
    </code>

*/
#define IO_QEI_HOME_Toggle()           (_LATC15 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC15.

  @Description
    Reads the value of the GPIO pin, RC15.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC15
    postValue = IO_QEI_HOME_GetValue();
    </code>

*/
#define IO_QEI_HOME_GetValue()         _RC15
/**
  @Summary
    Configures the GPIO pin, RC15, as an input.

  @Description
    Configures the GPIO pin, RC15, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC15 as an input
    IO_QEI_HOME_SetDigitalInput();
    </code>

*/
#define IO_QEI_HOME_SetDigitalInput()  (_TRISC15 = 1)
/**
  @Summary
    Configures the GPIO pin, RC15, as an output.

  @Description
    Configures the GPIO pin, RC15, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC15 as an output
    IO_QEI_HOME_SetDigitalOutput();
    </code>

*/
#define IO_QEI_HOME_SetDigitalOutput() (_TRISC15 = 0)
/**
  @Summary
    Sets the GPIO pin, RC3, high using LATC3.

  @Description
    Sets the GPIO pin, RC3, high using LATC3.

  @Preconditions
    The RC3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC3 high (1)
    CH_AN15_VBUS_SetHigh();
    </code>

*/
#define CH_AN15_VBUS_SetHigh()          (_LATC3 = 1)
/**
  @Summary
    Sets the GPIO pin, RC3, low using LATC3.

  @Description
    Sets the GPIO pin, RC3, low using LATC3.

  @Preconditions
    The RC3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC3 low (0)
    CH_AN15_VBUS_SetLow();
    </code>

*/
#define CH_AN15_VBUS_SetLow()           (_LATC3 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC3, using LATC3.

  @Description
    Toggles the GPIO pin, RC3, using LATC3.

  @Preconditions
    The RC3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC3
    CH_AN15_VBUS_Toggle();
    </code>

*/
#define CH_AN15_VBUS_Toggle()           (_LATC3 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC3.

  @Description
    Reads the value of the GPIO pin, RC3.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC3
    postValue = CH_AN15_VBUS_GetValue();
    </code>

*/
#define CH_AN15_VBUS_GetValue()         _RC3
/**
  @Summary
    Configures the GPIO pin, RC3, as an input.

  @Description
    Configures the GPIO pin, RC3, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC3 as an input
    CH_AN15_VBUS_SetDigitalInput();
    </code>

*/
#define CH_AN15_VBUS_SetDigitalInput()  (_TRISC3 = 1)
/**
  @Summary
    Configures the GPIO pin, RC3, as an output.

  @Description
    Configures the GPIO pin, RC3, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC3 as an output
    CH_AN15_VBUS_SetDigitalOutput();
    </code>

*/
#define CH_AN15_VBUS_SetDigitalOutput() (_TRISC3 = 0)
/**
  @Summary
    Sets the GPIO pin, RC6, high using LATC6.

  @Description
    Sets the GPIO pin, RC6, high using LATC6.

  @Preconditions
    The RC6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC6 high (1)
    CH_AN17_VA_SetHigh();
    </code>

*/
#define CH_AN17_VA_SetHigh()          (_LATC6 = 1)
/**
  @Summary
    Sets the GPIO pin, RC6, low using LATC6.

  @Description
    Sets the GPIO pin, RC6, low using LATC6.

  @Preconditions
    The RC6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC6 low (0)
    CH_AN17_VA_SetLow();
    </code>

*/
#define CH_AN17_VA_SetLow()           (_LATC6 = 0)
/**
  @Summary
    Toggles the GPIO pin, RC6, using LATC6.

  @Description
    Toggles the GPIO pin, RC6, using LATC6.

  @Preconditions
    The RC6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC6
    CH_AN17_VA_Toggle();
    </code>

*/
#define CH_AN17_VA_Toggle()           (_LATC6 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RC6.

  @Description
    Reads the value of the GPIO pin, RC6.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC6
    postValue = CH_AN17_VA_GetValue();
    </code>

*/
#define CH_AN17_VA_GetValue()         _RC6
/**
  @Summary
    Configures the GPIO pin, RC6, as an input.

  @Description
    Configures the GPIO pin, RC6, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC6 as an input
    CH_AN17_VA_SetDigitalInput();
    </code>

*/
#define CH_AN17_VA_SetDigitalInput()  (_TRISC6 = 1)
/**
  @Summary
    Configures the GPIO pin, RC6, as an output.

  @Description
    Configures the GPIO pin, RC6, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC6 as an output
    CH_AN17_VA_SetDigitalOutput();
    </code>

*/
#define CH_AN17_VA_SetDigitalOutput() (_TRISC6 = 0)
/**
  @Summary
    Sets the GPIO pin, RE10, high using LATE10.

  @Description
    Sets the GPIO pin, RE10, high using LATE10.

  @Preconditions
    The RE10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE10 high (1)
    IO_HALL_C_SetHigh();
    </code>

*/
#define IO_HALL_C_SetHigh()          (_LATE10 = 1)
/**
  @Summary
    Sets the GPIO pin, RE10, low using LATE10.

  @Description
    Sets the GPIO pin, RE10, low using LATE10.

  @Preconditions
    The RE10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE10 low (0)
    IO_HALL_C_SetLow();
    </code>

*/
#define IO_HALL_C_SetLow()           (_LATE10 = 0)
/**
  @Summary
    Toggles the GPIO pin, RE10, using LATE10.

  @Description
    Toggles the GPIO pin, RE10, using LATE10.

  @Preconditions
    The RE10 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE10
    IO_HALL_C_Toggle();
    </code>

*/
#define IO_HALL_C_Toggle()           (_LATE10 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RE10.

  @Description
    Reads the value of the GPIO pin, RE10.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE10
    postValue = IO_HALL_C_GetValue();
    </code>

*/
#define IO_HALL_C_GetValue()         _RE10
/**
  @Summary
    Configures the GPIO pin, RE10, as an input.

  @Description
    Configures the GPIO pin, RE10, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE10 as an input
    IO_HALL_C_SetDigitalInput();
    </code>

*/
#define IO_HALL_C_SetDigitalInput()  (_TRISE10 = 1)
/**
  @Summary
    Configures the GPIO pin, RE10, as an output.

  @Description
    Configures the GPIO pin, RE10, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE10 as an output
    IO_HALL_C_SetDigitalOutput();
    </code>

*/
#define IO_HALL_C_SetDigitalOutput() (_TRISE10 = 0)
/**
  @Summary
    Sets the GPIO pin, RE11, high using LATE11.

  @Description
    Sets the GPIO pin, RE11, high using LATE11.

  @Preconditions
    The RE11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE11 high (1)
    IO_SW1_SetHigh();
    </code>

*/
#define IO_SW1_SetHigh()          (_LATE11 = 1)
/**
  @Summary
    Sets the GPIO pin, RE11, low using LATE11.

  @Description
    Sets the GPIO pin, RE11, low using LATE11.

  @Preconditions
    The RE11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE11 low (0)
    IO_SW1_SetLow();
    </code>

*/
#define IO_SW1_SetLow()           (_LATE11 = 0)
/**
  @Summary
    Toggles the GPIO pin, RE11, using LATE11.

  @Description
    Toggles the GPIO pin, RE11, using LATE11.

  @Preconditions
    The RE11 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE11
    IO_SW1_Toggle();
    </code>

*/
#define IO_SW1_Toggle()           (_LATE11 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RE11.

  @Description
    Reads the value of the GPIO pin, RE11.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE11
    postValue = IO_SW1_GetValue();
    </code>

*/
#define IO_SW1_GetValue()         _RE11
/**
  @Summary
    Configures the GPIO pin, RE11, as an input.

  @Description
    Configures the GPIO pin, RE11, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE11 as an input
    IO_SW1_SetDigitalInput();
    </code>

*/
#define IO_SW1_SetDigitalInput()  (_TRISE11 = 1)
/**
  @Summary
    Configures the GPIO pin, RE11, as an output.

  @Description
    Configures the GPIO pin, RE11, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE11 as an output
    IO_SW1_SetDigitalOutput();
    </code>

*/
#define IO_SW1_SetDigitalOutput() (_TRISE11 = 0)
/**
  @Summary
    Sets the GPIO pin, RE12, high using LATE12.

  @Description
    Sets the GPIO pin, RE12, high using LATE12.

  @Preconditions
    The RE12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE12 high (1)
    IO_SW2_SetHigh();
    </code>

*/
#define IO_SW2_SetHigh()          (_LATE12 = 1)
/**
  @Summary
    Sets the GPIO pin, RE12, low using LATE12.

  @Description
    Sets the GPIO pin, RE12, low using LATE12.

  @Preconditions
    The RE12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE12 low (0)
    IO_SW2_SetLow();
    </code>

*/
#define IO_SW2_SetLow()           (_LATE12 = 0)
/**
  @Summary
    Toggles the GPIO pin, RE12, using LATE12.

  @Description
    Toggles the GPIO pin, RE12, using LATE12.

  @Preconditions
    The RE12 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE12
    IO_SW2_Toggle();
    </code>

*/
#define IO_SW2_Toggle()           (_LATE12 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RE12.

  @Description
    Reads the value of the GPIO pin, RE12.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE12
    postValue = IO_SW2_GetValue();
    </code>

*/
#define IO_SW2_GetValue()         _RE12
/**
  @Summary
    Configures the GPIO pin, RE12, as an input.

  @Description
    Configures the GPIO pin, RE12, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE12 as an input
    IO_SW2_SetDigitalInput();
    </code>

*/
#define IO_SW2_SetDigitalInput()  (_TRISE12 = 1)
/**
  @Summary
    Configures the GPIO pin, RE12, as an output.

  @Description
    Configures the GPIO pin, RE12, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE12 as an output
    IO_SW2_SetDigitalOutput();
    </code>

*/
#define IO_SW2_SetDigitalOutput() (_TRISE12 = 0)
/**
  @Summary
    Sets the GPIO pin, RE13, high using LATE13.

  @Description
    Sets the GPIO pin, RE13, high using LATE13.

  @Preconditions
    The RE13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE13 high (1)
    IO_SW3_SetHigh();
    </code>

*/
#define IO_SW3_SetHigh()          (_LATE13 = 1)
/**
  @Summary
    Sets the GPIO pin, RE13, low using LATE13.

  @Description
    Sets the GPIO pin, RE13, low using LATE13.

  @Preconditions
    The RE13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE13 low (0)
    IO_SW3_SetLow();
    </code>

*/
#define IO_SW3_SetLow()           (_LATE13 = 0)
/**
  @Summary
    Toggles the GPIO pin, RE13, using LATE13.

  @Description
    Toggles the GPIO pin, RE13, using LATE13.

  @Preconditions
    The RE13 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE13
    IO_SW3_Toggle();
    </code>

*/
#define IO_SW3_Toggle()           (_LATE13 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RE13.

  @Description
    Reads the value of the GPIO pin, RE13.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE13
    postValue = IO_SW3_GetValue();
    </code>

*/
#define IO_SW3_GetValue()         _RE13
/**
  @Summary
    Configures the GPIO pin, RE13, as an input.

  @Description
    Configures the GPIO pin, RE13, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE13 as an input
    IO_SW3_SetDigitalInput();
    </code>

*/
#define IO_SW3_SetDigitalInput()  (_TRISE13 = 1)
/**
  @Summary
    Configures the GPIO pin, RE13, as an output.

  @Description
    Configures the GPIO pin, RE13, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE13 as an output
    IO_SW3_SetDigitalOutput();
    </code>

*/
#define IO_SW3_SetDigitalOutput() (_TRISE13 = 0)
/**
  @Summary
    Sets the GPIO pin, RE15, high using LATE15.

  @Description
    Sets the GPIO pin, RE15, high using LATE15.

  @Preconditions
    The RE15 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE15 high (1)
    IO_TP13_SetHigh();
    </code>

*/
#define IO_TP13_SetHigh()          (_LATE15 = 1)
/**
  @Summary
    Sets the GPIO pin, RE15, low using LATE15.

  @Description
    Sets the GPIO pin, RE15, low using LATE15.

  @Preconditions
    The RE15 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE15 low (0)
    IO_TP13_SetLow();
    </code>

*/
#define IO_TP13_SetLow()           (_LATE15 = 0)
/**
  @Summary
    Toggles the GPIO pin, RE15, using LATE15.

  @Description
    Toggles the GPIO pin, RE15, using LATE15.

  @Preconditions
    The RE15 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE15
    IO_TP13_Toggle();
    </code>

*/
#define IO_TP13_Toggle()           (_LATE15 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RE15.

  @Description
    Reads the value of the GPIO pin, RE15.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE15
    postValue = IO_TP13_GetValue();
    </code>

*/
#define IO_TP13_GetValue()         _RE15
/**
  @Summary
    Configures the GPIO pin, RE15, as an input.

  @Description
    Configures the GPIO pin, RE15, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE15 as an input
    IO_TP13_SetDigitalInput();
    </code>

*/
#define IO_TP13_SetDigitalInput()  (_TRISE15 = 1)
/**
  @Summary
    Configures the GPIO pin, RE15, as an output.

  @Description
    Configures the GPIO pin, RE15, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE15 as an output
    IO_TP13_SetDigitalOutput();
    </code>

*/
#define IO_TP13_SetDigitalOutput() (_TRISE15 = 0)
/**
  @Summary
    Sets the GPIO pin, RE2, high using LATE2.

  @Description
    Sets the GPIO pin, RE2, high using LATE2.

  @Preconditions
    The RE2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE2 high (1)
    CH_AN22_VC_SetHigh();
    </code>

*/
#define CH_AN22_VC_SetHigh()          (_LATE2 = 1)
/**
  @Summary
    Sets the GPIO pin, RE2, low using LATE2.

  @Description
    Sets the GPIO pin, RE2, low using LATE2.

  @Preconditions
    The RE2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE2 low (0)
    CH_AN22_VC_SetLow();
    </code>

*/
#define CH_AN22_VC_SetLow()           (_LATE2 = 0)
/**
  @Summary
    Toggles the GPIO pin, RE2, using LATE2.

  @Description
    Toggles the GPIO pin, RE2, using LATE2.

  @Preconditions
    The RE2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE2
    CH_AN22_VC_Toggle();
    </code>

*/
#define CH_AN22_VC_Toggle()           (_LATE2 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RE2.

  @Description
    Reads the value of the GPIO pin, RE2.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE2
    postValue = CH_AN22_VC_GetValue();
    </code>

*/
#define CH_AN22_VC_GetValue()         _RE2
/**
  @Summary
    Configures the GPIO pin, RE2, as an input.

  @Description
    Configures the GPIO pin, RE2, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE2 as an input
    CH_AN22_VC_SetDigitalInput();
    </code>

*/
#define CH_AN22_VC_SetDigitalInput()  (_TRISE2 = 1)
/**
  @Summary
    Configures the GPIO pin, RE2, as an output.

  @Description
    Configures the GPIO pin, RE2, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE2 as an output
    CH_AN22_VC_SetDigitalOutput();
    </code>

*/
#define CH_AN22_VC_SetDigitalOutput() (_TRISE2 = 0)
/**
  @Summary
    Sets the GPIO pin, RE3, high using LATE3.

  @Description
    Sets the GPIO pin, RE3, high using LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE3 high (1)
    CH_AN23_VB_SetHigh();
    </code>

*/
#define CH_AN23_VB_SetHigh()          (_LATE3 = 1)
/**
  @Summary
    Sets the GPIO pin, RE3, low using LATE3.

  @Description
    Sets the GPIO pin, RE3, low using LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE3 low (0)
    CH_AN23_VB_SetLow();
    </code>

*/
#define CH_AN23_VB_SetLow()           (_LATE3 = 0)
/**
  @Summary
    Toggles the GPIO pin, RE3, using LATE3.

  @Description
    Toggles the GPIO pin, RE3, using LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE3
    CH_AN23_VB_Toggle();
    </code>

*/
#define CH_AN23_VB_Toggle()           (_LATE3 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RE3.

  @Description
    Reads the value of the GPIO pin, RE3.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE3
    postValue = CH_AN23_VB_GetValue();
    </code>

*/
#define CH_AN23_VB_GetValue()         _RE3
/**
  @Summary
    Configures the GPIO pin, RE3, as an input.

  @Description
    Configures the GPIO pin, RE3, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE3 as an input
    CH_AN23_VB_SetDigitalInput();
    </code>

*/
#define CH_AN23_VB_SetDigitalInput()  (_TRISE3 = 1)
/**
  @Summary
    Configures the GPIO pin, RE3, as an output.

  @Description
    Configures the GPIO pin, RE3, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE3 as an output
    CH_AN23_VB_SetDigitalOutput();
    </code>

*/
#define CH_AN23_VB_SetDigitalOutput() (_TRISE3 = 0)
/**
  @Summary
    Sets the GPIO pin, RE4, high using LATE4.

  @Description
    Sets the GPIO pin, RE4, high using LATE4.

  @Preconditions
    The RE4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE4 high (1)
    IO_TP11_SetHigh();
    </code>

*/
#define IO_TP11_SetHigh()          (_LATE4 = 1)
/**
  @Summary
    Sets the GPIO pin, RE4, low using LATE4.

  @Description
    Sets the GPIO pin, RE4, low using LATE4.

  @Preconditions
    The RE4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE4 low (0)
    IO_TP11_SetLow();
    </code>

*/
#define IO_TP11_SetLow()           (_LATE4 = 0)
/**
  @Summary
    Toggles the GPIO pin, RE4, using LATE4.

  @Description
    Toggles the GPIO pin, RE4, using LATE4.

  @Preconditions
    The RE4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE4
    IO_TP11_Toggle();
    </code>

*/
#define IO_TP11_Toggle()           (_LATE4 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RE4.

  @Description
    Reads the value of the GPIO pin, RE4.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE4
    postValue = IO_TP11_GetValue();
    </code>

*/
#define IO_TP11_GetValue()         _RE4
/**
  @Summary
    Configures the GPIO pin, RE4, as an input.

  @Description
    Configures the GPIO pin, RE4, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE4 as an input
    IO_TP11_SetDigitalInput();
    </code>

*/
#define IO_TP11_SetDigitalInput()  (_TRISE4 = 1)
/**
  @Summary
    Configures the GPIO pin, RE4, as an output.

  @Description
    Configures the GPIO pin, RE4, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE4 as an output
    IO_TP11_SetDigitalOutput();
    </code>

*/
#define IO_TP11_SetDigitalOutput() (_TRISE4 = 0)
/**
  @Summary
    Sets the GPIO pin, RE5, high using LATE5.

  @Description
    Sets the GPIO pin, RE5, high using LATE5.

  @Preconditions
    The RE5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE5 high (1)
    IO_TP12_SetHigh();
    </code>

*/
#define IO_TP12_SetHigh()          (_LATE5 = 1)
/**
  @Summary
    Sets the GPIO pin, RE5, low using LATE5.

  @Description
    Sets the GPIO pin, RE5, low using LATE5.

  @Preconditions
    The RE5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE5 low (0)
    IO_TP12_SetLow();
    </code>

*/
#define IO_TP12_SetLow()           (_LATE5 = 0)
/**
  @Summary
    Toggles the GPIO pin, RE5, using LATE5.

  @Description
    Toggles the GPIO pin, RE5, using LATE5.

  @Preconditions
    The RE5 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE5
    IO_TP12_Toggle();
    </code>

*/
#define IO_TP12_Toggle()           (_LATE5 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RE5.

  @Description
    Reads the value of the GPIO pin, RE5.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE5
    postValue = IO_TP12_GetValue();
    </code>

*/
#define IO_TP12_GetValue()         _RE5
/**
  @Summary
    Configures the GPIO pin, RE5, as an input.

  @Description
    Configures the GPIO pin, RE5, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE5 as an input
    IO_TP12_SetDigitalInput();
    </code>

*/
#define IO_TP12_SetDigitalInput()  (_TRISE5 = 1)
/**
  @Summary
    Configures the GPIO pin, RE5, as an output.

  @Description
    Configures the GPIO pin, RE5, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE5 as an output
    IO_TP12_SetDigitalOutput();
    </code>

*/
#define IO_TP12_SetDigitalOutput() (_TRISE5 = 0)
/**
  @Summary
    Sets the GPIO pin, RE6, high using LATE6.

  @Description
    Sets the GPIO pin, RE6, high using LATE6.

  @Preconditions
    The RE6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE6 high (1)
    IO_LD10_SetHigh();
    </code>

*/
#define IO_LD10_SetHigh()          (_LATE6 = 1)
/**
  @Summary
    Sets the GPIO pin, RE6, low using LATE6.

  @Description
    Sets the GPIO pin, RE6, low using LATE6.

  @Preconditions
    The RE6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE6 low (0)
    IO_LD10_SetLow();
    </code>

*/
#define IO_LD10_SetLow()           (_LATE6 = 0)
/**
  @Summary
    Toggles the GPIO pin, RE6, using LATE6.

  @Description
    Toggles the GPIO pin, RE6, using LATE6.

  @Preconditions
    The RE6 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE6
    IO_LD10_Toggle();
    </code>

*/
#define IO_LD10_Toggle()           (_LATE6 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RE6.

  @Description
    Reads the value of the GPIO pin, RE6.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE6
    postValue = IO_LD10_GetValue();
    </code>

*/
#define IO_LD10_GetValue()         _RE6
/**
  @Summary
    Configures the GPIO pin, RE6, as an input.

  @Description
    Configures the GPIO pin, RE6, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE6 as an input
    IO_LD10_SetDigitalInput();
    </code>

*/
#define IO_LD10_SetDigitalInput()  (_TRISE6 = 1)
/**
  @Summary
    Configures the GPIO pin, RE6, as an output.

  @Description
    Configures the GPIO pin, RE6, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE6 as an output
    IO_LD10_SetDigitalOutput();
    </code>

*/
#define IO_LD10_SetDigitalOutput() (_TRISE6 = 0)
/**
  @Summary
    Sets the GPIO pin, RE7, high using LATE7.

  @Description
    Sets the GPIO pin, RE7, high using LATE7.

  @Preconditions
    The RE7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE7 high (1)
    IO_LD11_SetHigh();
    </code>

*/
#define IO_LD11_SetHigh()          (_LATE7 = 1)
/**
  @Summary
    Sets the GPIO pin, RE7, low using LATE7.

  @Description
    Sets the GPIO pin, RE7, low using LATE7.

  @Preconditions
    The RE7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE7 low (0)
    IO_LD11_SetLow();
    </code>

*/
#define IO_LD11_SetLow()           (_LATE7 = 0)
/**
  @Summary
    Toggles the GPIO pin, RE7, using LATE7.

  @Description
    Toggles the GPIO pin, RE7, using LATE7.

  @Preconditions
    The RE7 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE7
    IO_LD11_Toggle();
    </code>

*/
#define IO_LD11_Toggle()           (_LATE7 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RE7.

  @Description
    Reads the value of the GPIO pin, RE7.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE7
    postValue = IO_LD11_GetValue();
    </code>

*/
#define IO_LD11_GetValue()         _RE7
/**
  @Summary
    Configures the GPIO pin, RE7, as an input.

  @Description
    Configures the GPIO pin, RE7, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE7 as an input
    IO_LD11_SetDigitalInput();
    </code>

*/
#define IO_LD11_SetDigitalInput()  (_TRISE7 = 1)
/**
  @Summary
    Configures the GPIO pin, RE7, as an output.

  @Description
    Configures the GPIO pin, RE7, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE7 as an output
    IO_LD11_SetDigitalOutput();
    </code>

*/
#define IO_LD11_SetDigitalOutput() (_TRISE7 = 0)
/**
  @Summary
    Sets the GPIO pin, RE8, high using LATE8.

  @Description
    Sets the GPIO pin, RE8, high using LATE8.

  @Preconditions
    The RE8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE8 high (1)
    IO_HALL_A_SetHigh();
    </code>

*/
#define IO_HALL_A_SetHigh()          (_LATE8 = 1)
/**
  @Summary
    Sets the GPIO pin, RE8, low using LATE8.

  @Description
    Sets the GPIO pin, RE8, low using LATE8.

  @Preconditions
    The RE8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE8 low (0)
    IO_HALL_A_SetLow();
    </code>

*/
#define IO_HALL_A_SetLow()           (_LATE8 = 0)
/**
  @Summary
    Toggles the GPIO pin, RE8, using LATE8.

  @Description
    Toggles the GPIO pin, RE8, using LATE8.

  @Preconditions
    The RE8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE8
    IO_HALL_A_Toggle();
    </code>

*/
#define IO_HALL_A_Toggle()           (_LATE8 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RE8.

  @Description
    Reads the value of the GPIO pin, RE8.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE8
    postValue = IO_HALL_A_GetValue();
    </code>

*/
#define IO_HALL_A_GetValue()         _RE8
/**
  @Summary
    Configures the GPIO pin, RE8, as an input.

  @Description
    Configures the GPIO pin, RE8, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE8 as an input
    IO_HALL_A_SetDigitalInput();
    </code>

*/
#define IO_HALL_A_SetDigitalInput()  (_TRISE8 = 1)
/**
  @Summary
    Configures the GPIO pin, RE8, as an output.

  @Description
    Configures the GPIO pin, RE8, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE8 as an output
    IO_HALL_A_SetDigitalOutput();
    </code>

*/
#define IO_HALL_A_SetDigitalOutput() (_TRISE8 = 0)
/**
  @Summary
    Sets the GPIO pin, RE9, high using LATE9.

  @Description
    Sets the GPIO pin, RE9, high using LATE9.

  @Preconditions
    The RE9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE9 high (1)
    IO_HALL_B_SetHigh();
    </code>

*/
#define IO_HALL_B_SetHigh()          (_LATE9 = 1)
/**
  @Summary
    Sets the GPIO pin, RE9, low using LATE9.

  @Description
    Sets the GPIO pin, RE9, low using LATE9.

  @Preconditions
    The RE9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE9 low (0)
    IO_HALL_B_SetLow();
    </code>

*/
#define IO_HALL_B_SetLow()           (_LATE9 = 0)
/**
  @Summary
    Toggles the GPIO pin, RE9, using LATE9.

  @Description
    Toggles the GPIO pin, RE9, using LATE9.

  @Preconditions
    The RE9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE9
    IO_HALL_B_Toggle();
    </code>

*/
#define IO_HALL_B_Toggle()           (_LATE9 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RE9.

  @Description
    Reads the value of the GPIO pin, RE9.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE9
    postValue = IO_HALL_B_GetValue();
    </code>

*/
#define IO_HALL_B_GetValue()         _RE9
/**
  @Summary
    Configures the GPIO pin, RE9, as an input.

  @Description
    Configures the GPIO pin, RE9, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE9 as an input
    IO_HALL_B_SetDigitalInput();
    </code>

*/
#define IO_HALL_B_SetDigitalInput()  (_TRISE9 = 1)
/**
  @Summary
    Configures the GPIO pin, RE9, as an output.

  @Description
    Configures the GPIO pin, RE9, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE9 as an output
    IO_HALL_B_SetDigitalOutput();
    </code>

*/
#define IO_HALL_B_SetDigitalOutput() (_TRISE9 = 0)

/**
    Section: Function Prototypes
*/
/**
  @Summary
    Configures the pin settings of the dsPIC33CK256MP508
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

*/
void PIN_MANAGER_Initialize (void);



#endif
