/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: soundplayer_dspic33ck_lvmc                                                                                  */
/* Date:  2021-12-22 14:42                                                                                            */

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
    return ((float_CoT)1.5259254737998596E-5);
}

/**********************************************************************************************************************/
/**                                                  Initialization                                                  **/
/**********************************************************************************************************************/
void X2C_Init()
{
    /******************************************************************************************************************/
    /**                                          Initialize Block Parameters                                         **/
    /******************************************************************************************************************/

    /* Block: Abs                                                                                                     */

    /* Block: Gain1                                                                                                   */
    /* Gain = 1.0                                                                                                     */
    x2cModel.blocks.bGain1.V = 16384;
    x2cModel.blocks.bGain1.sfr = 14;

    /* Block: Mult                                                                                                    */

    /* Block: PT1                                                                                                     */
    /* V = 0.5                                                                                                        */
    /* fc = 15000.0                                                                                                   */
    /* ts_fact = 1.0                                                                                                  */
    /* method = zoh                                                                                                   */
    x2cModel.blocks.bPT1.b0 = 12495;
    x2cModel.blocks.bPT1.b1 = 0;
    x2cModel.blocks.bPT1.a0 = -7778;
    x2cModel.blocks.bPT1.sfrb = 15;
    x2cModel.blocks.bPT1.sfra = 15;
    x2cModel.blocks.bPT1.in_old = 0;

    /* Block: SinGen1                                                                                                 */
    /* fmax = 16100.0                                                                                                 */
    /* Offset = 0.0                                                                                                   */
    /* Phase = 0.0                                                                                                    */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bSinGen1.delta_phi = 32100;
    x2cModel.blocks.bSinGen1.phase = 0;
    x2cModel.blocks.bSinGen1.offset = 0;
    x2cModel.blocks.bSinGen1.phi = 0;

    /* Block: SuperBlock/AutoSwitch                                                                                   */
    /* Thresh_up = 0.1                                                                                                */
    /* Thresh_down = 0.1                                                                                              */
    x2cModel.blocks.sSuperBlock.bAutoSwitch.Thresh_up = 3277;
    x2cModel.blocks.sSuperBlock.bAutoSwitch.Thresh_down = 3277;
    x2cModel.blocks.sSuperBlock.bAutoSwitch.Status = &RamTable_int16[0];

    /* Block: SuperBlock/Constant                                                                                     */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.sSuperBlock.bConstant.K = 0;

    /* Block: SuperBlock/Constant1                                                                                    */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.sSuperBlock.bConstant1.K = 32767;

    /* Block: SuperBlock/Constant2                                                                                    */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.sSuperBlock.bConstant2.K = 0;

    /* Block: SuperBlock/Gain1                                                                                        */
    /* Gain = 1.0                                                                                                     */
    x2cModel.blocks.sSuperBlock.bGain1.V = 16384;
    x2cModel.blocks.sSuperBlock.bGain1.sfr = 14;

    /* Block: SuperBlock/LookupTable1                                                                                 */
    /* Lookup = [real 1x257 row vector]                                                                               */
    x2cModel.blocks.sSuperBlock.bLookupTable1.Table = &FlashTable_int16[0];

    /* Block: SuperBlock/TypeConv                                                                                     */

    /* Block: SuperBlock/uI                                                                                           */
    /* Ki = 1.0                                                                                                       */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.sSuperBlock.buI.b0 = 1;
    x2cModel.blocks.sSuperBlock.buI.sfr = 15;
    x2cModel.blocks.sSuperBlock.buI.i_old = 0;
    x2cModel.blocks.sSuperBlock.buI.enable_old = 0;


    /* Initialize RAM table content */
    initRamTables();

    /******************************************************************************************************************/
    /**                                              Initialize Inports                                              **/
    /******************************************************************************************************************/
    x2cModel.inports.bCPU_LOAD = (int16)0;
    x2cModel.inports.bEnableControl = false;
    x2cModel.inports.bFreq1 = (int16)0;
    x2cModel.inports.bNewNote = false;
    x2cModel.inports.bSW2 = false;
    x2cModel.inports.bV_POT = (int16)0;

    /******************************************************************************************************************/
    /**                                               Link Block Inputs                                              **/
    /******************************************************************************************************************/

    /* Block Abs                                                                                                      */
    x2cModel.blocks.bAbs.In =
        &x2cModel.inports.bV_POT;

    /* Block Gain1                                                                                                    */
    x2cModel.blocks.bGain1.In =
        &x2cModel.blocks.bAbs.Out;

    /* Block Mult                                                                                                     */
    x2cModel.blocks.bMult.In1 =
        &x2cModel.blocks.bSinGen1.u;
    x2cModel.blocks.bMult.In2 =
        &x2cModel.blocks.bGain1.Out;

    /* Block PT1                                                                                                      */
    x2cModel.blocks.bPT1.In =
        &x2cModel.blocks.bMult.Out;

    /* Block SinGen1                                                                                                  */
    x2cModel.blocks.bSinGen1.A =
        &x2cModel.blocks.sSuperBlock.bAutoSwitch.Out;
    x2cModel.blocks.bSinGen1.f =
        &x2cModel.inports.bFreq1;

    /* Block AutoSwitch                                                                                               */
    x2cModel.blocks.sSuperBlock.bAutoSwitch.In1 =
        &x2cModel.blocks.sSuperBlock.bGain1.Out;
    x2cModel.blocks.sSuperBlock.bAutoSwitch.Switch =
        &x2cModel.blocks.sSuperBlock.bTypeConv.Out;
    x2cModel.blocks.sSuperBlock.bAutoSwitch.In3 =
        &x2cModel.blocks.sSuperBlock.bConstant2.Out;

    /* Block Constant                                                                                                 */

    /* Block Constant1                                                                                                */

    /* Block Constant2                                                                                                */

    /* Block Gain1                                                                                                    */
    x2cModel.blocks.sSuperBlock.bGain1.In =
        &x2cModel.blocks.sSuperBlock.bLookupTable1.Out;

    /* Block LookupTable1                                                                                             */
    x2cModel.blocks.sSuperBlock.bLookupTable1.In =
        &x2cModel.blocks.sSuperBlock.buI.Out;

    /* Block TypeConv                                                                                                 */
    x2cModel.blocks.sSuperBlock.bTypeConv.In =
        &x2cModel.inports.bNewNote;

    /* Block uI                                                                                                       */
    x2cModel.blocks.sSuperBlock.buI.In =
        &x2cModel.blocks.sSuperBlock.bConstant1.Out;
    x2cModel.blocks.sSuperBlock.buI.Init =
        &x2cModel.blocks.sSuperBlock.bConstant.Out;
    x2cModel.blocks.sSuperBlock.buI.Enable =
        &x2cModel.inports.bNewNote;

    /******************************************************************************************************************/
    /**                                                 Link Outports                                                **/
    /******************************************************************************************************************/
    x2cModel.outports.bLED_LD10 =
        &x2cModel.inports.bSW2;
    x2cModel.outports.bPWM1 =
        &x2cModel.blocks.bPT1.Out;

    /******************************************************************************************************************/
    /**                                           Run Block Init Functions                                           **/
    /******************************************************************************************************************/
    Abs_FiP16_Init(&x2cModel.blocks.bAbs);
    Gain_FiP16_Init(&x2cModel.blocks.bGain1);
    Mult_FiP16_Init(&x2cModel.blocks.bMult);
    PT1_FiP16_Init(&x2cModel.blocks.bPT1);
    SinGen_FiP16_Init(&x2cModel.blocks.bSinGen1);
    AutoSwitch_FiP16_Init(&x2cModel.blocks.sSuperBlock.bAutoSwitch);
    Constant_FiP16_Init(&x2cModel.blocks.sSuperBlock.bConstant);
    Constant_FiP16_Init(&x2cModel.blocks.sSuperBlock.bConstant1);
    Constant_FiP16_Init(&x2cModel.blocks.sSuperBlock.bConstant2);
    Gain_FiP16_Init(&x2cModel.blocks.sSuperBlock.bGain1);
    LookupTable_FiP16_Init(&x2cModel.blocks.sSuperBlock.bLookupTable1);
    TypeConv_Bool_FiP16_Init(&x2cModel.blocks.sSuperBlock.bTypeConv);
    uI_FiP16_Init(&x2cModel.blocks.sSuperBlock.buI);
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
    uI_FiP16_Update(&x2cModel.blocks.sSuperBlock.buI);
    LookupTable_FiP16_Update(&x2cModel.blocks.sSuperBlock.bLookupTable1);
    Gain_FiP16_Update(&x2cModel.blocks.sSuperBlock.bGain1);
    TypeConv_Bool_FiP16_Update(&x2cModel.blocks.sSuperBlock.bTypeConv);
    Abs_FiP16_Update(&x2cModel.blocks.bAbs);
    AutoSwitch_FiP16_Update(&x2cModel.blocks.sSuperBlock.bAutoSwitch);
    Gain_FiP16_Update(&x2cModel.blocks.bGain1);
    SinGen_FiP16_Update(&x2cModel.blocks.bSinGen1);
    Mult_FiP16_Update(&x2cModel.blocks.bMult);
    PT1_FiP16_Update(&x2cModel.blocks.bPT1);
    Scope_Main_Update(&x2cScope);
}

