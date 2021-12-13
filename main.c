/**
 * @summary 4 channel sound generator for Microchip's dsPIC33Ck and LVMC board
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

//
typedef struct {
    uint8_t channel1; //MIDI number
    uint8_t channel2; //MIDI number
    uint8_t channel3; //MIDI number
    uint8_t channel4; //MIDI number
    uint8_t period; //480bpm -> 125ms = 1 unit
}sound4Channel_t;

uint8_t testSound[] = {
    48,0,0,0, 40,  
    0,0,0,0,    4, //pause
    0,60,0,0, 40,   
    0,0,0,0,    4, //pause
    0,0,69,0, 40,
    0,0,0,0,    4, //pause
    0,0,0,0, 0, //end of table
};
int16_t midiNote[128] = {0, 9, 9, 10, 10, 11, 12, 12, 13, 14, 15, 15, 16, 17, 18, 19, 21, 22, 23, 24, 26, 28, 29, 31, 33, 35, 37, 39, 41, 44, 46, 49, 52, 55, 58, 62, 65, 69, 73, 78, 82, 87, 92, 98, 104, 110, 117, 123, 131, 139, 147, 156, 165, 175, 185, 196, 208, 220, 233, 247, 262, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494, 523, 554, 587, 622, 659, 698, 740, 784, 831, 880, 932, 988, 1047, 1109, 1175, 1245, 1319, 1397, 1480, 1568, 1661, 1760, 1865, 1976, 2093, 2217, 2349, 2489, 2637, 2794, 2960, 3136, 3322, 3520, 3729, 3951, 4186, 4435, 4699, 4978, 5274, 5588, 5920, 6272, 6645, 7040, 7459, 7902, 8372, 8870, 9397, 9956, 10548, 11175, 11840, 12544};
//69 A4 concert pitch	440.00
//67 G4	392.00
//65 F4	349.23
//64 E4	329.63
//62 D4	293.66
//60 C4 (middle C)	261.63
//59 B3	246.94
//57 A3	220.00
//55 G3	196.00
//53 F3	174.61
//52 E3	164.81
//50 D3	146.83
//48 C3	130.81
extern int16_t channelFreq1, channelFreq2, channelFreq3, channelFreq4;
extern uint8_t jingleBells[];
void soundPlayer(void){
    static uint8_t bpmCount = 0;
    static sound4Channel_t *setSound = (sound4Channel_t *)testSound;// set sound
    static sound4Channel_t *soundTable = NULL;// set sound
    
    if(soundTable == NULL) soundTable = setSound; //init
    
    IO_LD10_SetHigh();
    if (bpmCount <= 1){
    //load next step from the list    
        if(bpmCount = soundTable->period == 0) soundTable = setSound;
                
        channelFreq1 = midiNote[soundTable->channel1];
        channelFreq2 = midiNote[soundTable->channel2];
        channelFreq3 = midiNote[soundTable->channel3];
        channelFreq4 = midiNote[soundTable->channel4];
        bpmCount = soundTable->period;
        soundTable++;
        
    }
    else{
        bpmCount--;
    }
    IO_LD10_SetLow();
}
//125ms period
void SCCP1_TMR_Timer32CallBack(void){
    soundPlayer();    
}

/**
 End of File
*/

