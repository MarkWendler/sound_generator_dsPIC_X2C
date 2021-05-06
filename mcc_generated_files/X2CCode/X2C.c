/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: noisegen_fip_dspic33ck_int_lvmc                                                                             */
/* Date:  2021-05-06 13:04                                                                                            */

/* X2C-Version: 6.3.2018                                                                                              */
/* X2C-Edition: Free                                                                                                  */

/* Common includes                                                                                                    */
#include "TableStruct.h"
/* Generated file includes                                                                                            */
#include "FlashTable.h"
#include "RamTable.h"
#include "X2C.h"

/**********************************************************************************************************************/
/**                                                       Model                                                      **/
/**********************************************************************************************************************/
struct x2cModel x2cModel;

/**********************************************************************************************************************/
/**                                                       Scope                                                      **/
/**********************************************************************************************************************/
SCOPE_MAIN x2cScope;

/* Block function table                                                                                               */
#define END_BLOCKFUNCTIONS { (uint16)0, (void (*)(void*))0, (void (*)(void*))0, \
    (tLoadImplementationParameter)0, (tSaveImplementationParameter)0, (void* (*)(const void*, uint16))0 }
const tBlockFunctions blockFunctionTable[] = {
    FUNCTIONS,
    END_BLOCKFUNCTIONS
};

/* Parameter identifier table                                                                                         */
#define END_PARAMETERTABLE { (uint16)0, (void*)0 }
const tParameterTable parameterIdTable[] = {
    PARAMETER_TABLE,
    END_PARAMETERTABLE
};

/* Inport Parameter identifier table                                                                                  */
#define END_PARAMID_IO_TABLE { 0, 0, (void*)0 }
const tIoParamIdEntry inportParamIdTable[] = {
    INPORT_PARAMID_TABLE, 
    END_PARAMID_IO_TABLE
};

/* Outport Parameter identifier table                                                                                 */
const tIoParamIdEntry outportParamIdTable[] = {
    OUTPORT_PARAMID_TABLE, 
    END_PARAMID_IO_TABLE
};
/* Mask Parameter identifier table                                                                                    */
#define END_MASKPARAMID_TABLE { 0, (void*)0, (void*)0, (tSaveMaskParameter)0, (tLoadMaskParameter)0, (tConvertMaskParameter)0, (tBackupMaskParameter)0, (tRestoreMaskParameter)0 }
const tMaskParameterEntry maskParamIdTable[] = {
    END_MASKPARAMID_TABLE
};

/* Mask Parameter data table                                                                                          */
const tMaskParamDataRecord maskParamDataTable[] = {
    { 0, 0, (void*)0, 0, 0 }
};

/**********************************************************************************************************************/
/** Model Sample Time                                                                                                **/
/**********************************************************************************************************************/
float_CoT getModelSampleTime()
{
    return ((float_CoT)5.0E-5);
}

