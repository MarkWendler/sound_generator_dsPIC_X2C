/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> 

typedef signed int SFRAC16;

#define Q15(Float_Value)	\
        ((Float_Value < 0.0) ? (SFRAC16)(32768 * (Float_Value) - 0.5) \
        : (SFRAC16)(32767 * (Float_Value) + 0.5))

#define FOSC            200000000
#define PWMFREQUENCY    100000 //100kHz

#define DEADTIMESEC     0.000001            // Dead time in seconds - 1us
#define DFCY            FOSC/2        // Instruction cycle frequency (Hz)

#define DTCY            (1.0/DFCY)          // Instruction cycle period (sec)
#define DDEADTIME       (unsigned int)(DEADTIMESEC*DFCY)	// Dead time in dTcys
#define MIN_DUTY        (unsigned int)(DDEADTIME/2 + 1)        // Should be >= DDEADTIME/2 for PWM Errata workaround
#define LOOPINTCY       (DFCY/PWMFREQUENCY) // Basic loop period in units of Tcy
#define PWM_PERIODE     (LOOPINTCY/2)

#define PWM_MIN     0.02 * LOOPINTCY
#define PWM_MAX     0.98 * LOOPINTCY

//---- Parameters for auto offset compensation -------//
#define CURRENT_OFFSET_SAMPLE_COUNT 1024 //Number of samples for avaraging
#define CURRENT_OFFSET_SAMPLE_SCALER  10 //Backshifting of the result of the avaraging
#define CURRENT_MAX_OFFSET 0x00FF // Maximum offset that still accaptable, above that error
    
#endif	/* XC_HEADER_TEMPLATE_H */

