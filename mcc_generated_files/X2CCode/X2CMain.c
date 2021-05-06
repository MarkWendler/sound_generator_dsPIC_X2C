/* ************************************************************************** */
/** X2CMain.c

  @Company
    Microchip Technology

  @Summary
 Implementation of X2C In and Outport connections

 */
/* ************************************************************************** */
#include <xc.h>
#include "X2CMain.h"

#include "X2C.h"
#ifndef X2C_H
#warning "Please generate the code from the model!"
#endif

#include "../pin_manager.h"
#include "../adc1.h"
#include "../qei.h"
#include "../../userparms.h"

    volatile int16_t offset_AN0_IA=0, offset_AN1_IB=0, offset_AN4_IBUS = 0;
    volatile int16_t IA, IB; //For debugging
void UpdateInports(void) {

    static unsigned char SW3_Value;
    static unsigned char SW3_Value_old = 1;
    static unsigned char DebounceCnt;
    static unsigned char edge=0;
    static int16_t CpuLoad;    
    /* Button latch and debounce */
    SW3_Value = IO_SW3_GetValue();
    
    if(edge==0)
    {
        if (SW3_Value != SW3_Value_old) 
        {
            SW3_Value_old = SW3_Value;
            if(SW3_Value)
            {
                DebounceCnt = 0;
                edge = 1;
            }
        }
    }
    else
    {
        DebounceCnt++;
        if(DebounceCnt >= 10)
        {           
            if(x2cModel.inports.bEnableControl == false)
            {
                x2cModel.inports.bEnableControl = true;
            }
            else
            {
                x2cModel.inports.bEnableControl = false;
            }
            
            DebounceCnt = 0;
            edge=0;
        }    
    } 
    //-----------------------------
    if(IO_SW1_GetValue()) x2cModel.inports.bSW1 = false;
    else  x2cModel.inports.bSW1 = true;
    if(IO_SW2_GetValue()) x2cModel.inports.bSW2 = false;
    else  x2cModel.inports.bSW2 = true;
    
    /* ADC */   
    IA = ADC1_ConversionResultGet(CH_AN0_IA) - offset_AN0_IA;
    IB = ADC1_ConversionResultGet(CH_AN1_IB) - offset_AN1_IB;
    x2cModel.inports.bCurrent = ADC1_ConversionResultGet(CH_AN4_IBUS) - offset_AN4_IBUS;
    
    //Shift POT middle position should be zero
    x2cModel.inports.bV_POT = ADC1_ConversionResultGet(CH_AN11_POT) + 0x8000;
    
    x2cModel.inports.bCPU_LOAD = CpuLoad;
    
    
}

void UpdateOutports(void) {

    
    if (x2cModel.inports.bEnableControl) //Enable PWM output
    {
        PG1IOCONLbits.OVRENH = 0;
        PG1IOCONLbits.OVRENL = 0;
        PG2IOCONLbits.OVRENH = 0;
        PG2IOCONLbits.OVRENL = 0;       
        
        //Sinus generated from 50% duty cycle
        PG1DC = (PWM_PERIODE+(int16)(__builtin_mulss(*x2cModel.outports.bPWM1, PWM_PERIODE)>>15));
        PG2DC = (PWM_PERIODE+(int16)(__builtin_mulss( (-*x2cModel.outports.bPWM1), PWM_PERIODE)>>15));
    }
    else //Disable PWM output. 
    {
        PG1IOCONLbits.OVRDAT = 0;
        PG2IOCONLbits.OVRDAT = 0;
        PG1IOCONLbits.OVRENH = 1;
        PG1IOCONLbits.OVRENL = 1;
        PG2IOCONLbits.OVRENH = 1;
        PG2IOCONLbits.OVRENL = 1;      
        
    }
    
    if (*x2cModel.outports.bLED_LD10) {
        IO_LD10_SetHigh();
    }
    else {
        IO_LD10_SetLow();
    }  
}
/**
 * Calls the inports update function
 * Then run model calculation
 * Last read model outports and update the peripherals
*/

void __attribute__ ( ( __interrupt__ , auto_psv ) ) _ADCAN0Interrupt ( void )
{
    volatile uint16_t valchannel_AN0;
    IO_LD11_SetHigh();
    
    //Read the ADC value from the ADCBUF
    valchannel_AN0 = ADCBUF0;
    //clear the channel_AN1 interrupt flag
    IFS5bits.ADCAN0IF = 0;
    UpdateInports();
    X2C_Update();
    UpdateOutports();
    IO_LD11_SetLow();
}

/* *****************************************************************************
 End of File
 */
