/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    filename.c

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */



#include "xc.h"

#include "qei.h"
#include "../userparms.h"

void QEI_Initialize (void){
    
 /* QEI Config*/
    
    // Data Direction for QEI
    // MCC configures it, so just in case...
    TRISCbits.TRISC12 = 1;   /* HA input, RP60 */
    TRISCbits.TRISC13 = 1;   /* HB input, RP61 */
    TRISCbits.TRISC14 = 1;   /* HC input, RPI96 */
    TRISCbits.TRISC15 = 1;   /* HC input, RPI96 */
    
    __builtin_write_RPCON(0x0000); // unlock PPS
    // PPS for QEI LVMC board
    RPINR14bits.QEIA1R = 60;
    RPINR14bits.QEIB1R = 61;   
    RPINR15bits.QEINDX1R = 62;
    RPINR15bits.QEIHOM1R = 63;
     
    __builtin_write_RPCON(0x0800); // unlock PPS
    
    QEI1CON = 0x0;
    QEI1CONbits.PIMOD = 6;                  // AB
    //QEI1CONbits.PIMOD = 1;                  // ABI

    // Limit count range between 0 and PULSES_PER_REV 
    QEI1LECL = 0;
    QEI1LECH = 0;
    QEI1GECL = PULSE_PER_REV-1;
    QEI1GECH = 0;
    
    // Inverted index, QEA, QEB pins
    QEI1IOC = 0x70; 
    QEI1IOCbits.SWPAB = 1;
   
    // Enable digital filtering, this is a must!
    QEI1IOCbits.FLTREN = 1; 
    
    // QEI enable
    QEI1CONbits.QEIEN = 1;
    /* END: QEI Config*/
    
}

int16_t GetQEIVel(void)
{
  static int32_t vel_temp = (60*(int32_t)(PWMFREQUENCY/SPEED_SAMPLE_FREQ)*(int32_t)INT16_MAX)/((int32_t)MAX_SPEED*(int32_t)PULSE_PER_REV);
  static uint16_t SampleTimeDivider = 0;
  static int16_t Speed;
  
  
  SampleTimeDivider++;  /* Sample time 10ms SAMPLE_FREQ */
  if(SampleTimeDivider >= (PWMFREQUENCY/SPEED_SAMPLE_FREQ))    
  {
      SampleTimeDivider = 0;
      Speed = VEL1CNT*(int16_t)vel_temp;
  }
  return (int16_t)Speed;
}


/* *****************************************************************************
 End of File
 */
