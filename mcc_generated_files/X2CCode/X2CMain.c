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

#include "mcc.h"
#include "../qei.h"
#include "../../userparms.h"

    static unsigned char SW3_Value;
    static unsigned char SW3_Value_old = 1;
    static unsigned char DebounceCnt;
    static unsigned char edge=0;
    static int16_t CpuLoad;
    static uint16_t POS1CNTtemp;

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
      x2cModel.inports.bI_a = Scaling*A_PeripheralVariable
      x2cModel.inports.bI_b = Scaling*A_PeripheralVariable
      x2cModel.inports.bI_sum = Scaling*A_PeripheralVariable
      x2cModel.inports.bQEI_POS = Scaling*A_PeripheralVariable
      x2cModel.inports.bQEI_VEL = Scaling*A_PeripheralVariable
      x2cModel.inports.bS2 = Scaling*A_PeripheralVariable
      x2cModel.inports.bS3 = Scaling*A_PeripheralVariable
      x2cModel.inports.bV_POT = Scaling*A_PeripheralVariable

     */
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
            if(x2cModel.inports.bSW3==0)
            {
                x2cModel.inports.bSW3 = INT16_MAX;
            }
            else
            {
                x2cModel.inports.bSW3 = 0;
            }
            
            DebounceCnt = 0;
            edge=0;
        }    
    } 
    //-----------------------------
    if(IO_SW1_GetValue()) x2cModel.inports.bSW1 = false;
    else  x2cModel.inports.bSW1 = true;

    /* ADC */   
    x2cModel.inports.bI_a = ADC1_ConversionResultGet(CH_AN0_IA) + OFFSET_A;
    x2cModel.inports.bI_b = ADC1_ConversionResultGet(CH_AN1_IB) + OFFSET_B;
    //Shift POT middle position should be zero
    x2cModel.inports.bV_POT = ADC1_ConversionResultGet(CH_AN11_POT) + 0x8000;

    //TODO: Implement QEI functionality for the LVMC board (MCC does not support peripheral)
    //POS1CNTtemp = POS1CNTL;
    //    x2cModel.inports.bQEI_POS = (int16_t)(__builtin_mulss(POS1CNTtemp,QEI_FACT));  
    //    x2cModel.inports.bQEI_POS_MECH = (int16_t)(__builtin_mulss(POS1CNTtemp,QEI_FACT_MECH));  
    //x2cModel.inports.bQEI_VEL = GetQEIVel();
    
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
      A_PeripheralVariable = *x2cModel.outports.bEstimated_angle*Scaling
      A_PeripheralVariable = *x2cModel.outports.bEstimated_speed*Scaling
      A_PeripheralVariable = *x2cModel.outports.bId*Scaling
      A_PeripheralVariable = *x2cModel.outports.bIq*Scaling
      A_PeripheralVariable = *x2cModel.outports.bON_OFF*Scaling
      A_PeripheralVariable = *x2cModel.outports.bpos*Scaling
      A_PeripheralVariable = *x2cModel.outports.bHOME_INIT*Scaling
      A_PeripheralVariable = *x2cModel.outports.bLED_D17*Scaling
      A_PeripheralVariable = *x2cModel.outports.bLED_D2*Scaling
      A_PeripheralVariable = *x2cModel.outports.bPWM1*Scaling
      A_PeripheralVariable = *x2cModel.outports.bPWM2*Scaling
      A_PeripheralVariable = *x2cModel.outports.bPWM3*Scaling
     */   
    
    if (x2cModel.inports.bSW3) //Enable PWM output
    {
        PG1IOCONLbits.OVRENH = 0;
        PG1IOCONLbits.OVRENL = 0;
        PG2IOCONLbits.OVRENH = 0;
        PG2IOCONLbits.OVRENL = 0;
        PG4IOCONLbits.OVRENH = 0;
        PG4IOCONLbits.OVRENL = 0;        
        
        PG1DC = (PWM_PERIODE+(int16)(__builtin_mulss(*x2cModel.outports.bPWM1, PWM_PERIODE)>>15));
        PG2DC = (PWM_PERIODE+(int16)(__builtin_mulss(*x2cModel.outports.bPWM2, PWM_PERIODE)>>15));
        // ! LVMC uses PWM generator 4 !
        PG4DC = (PWM_PERIODE+(int16)(__builtin_mulss(*x2cModel.outports.bPWM3, PWM_PERIODE)>>15));
    }
    else //Disable PWM output. 
    {
        PG1IOCONLbits.OVRDAT = 0;
        PG2IOCONLbits.OVRDAT = 0;
        PG4IOCONLbits.OVRDAT = 0;
        PG1IOCONLbits.OVRENH = 1;
        PG1IOCONLbits.OVRENL = 1;
        PG2IOCONLbits.OVRENH = 1;
        PG2IOCONLbits.OVRENL = 1;
        PG4IOCONLbits.OVRENH = 1;
        PG4IOCONLbits.OVRENL = 1;        
        
    }
    
    /* Clear position counter on Home init */
    if (*x2cModel.outports.bHOME_INIT > 0) { 
    	POS1CNTL = 0; //*x2cModel.outports.bHOME_INIT;
    }
    
    
    
    if (*x2cModel.outports.bLED_LD10) {
        IO_LD10_SetHigh();
    }
    else {
        IO_LD10_SetLow();
    }
    if (*x2cModel.outports.bLED_LD11) {
        IO_LD11_SetHigh();
    }
    else {
        IO_LD11_SetLow();
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
    //Read the ADC value from the ADCBUF
    valchannel_AN0 = ADCBUF0;
    //clear the channel_AN1 interrupt flag
    IFS5bits.ADCAN0IF = 0;
    UpdateInports();
    X2C_Update();
    UpdateOutports();
}

/* *****************************************************************************
 End of File
 */