/**********************************************************************************************************************/
/**                                                  Initialization                                                  **/
/**********************************************************************************************************************/
void X2C_Init()
{
    /******************************************************************************************************************/
    /**                                          Initialize Block Parameters                                         **/
    /******************************************************************************************************************/

    /* Block: Constant                                                                                                */
    /* Value = 0.1                                                                                                    */
    x2cModel.blocks.bConstant.K = 3277;

    /* Block: Constant1                                                                                               */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bConstant1.K = 0;

    /* Block: Constant2                                                                                               */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bConstant2.K = 1;

    /* Block: Constant3                                                                                               */
    /* Value = 0.1                                                                                                    */
    x2cModel.blocks.bConstant3.K = 3277;

    /* Block: ManualSwitch                                                                                            */
    /* Toggle = 0.0                                                                                                   */
    x2cModel.blocks.bManualSwitch.Toggle = 0;

    /* Block: PI_current                                                                                              */
    /* Kp = 0.8                                                                                                       */
    /* Ki = 5.0                                                                                                       */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bPI_current.b0 = 8;
    x2cModel.blocks.bPI_current.b1 = 26214;
    x2cModel.blocks.bPI_current.sfrb0 = 15;
    x2cModel.blocks.bPI_current.sfrb1 = 15;
    x2cModel.blocks.bPI_current.i_old = 0;
    x2cModel.blocks.bPI_current.enable_old = 0;

    /* Block: SinGen                                                                                                  */
    /* fmax = 15000.0                                                                                                 */
    /* Offset = 0.0                                                                                                   */
    /* Phase = 0.0                                                                                                    */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bSinGen.delta_phi = 32767;
    x2cModel.blocks.bSinGen.phase = 0;
    x2cModel.blocks.bSinGen.offset = 0;
    x2cModel.blocks.bSinGen.phi = 0;


    /******************************************************************************************************************/
    /**                                              Initialize Inports                                              **/
    /******************************************************************************************************************/
    x2cModel.inports.bCPU_LOAD = (int16)0;
    x2cModel.inports.bCurrent = (int16)0;
    x2cModel.inports.bEnableControl = false;
    x2cModel.inports.bSW1 = false;
    x2cModel.inports.bSW2 = false;
    x2cModel.inports.bV_POT = (int16)0;

    /******************************************************************************************************************/
    /**                                               Link Block Inputs                                              **/
    /******************************************************************************************************************/

    /* Block Constant                                                                                                 */

    /* Block Constant1                                                                                                */

    /* Block Constant2                                                                                                */

    /* Block Constant3                                                                                                */

    /* Block ManualSwitch                                                                                             */
    x2cModel.blocks.bManualSwitch.In1 =
        &x2cModel.blocks.bSinGen.u;
    x2cModel.blocks.bManualSwitch.In2 =
        &x2cModel.blocks.bPI_current.Out;

    /* Block PI_current                                                                                               */
    x2cModel.blocks.bPI_current.In =
        &x2cModel.blocks.bSinGen.u;
    x2cModel.blocks.bPI_current.Init =
        &x2cModel.blocks.bConstant1.Out;
    x2cModel.blocks.bPI_current.Enable =
        &x2cModel.blocks.bConstant2.Out;

    /* Block SinGen                                                                                                   */
    x2cModel.blocks.bSinGen.A =
        &x2cModel.blocks.bConstant.Out;
    x2cModel.blocks.bSinGen.f =
        &x2cModel.blocks.bConstant3.Out;

    /******************************************************************************************************************/
    /**                                                 Link Outports                                                **/
    /******************************************************************************************************************/
    x2cModel.outports.bLED_LD10 =
        &x2cModel.inports.bSW2;
    x2cModel.outports.bPWM1 =
        &x2cModel.blocks.bManualSwitch.Out;

    /******************************************************************************************************************/
    /**                                           Run Block Init Functions                                           **/
    /******************************************************************************************************************/
    Constant_FiP16_Init(&x2cModel.blocks.bConstant);
    Constant_Int16_Init(&x2cModel.blocks.bConstant1);
    Constant_Bool_Init(&x2cModel.blocks.bConstant2);
    Constant_FiP16_Init(&x2cModel.blocks.bConstant3);
    ManualSwitch_FiP16_Init(&x2cModel.blocks.bManualSwitch);
    PI_FiP16_Init(&x2cModel.blocks.bPI_current);
    SinGen_FiP16_Init(&x2cModel.blocks.bSinGen);
    Scope_Main_Init(&x2cScope);

    /* Initialize TableStruct tables                                                                                  */
    TableStruct->TFncTable = blockFunctionTable;
    TableStruct->TParamTable = parameterIdTable;
    TableStruct->inportParamTable = inportParamIdTable;
    TableStruct->outportParamTable = outportParamIdTable;
    TableStruct->maskParameterTable = maskParamIdTable;
}

/**********************************************************************************************************************/
/**                                            Run Block Update Functions                                            **/
/**********************************************************************************************************************/
void X2C_Update(void)
{
    X2C_Update_1();

}

/* X2C_Update for blocks with 1*Ts                                                                                    */
void X2C_Update_1(void)
{
    SinGen_FiP16_Update(&x2cModel.blocks.bSinGen);
    PI_FiP16_Update(&x2cModel.blocks.bPI_current);
    ManualSwitch_FiP16_Update(&x2cModel.blocks.bManualSwitch);
    Scope_Main_Update(&x2cScope);
}

