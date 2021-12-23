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

    volatile int16_t channelFreq1 =0;
    volatile bool newNote; 
void UpdateInports(void) {

    /*
     * Pass the peripheral values to model Inports
     * if (PORTA & 1) { 
     *    x2cModel.inports.bInport = INT16_MAX;
     * }else {
     *    x2cModel.inports.bInport = 0;
     * }
     * 
     * The following inputs of the model can be used:
      x2cModel.inports.bCPU_LOAD = Scaling*A_PeripheralVariable
      x2cModel.inports.bEnableControl = Scaling*A_PeripheralVariable
      x2cModel.inports.bFreq1 = Scaling*A_PeripheralVariable
      x2cModel.inports.bFreq2 = Scaling*A_PeripheralVariable
      x2cModel.inports.bFreq3 = Scaling*A_PeripheralVariable
      x2cModel.inports.bFreq4 = Scaling*A_PeripheralVariable
      x2cModel.inports.bSW2 = Scaling*A_PeripheralVariable
      x2cModel.inports.bV_POT = Scaling*A_PeripheralVariable

     */    
    
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
    x2cModel.inports.bFreq1 = channelFreq1;
    x2cModel.inports.bNewNote = newNote;
    
    
    if(IO_SW2_GetValue()) x2cModel.inports.bSW2 = false;
    else  x2cModel.inports.bSW2 = true;
    
    
    //Shift POT middle position should be zero
    ADC1_SoftwareTriggerEnable();
    x2cModel.inports.bV_POT = ADC1_ConversionResultGet(CH_AN11_POT)<<3;
    
    x2cModel.inports.bCPU_LOAD = CpuLoad;
    
    
}

void UpdateOutports(void) {

    /*
     * Pass model outports to peripherals e.g.:
     * 
     * if (*x2cModel.outports.bOutport) {  // if model Outport differ than zero 
     *    LATB |= 1; // set LATB0 
     * } else {
     *    LATB &= ~1; // clear LATB0
     * }    
     * 
     * The following outputs of the model can be used:
      A_PeripheralVariable = *x2cModel.outports.bLED_LD10*Scaling
      A_PeripheralVariable = *x2cModel.outports.bPWM1*Scaling
     */       
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

void ModelCalculation(void){

    IO_LD11_SetHigh();
    
    UpdateInports();
    X2C_Update();
    UpdateOutports();
    IO_LD11_SetLow();
}

/* *****************************************************************************
 End of File
 */
