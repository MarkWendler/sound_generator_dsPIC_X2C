/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: noisegen_fip_dspic33ck_int_lvmc                                                                             */
/* Date:  2021-08-26 10:21                                                                                            */

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

    /* Block: Abs                                                                                                     */

    /* Block: AutoSwitch                                                                                              */
    /* Thresh_up = 0.5                                                                                                */
    /* Thresh_down = 0.5                                                                                              */
    x2cModel.blocks.bAutoSwitch.Thresh_up = 16384;
    x2cModel.blocks.bAutoSwitch.Thresh_down = 16384;
    x2cModel.blocks.bAutoSwitch.Status = &RamTable_int16[0];

    /* Block: Constant1                                                                                               */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bConstant1.K = 0;

    /* Block: Constant2                                                                                               */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bConstant2.K = 0;

    /* Block: Constant3                                                                                               */
    /* Value = 0.1                                                                                                    */
    x2cModel.blocks.bConstant3.K = 3277;

    /* Block: Constant4                                                                                               */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bConstant4.K = 1;

    /* Block: Constant5                                                                                               */
    /* Value = 1.0                                                                                                    */
    x2cModel.blocks.bConstant5.K = 1;

    /* Block: DT1                                                                                                     */
    /* V = 1.0                                                                                                        */
    /* fc = 500.0                                                                                                     */
    /* ts_fact = 1.0                                                                                                  */
    /* method = zoh                                                                                                   */
    x2cModel.blocks.bDT1.b0 = -25133;
    x2cModel.blocks.bDT1.b1 = 25133;
    x2cModel.blocks.bDT1.a0 = -28005;
    x2cModel.blocks.bDT1.sfrb = 3;
    x2cModel.blocks.bDT1.sfra = 15;
    x2cModel.blocks.bDT1.in_old = 0;

    /* Block: Gain                                                                                                    */
    /* Gain = 0.04                                                                                                    */
    x2cModel.blocks.bGain.V = 1311;
    x2cModel.blocks.bGain.sfr = 15;

    /* Block: Gain1                                                                                                   */
    /* Gain = 5.0                                                                                                     */
    x2cModel.blocks.bGain1.V = 20480;
    x2cModel.blocks.bGain1.sfr = 12;

    /* Block: LookupTable1D                                                                                           */
    /* TableData = [real 1x4097 row vector]                                                                           */
    /* DimX = 4097                                                                                                    */
    x2cModel.blocks.bLookupTable1D.Table = &FlashTable_int16[0];
    x2cModel.blocks.bLookupTable1D.sfrX = 4;
    x2cModel.blocks.bLookupTable1D.maskX = 15;
    x2cModel.blocks.bLookupTable1D.idxOffsetX = 2048;

    /* Block: ManualSwitch                                                                                            */
    /* Toggle = 1.0                                                                                                   */
    x2cModel.blocks.bManualSwitch.Toggle = 1;

    /* Block: Mult                                                                                                    */

    /* Block: PI_current                                                                                              */
    /* Kp = 0.5                                                                                                       */
    /* Ki = 0.0                                                                                                       */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bPI_current.b0 = 0;
    x2cModel.blocks.bPI_current.b1 = 16384;
    x2cModel.blocks.bPI_current.sfrb0 = 15;
    x2cModel.blocks.bPI_current.sfrb1 = 15;
    x2cModel.blocks.bPI_current.i_old = 0;
    x2cModel.blocks.bPI_current.enable_old = 0;

    /* Block: PT1                                                                                                     */
    /* V = 1.0                                                                                                        */
    /* fc = 30.0                                                                                                      */
    /* ts_fact = 1.0                                                                                                  */
    /* method = zoh                                                                                                   */
    x2cModel.blocks.bPT1.b0 = 307;
    x2cModel.blocks.bPT1.b1 = 0;
    x2cModel.blocks.bPT1.a0 = -32461;
    x2cModel.blocks.bPT1.sfrb = 15;
    x2cModel.blocks.bPT1.sfra = 15;
    x2cModel.blocks.bPT1.in_old = 0;

    /* Block: SinGen                                                                                                  */
    /* fmax = 15000.0                                                                                                 */
    /* Offset = 0.0                                                                                                   */
    /* Phase = 0.0                                                                                                    */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bSinGen.delta_phi = 32767;
    x2cModel.blocks.bSinGen.phase = 0;
    x2cModel.blocks.bSinGen.offset = 0;
    x2cModel.blocks.bSinGen.phi = 0;

    /* Block: Sub                                                                                                     */

    /* Block: uI                                                                                                      */
    /* Ki = 100.0                                                                                                     */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.buI.b0 = 164;
    x2cModel.blocks.buI.sfr = 15;
    x2cModel.blocks.buI.i_old = 0;
    x2cModel.blocks.buI.enable_old = 0;

    /* Block: uI1                                                                                                     */
    /* Ki = 1.0                                                                                                       */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.buI1.b0 = 2;
    x2cModel.blocks.buI1.sfr = 15;
    x2cModel.blocks.buI1.i_old = 0;
    x2cModel.blocks.buI1.enable_old = 0;


    /* Initialize RAM table content */
    initRamTables();

    /******************************************************************************************************************/
    /**                                              Initialize Inports                                              **/
    /******************************************************************************************************************/
    x2cModel.inports.bCPU_LOAD = (int16)0;
    x2cModel.inports.bCurrent = (int16)0;
    x2cModel.inports.bEnableControl = false;
    x2cModel.inports.bSW1 = (int16)0;
    x2cModel.inports.bSW2 = false;
    x2cModel.inports.bV_POT = (int16)0;

    /******************************************************************************************************************/
    /**                                               Link Block Inputs                                              **/
    /******************************************************************************************************************/

    /* Block Abs                                                                                                      */
    x2cModel.blocks.bAbs.In =
        &x2cModel.inports.bV_POT;

    /* Block AutoSwitch                                                                                               */
    x2cModel.blocks.bAutoSwitch.In1 =
        &x2cModel.blocks.bSinGen.u;
    x2cModel.blocks.bAutoSwitch.Switch =
        &x2cModel.inports.bSW1;
    x2cModel.blocks.bAutoSwitch.In3 =
        &x2cModel.blocks.bGain.Out;

    /* Block Constant1                                                                                                */

    /* Block Constant2                                                                                                */

    /* Block Constant3                                                                                                */

    /* Block Constant4                                                                                                */

    /* Block Constant5                                                                                                */

    /* Block DT1                                                                                                      */
    x2cModel.blocks.bDT1.In =
        &x2cModel.blocks.bPT1.Out;

    /* Block Gain                                                                                                     */
    x2cModel.blocks.bGain.In =
        &x2cModel.blocks.bDT1.Out;

    /* Block Gain1                                                                                                    */
    x2cModel.blocks.bGain1.In =
        &x2cModel.inports.bCurrent;

    /* Block LookupTable1D                                                                                            */
    x2cModel.blocks.bLookupTable1D.x =
        &x2cModel.blocks.buI.Out;

    /* Block ManualSwitch                                                                                             */
    x2cModel.blocks.bManualSwitch.In1 =
        &x2cModel.inports.bV_POT;
    x2cModel.blocks.bManualSwitch.In2 =
        &x2cModel.blocks.buI1.Out;

    /* Block Mult                                                                                                     */
    x2cModel.blocks.bMult.In1 =
        &x2cModel.blocks.bManualSwitch.Out;
    x2cModel.blocks.bMult.In2 =
        &x2cModel.blocks.bManualSwitch.Out;

    /* Block PI_current                                                                                               */
    x2cModel.blocks.bPI_current.In =
        &x2cModel.blocks.bSub.Out;
    x2cModel.blocks.bPI_current.Init =
        &x2cModel.blocks.bConstant1.Out;
    x2cModel.blocks.bPI_current.Enable =
        &x2cModel.blocks.bConstant4.Out;

    /* Block PT1                                                                                                      */
    x2cModel.blocks.bPT1.In =
        &x2cModel.blocks.bLookupTable1D.Out;

    /* Block SinGen                                                                                                   */
    x2cModel.blocks.bSinGen.A =
        &x2cModel.blocks.bConstant3.Out;
    x2cModel.blocks.bSinGen.f =
        &x2cModel.blocks.bMult.Out;

    /* Block Sub                                                                                                      */
    x2cModel.blocks.bSub.Plus =
        &x2cModel.blocks.bSinGen.u;
    x2cModel.blocks.bSub.Minus =
        &x2cModel.blocks.bGain1.Out;

    /* Block uI                                                                                                       */
    x2cModel.blocks.buI.In =
        &x2cModel.blocks.bAbs.Out;
    x2cModel.blocks.buI.Init =
        &x2cModel.blocks.bConstant2.Out;
    x2cModel.blocks.buI.Enable =
        &x2cModel.blocks.bConstant5.Out;

    /* Block uI1                                                                                                      */
    x2cModel.blocks.buI1.In =
        &x2cModel.blocks.bAbs.Out;
    x2cModel.blocks.buI1.Init =
        &x2cModel.blocks.bConstant1.Out;
    x2cModel.blocks.buI1.Enable =
        &x2cModel.blocks.bConstant4.Out;

    /******************************************************************************************************************/
    /**                                                 Link Outports                                                **/
    /******************************************************************************************************************/
    x2cModel.outports.bLED_LD10 =
        &x2cModel.inports.bSW2;
    x2cModel.outports.bPWM1 =
        &x2cModel.blocks.bAutoSwitch.Out;

    /******************************************************************************************************************/
    /**                                           Run Block Init Functions                                           **/
    /******************************************************************************************************************/
    Abs_FiP16_Init(&x2cModel.blocks.bAbs);
    AutoSwitch_FiP16_Init(&x2cModel.blocks.bAutoSwitch);
    Constant_Int16_Init(&x2cModel.blocks.bConstant1);
    Constant_Int16_Init(&x2cModel.blocks.bConstant2);
    Constant_FiP16_Init(&x2cModel.blocks.bConstant3);
    Constant_Bool_Init(&x2cModel.blocks.bConstant4);
    Constant_Bool_Init(&x2cModel.blocks.bConstant5);
    DT1_FiP16_Init(&x2cModel.blocks.bDT1);
    Gain_FiP16_Init(&x2cModel.blocks.bGain);
    Gain_FiP16_Init(&x2cModel.blocks.bGain1);
    LookupTable1D_FiP16_Init(&x2cModel.blocks.bLookupTable1D);
    ManualSwitch_FiP16_Init(&x2cModel.blocks.bManualSwitch);
    Mult_FiP16_Init(&x2cModel.blocks.bMult);
    PI_FiP16_Init(&x2cModel.blocks.bPI_current);
    PT1_FiP16_Init(&x2cModel.blocks.bPT1);
    SinGen_FiP16_Init(&x2cModel.blocks.bSinGen);
    Sub_FiP16_Init(&x2cModel.blocks.bSub);
    uI_FiP16_Init(&x2cModel.blocks.buI);
    uI_FiP16_Init(&x2cModel.blocks.buI1);
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
    Abs_FiP16_Update(&x2cModel.blocks.bAbs);
    uI_FiP16_Update(&x2cModel.blocks.buI);
    uI_FiP16_Update(&x2cModel.blocks.buI1);
    Gain_FiP16_Update(&x2cModel.blocks.bGain1);
    LookupTable1D_FiP16_Update(&x2cModel.blocks.bLookupTable1D);
    ManualSwitch_FiP16_Update(&x2cModel.blocks.bManualSwitch);
    Mult_FiP16_Update(&x2cModel.blocks.bMult);
    PT1_FiP16_Update(&x2cModel.blocks.bPT1);
    DT1_FiP16_Update(&x2cModel.blocks.bDT1);
    SinGen_FiP16_Update(&x2cModel.blocks.bSinGen);
    Gain_FiP16_Update(&x2cModel.blocks.bGain);
    Sub_FiP16_Update(&x2cModel.blocks.bSub);
    AutoSwitch_FiP16_Update(&x2cModel.blocks.bAutoSwitch);
    PI_FiP16_Update(&x2cModel.blocks.bPI_current);
    Scope_Main_Update(&x2cScope);
}

