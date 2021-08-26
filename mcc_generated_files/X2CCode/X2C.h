/**
 * @file
 * @brief Generated model file.
 * 
 * Date:  2021-08-26 10:21
 * 
 * X2C-Version: 6.3.2018
 * X2C-Edition: Free
 */
/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: noisegen_fip_dspic33ck_int_lvmc                                                                             */
/* Date:  2021-08-26 10:21                                                                                            */

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
#include "PI_FiP16.h"
#include "uI_FiP16.h"
#include "PT1_FiP16.h"
#include "ManualSwitch_FiP16.h"
#include "SinGen_FiP16.h"
#include "Mult_FiP16.h"
#include "Abs_FiP16.h"
#include "Sub_FiP16.h"
#include "LookupTable1D_FiP16.h"
#include "AutoSwitch_FiP16.h"
#include "Constant_Bool.h"
#include "Constant_Int16.h"
#include "DT1_FiP16.h"
#include "Scope_Main.h"
#include "CommonFcts.h"

/**********************************************************************************************************************/
/**     Defines                                                                                                      **/
/**********************************************************************************************************************/
#define FUNCTIONS \
    CONSTANT_FIP16_FUNCTIONS , \
    GAIN_FIP16_FUNCTIONS , \
    PI_FIP16_FUNCTIONS , \
    UI_FIP16_FUNCTIONS , \
    PT1_FIP16_FUNCTIONS , \
    MANUALSWITCH_FIP16_FUNCTIONS , \
    SINGEN_FIP16_FUNCTIONS , \
    MULT_FIP16_FUNCTIONS , \
    ABS_FIP16_FUNCTIONS , \
    SUB_FIP16_FUNCTIONS , \
    LOOKUPTABLE1D_FIP16_FUNCTIONS , \
    AUTOSWITCH_FIP16_FUNCTIONS , \
    CONSTANT_BOOL_FUNCTIONS , \
    CONSTANT_INT16_FUNCTIONS , \
    DT1_FIP16_FUNCTIONS , \
    SCOPE_MAIN_FUNCTIONS

#define PARAMETER_TABLE \
    { 1, &x2cModel.blocks.bAbs } , \
    { 2, &x2cModel.blocks.bAutoSwitch } , \
    { 3, &x2cModel.blocks.bConstant1 } , \
    { 4, &x2cModel.blocks.bConstant2 } , \
    { 5, &x2cModel.blocks.bConstant3 } , \
    { 6, &x2cModel.blocks.bConstant4 } , \
    { 7, &x2cModel.blocks.bConstant5 } , \
    { 8, &x2cModel.blocks.bDT1 } , \
    { 9, &x2cModel.blocks.bGain } , \
    { 10, &x2cModel.blocks.bGain1 } , \
    { 11, &x2cModel.blocks.bLookupTable1D } , \
    { 12, &x2cModel.blocks.bManualSwitch } , \
    { 13, &x2cModel.blocks.bMult } , \
    { 14, &x2cModel.blocks.bPI_current } , \
    { 15, &x2cModel.blocks.bPT1 } , \
    { 16, &x2cModel.blocks.bSinGen } , \
    { 17, &x2cModel.blocks.bSub } , \
    { 18, &x2cModel.blocks.buI } , \
    { 19, &x2cModel.blocks.buI1 } , \
    { 28, &x2cScope }

#define INPORT_PARAMID_TABLE \
    { 20, 2, &x2cModel.inports.bCPU_LOAD } , \
    { 21, 2, &x2cModel.inports.bCurrent } , \
    { 22, 1, &x2cModel.inports.bEnableControl } , \
    { 23, 2, &x2cModel.inports.bSW1 } , \
    { 24, 1, &x2cModel.inports.bSW2 } , \
    { 25, 2, &x2cModel.inports.bV_POT } 

#define OUTPORT_PARAMID_TABLE \
    { 26, 1, &x2cModel.outports.bLED_LD10 } , \
    { 27, 2, &x2cModel.outports.bPWM1 } 


/**********************************************************************************************************************/
/**                                            Model structure definition                                            **/
/**********************************************************************************************************************/
struct x2cModel {
/*  Control Blocks                                                                                                    */
    struct {
        ABS_FIP16 bAbs;
        AUTOSWITCH_FIP16 bAutoSwitch;
        CONSTANT_INT16 bConstant1;
        CONSTANT_INT16 bConstant2;
        CONSTANT_FIP16 bConstant3;
        CONSTANT_BOOL bConstant4;
        CONSTANT_BOOL bConstant5;
        DT1_FIP16 bDT1;
        GAIN_FIP16 bGain;
        GAIN_FIP16 bGain1;
        LOOKUPTABLE1D_FIP16 bLookupTable1D;
        MANUALSWITCH_FIP16 bManualSwitch;
        MULT_FIP16 bMult;
        PI_FIP16 bPI_current;
        PT1_FIP16 bPT1;
        SINGEN_FIP16 bSinGen;
        SUB_FIP16 bSub;
        UI_FIP16 buI;
        UI_FIP16 buI1;
    } blocks;
/*  Inports                                                                                                           */
    struct {
        int16 bCPU_LOAD;
        int16 bCurrent;
        bool bEnableControl;
        int16 bSW1;
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
