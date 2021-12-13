/**
 * @file
 * @brief Generated model file.
 * 
 * Date:  2021-12-11 16:09
 * 
 * X2C-Version: 6.3.2018
 * X2C-Edition: Free
 */
/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: soundplayer_dspic33ck_lvmc                                                                                  */
/* Date:  2021-12-11 16:09                                                                                            */

/* X2C-Version: 6.3.2018                                                                                              */
/* X2C-Edition: Free                                                                                                  */

#ifndef X2C_H
#define X2C_H

#ifdef __cplusplus
extern "C" {
#endif

/**********************************************************************************************************************/
/**     Includes                                                                                                     **/
/**********************************************************************************************************************/
/* Common includes                                                                                                    */
#include "Constant_FiP16.h"
#include "Gain_FiP16.h"
#include "PT1_FiP16.h"
#include "Sum_FiP16.h"
#include "SinGen_FiP16.h"
#include "Mult_FiP16.h"
#include "Abs_FiP16.h"
#include "Scope_Main.h"
#include "CommonFcts.h"

/**********************************************************************************************************************/
/**     Defines                                                                                                      **/
/**********************************************************************************************************************/
#define FUNCTIONS \
    CONSTANT_FIP16_FUNCTIONS , \
    GAIN_FIP16_FUNCTIONS , \
    PT1_FIP16_FUNCTIONS , \
    SUM_FIP16_FUNCTIONS , \
    SINGEN_FIP16_FUNCTIONS , \
    MULT_FIP16_FUNCTIONS , \
    ABS_FIP16_FUNCTIONS , \
    SCOPE_MAIN_FUNCTIONS

#define PARAMETER_TABLE \
    { 1, &x2cModel.blocks.bAbs } , \
    { 2, &x2cModel.blocks.bConstant } , \
    { 3, &x2cModel.blocks.bGain } , \
    { 4, &x2cModel.blocks.bGain1 } , \
    { 5, &x2cModel.blocks.bMult } , \
    { 6, &x2cModel.blocks.bPT1 } , \
    { 7, &x2cModel.blocks.bSinGen1 } , \
    { 8, &x2cModel.blocks.bSinGen2 } , \
    { 9, &x2cModel.blocks.bSinGen3 } , \
    { 10, &x2cModel.blocks.bSinGen4 } , \
    { 11, &x2cModel.blocks.bSum } , \
    { 22, &x2cScope }

#define INPORT_PARAMID_TABLE \
    { 12, 2, &x2cModel.inports.bCPU_LOAD } , \
    { 13, 1, &x2cModel.inports.bEnableControl } , \
    { 14, 2, &x2cModel.inports.bFreq1 } , \
    { 15, 2, &x2cModel.inports.bFreq2 } , \
    { 16, 2, &x2cModel.inports.bFreq3 } , \
    { 17, 2, &x2cModel.inports.bFreq4 } , \
    { 18, 1, &x2cModel.inports.bSW2 } , \
    { 19, 2, &x2cModel.inports.bV_POT } 

#define OUTPORT_PARAMID_TABLE \
    { 20, 1, &x2cModel.outports.bLED_LD10 } , \
    { 21, 2, &x2cModel.outports.bPWM1 } 


/**********************************************************************************************************************/
/**                                            Model structure definition                                            **/
/**********************************************************************************************************************/
struct x2cModel {
/*  Control Blocks                                                                                                    */
    struct {
        ABS_FIP16 bAbs;
        CONSTANT_FIP16 bConstant;
        GAIN_FIP16 bGain;
        GAIN_FIP16 bGain1;
        MULT_FIP16 bMult;
        PT1_FIP16 bPT1;
        SINGEN_FIP16 bSinGen1;
        SINGEN_FIP16 bSinGen2;
        SINGEN_FIP16 bSinGen3;
        SINGEN_FIP16 bSinGen4;
        SUM_FIP16 bSum;
    } blocks;
/*  Inports                                                                                                           */
    struct {
        int16 bCPU_LOAD;
        bool bEnableControl;
        int16 bFreq1;
        int16 bFreq2;
        int16 bFreq3;
        int16 bFreq4;
        bool bSW2;
        int16 bV_POT;
    } inports;
/*  Outports                                                                                                          */
    struct {
        bool* bLED_LD10;
        int16* bPWM1;
    } outports;
};

/**********************************************************************************************************************/
/**     Externals                                                                                                    **/
/**********************************************************************************************************************/
extern struct x2cModel x2cModel;

extern const tBlockFunctions blockFunctionTable[];
extern const tParameterTable parameterIdTable[];
extern const tIoParamIdEntry inportParamIdTable[];
extern const tIoParamIdEntry outportParamIdTable[];
extern const tMaskParameterEntry maskParamIdTable[];
extern const tMaskParamDataRecord maskParamDataTable[];


/**********************************************************************************************************************/
/**     Prototypes                                                                                                   **/
/**********************************************************************************************************************/
void X2C_Init(void);
void X2C_Update(void);
void X2C_Update_1(void);

#ifdef __cplusplus
}
#endif

#endif
