/**
 * @file
 * @brief Generated model file.
 * 
 * Date:  2021-05-06 13:04
 * 
 * X2C-Version: 6.3.2018
 * X2C-Edition: Free
 */
/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: noisegen_fip_dspic33ck_int_lvmc                                                                             */
/* Date:  2021-05-06 13:04                                                                                            */

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
#include "PI_FiP16.h"
#include "Constant_Bool.h"
#include "SinGen_FiP16.h"
#include "ManualSwitch_FiP16.h"
#include "Constant_Int16.h"
#include "Scope_Main.h"
#include "CommonFcts.h"

/**********************************************************************************************************************/
/**     Defines                                                                                                      **/
/**********************************************************************************************************************/
#define FUNCTIONS \
    CONSTANT_FIP16_FUNCTIONS , \
    PI_FIP16_FUNCTIONS , \
    CONSTANT_BOOL_FUNCTIONS , \
    SINGEN_FIP16_FUNCTIONS , \
    MANUALSWITCH_FIP16_FUNCTIONS , \
    CONSTANT_INT16_FUNCTIONS , \
    SCOPE_MAIN_FUNCTIONS

#define PARAMETER_TABLE \
    { 1, &x2cModel.blocks.bConstant } , \
    { 2, &x2cModel.blocks.bConstant1 } , \
    { 3, &x2cModel.blocks.bConstant2 } , \
    { 4, &x2cModel.blocks.bConstant3 } , \
    { 5, &x2cModel.blocks.bManualSwitch } , \
    { 6, &x2cModel.blocks.bPI_current } , \
    { 7, &x2cModel.blocks.bSinGen } , \
    { 16, &x2cScope }

#define INPORT_PARAMID_TABLE \
    { 8, 2, &x2cModel.inports.bCPU_LOAD } , \
    { 9, 2, &x2cModel.inports.bCurrent } , \
    { 10, 1, &x2cModel.inports.bEnableControl } , \
    { 11, 1, &x2cModel.inports.bSW1 } , \
    { 12, 1, &x2cModel.inports.bSW2 } , \
    { 13, 2, &x2cModel.inports.bV_POT } 

#define OUTPORT_PARAMID_TABLE \
    { 14, 1, &x2cModel.outports.bLED_LD10 } , \
    { 15, 2, &x2cModel.outports.bPWM1 } 


/**********************************************************************************************************************/
/**                                            Model structure definition                                            **/
/**********************************************************************************************************************/
struct x2cModel {
/*  Control Blocks                                                                                                    */
    struct {
        CONSTANT_FIP16 bConstant;
        CONSTANT_INT16 bConstant1;
        CONSTANT_BOOL bConstant2;
        CONSTANT_FIP16 bConstant3;
        MANUALSWITCH_FIP16 bManualSwitch;
        PI_FIP16 bPI_current;
        SINGEN_FIP16 bSinGen;
    } blocks;
/*  Inports                                                                                                           */
    struct {
        int16 bCPU_LOAD;
        int16 bCurrent;
        bool bEnableControl;
        bool bSW1;
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
