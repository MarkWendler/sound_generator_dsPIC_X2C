/**
 * @summary sound generator for Microchip's dsPIC33Ck and LVMC board
 * @description This demo uses Scilab and X2C to generate 4 channel sine signal.
 *      The frequency of the sine signals can be set by a table an can play "music".
 *      The LVMC board is configured as H bridge output and a ~20W speaker can be driven to play the sound.
 * @author            Mark Wendler
 * @copyright         WTFPL Version 2.
*/

/**
  Section: Included Files
*/
#include "mcc_generated_files/system.h"
#include "sccp1_tmr.h"
#include "tmr1.h"
#include "X2CMain.h"
#include "pin_manager.h"

/*
                         Main application
 */

int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    TMR1_SetInterruptHandler(&ModelCalculation);
    TMR1_Start(); // model calculation
    
    //SCCP1_TMR_SetInteeruptHandle()// No interface available currently 
    // SCCP1_TMR_Timer32CallBack used instead of callback
    SCCP1_TMR_Start();
    
    while (1)
    {
        // Add your application code
        X2C_Communicate(); // X2C scope communication interface task. NON BLOCKING function.
    }
    return 1; 
}

typedef struct {
    uint16_t frequency; //Hz
    uint16_t period; //ms
}soundTable_t;

uint16_t testSound[] = {
    196,	333,
    330,	333,
    0,	0
};

extern uint16_t jingleBells[];
extern int16_t channelFreq1;
extern bool newNote;
void soundPlayer(void){ //called every 1ms
    static uint16_t msCounter = 0;
    static soundTable_t *setSound = (soundTable_t *)jingleBells;// set sound
    static soundTable_t *soundTable = NULL;// set sound
    
    
    
    if(soundTable == NULL) soundTable = setSound; //init
    
    IO_LD10_SetHigh();
    if (msCounter <= 1){
    //load next step from the list  
        newNote = true;
        msCounter = soundTable->period;
        if(msCounter == 0) soundTable = setSound;
                
        channelFreq1 = soundTable->frequency;
        msCounter = soundTable->period;
        
        soundTable++;
        
    }
    else if (msCounter <= 100){
        newNote = false;
        msCounter--;
    }
    else{
        msCounter--;
    }
    IO_LD10_SetLow();
}
//1ms period
void SCCP1_TMR_Timer32CallBack(void){
    soundPlayer();    
}

/**
 End of File
*/

