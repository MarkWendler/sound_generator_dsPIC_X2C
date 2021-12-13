/* This file is part of X2C. http://x2c.lcm.at/                                                                       */

/* Model: soundplayer_dspic33ck_lvmc                                                                                  */
/* Date:  2021-12-11 16:09                                                                                            */

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
    return ((float_CoT)3.051850947599719E-5);
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

    /* Block: Constant                                                                                                */
    /* Value = 0.0                                                                                                    */
    x2cModel.blocks.bConstant.K = 0;

    /* Block: Gain                                                                                                    */
    /* Gain = 1.0                                                                                                     */
    x2cModel.blocks.bGain.V = 16384;
    x2cModel.blocks.bGain.sfr = 14;

    /* Block: Gain1                                                                                                   */
    /* Gain = 0.3                                                                                                     */
    x2cModel.blocks.bGain1.V = 9830;
    x2cModel.blocks.bGain1.sfr = 15;

    /* Block: Mult                                                                                                    */

    /* Block: PT1                                                                                                     */
    /* V = 0.5                                                                                                        */
    /* fc = 15000.0                                                                                                   */
    /* ts_fact = 1.0                                                                                                  */
    /* method = zoh                                                                                                   */
    x2cModel.blocks.bPT1.b0 = 15461;
    x2cModel.blocks.bPT1.b1 = 0;
    x2cModel.blocks.bPT1.a0 = -1846;
    x2cModel.blocks.bPT1.sfrb = 15;
    x2cModel.blocks.bPT1.sfra = 15;
    x2cModel.blocks.bPT1.in_old = 0;

    /* Block: SinGen1                                                                                                 */
    /* fmax = 32767.0                                                                                                 */
    /* Offset = 0.0                                                                                                   */
    /* Phase = 0.0                                                                                                    */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bSinGen1.delta_phi = 32767;
    x2cModel.blocks.bSinGen1.phase = 0;
    x2cModel.blocks.bSinGen1.offset = 0;
    x2cModel.blocks.bSinGen1.phi = 0;

    /* Block: SinGen2                                                                                                 */
    /* fmax = 32767.0                                                                                                 */
    /* Offset = 0.0                                                                                                   */
    /* Phase = 0.0                                                                                                    */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bSinGen2.delta_phi = 32767;
    x2cModel.blocks.bSinGen2.phase = 0;
    x2cModel.blocks.bSinGen2.offset = 0;
    x2cModel.blocks.bSinGen2.phi = 0;

    /* Block: SinGen3                                                                                                 */
    /* fmax = 32767.0                                                                                                 */
    /* Offset = 0.0                                                                                                   */
    /* Phase = 0.0                                                                                                    */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bSinGen3.delta_phi = 32767;
    x2cModel.blocks.bSinGen3.phase = 0;
    x2cModel.blocks.bSinGen3.offset = 0;
    x2cModel.blocks.bSinGen3.phi = 0;

    /* Block: SinGen4                                                                                                 */
    /* fmax = 32767.0                                                                                                 */
    /* Offset = 0.0                                                                                                   */
    /* Phase = 0.0                                                                                                    */
    /* ts_fact = 1.0                                                                                                  */
    x2cModel.blocks.bSinGen4.delta_phi = 32767;
    x2cModel.blocks.bSinGen4.phase = 0;
    x2cModel.blocks.bSinGen4.offset = 0;
    x2cModel.blocks.bSinGen4.phi = 0;

    /* Block: Sum                                                                                                     */
    /* In1 = +                                                                                                        */
    /* In2 = +                                                                                                        */
    /* In3 = +                                                                                                        */
    /* In4 = +                                                                                                        */
    /* In5 = 0                                                                                                        */
    /* In6 = 0                                                                                                        */
    /* In7 = 0                                                                                                        */
    /* In8 = 0                                                                                                        */
    x2cModel.blocks.bSum.sign = 85;


    /******************************************************************************************************************/
    /**                                              Initialize Inports                                              **/
    /******************************************************************************************************************/
    x2cModel.inports.bCPU_LOAD = (int16)0;
    x2cModel.inports.bEnableControl = false;
    x2cModel.inports.bFreq1 = (int16)0;
    x2cModel.inports.bFreq2 = (int16)0;
    x2cModel.inports.bFreq3 = (int16)0;
    x2cModel.inports.bFreq4 = (int16)0;
    x2cModel.inports.bSW2 = false;
    x2cModel.inports.bV_POT = (int16)0;

    /******************************************************************************************************************/
    /**                                               Link Block Inputs                                              **/
    /******************************************************************************************************************/

    /* Block Abs                                                                                                      */
    x2cModel.blocks.bAbs.In =
        &x2cModel.inports.bV_POT;

    /* Block Constant                                                                                                 */

    /* Block Gain                                                                                                     */
    x2cModel.blocks.bGain.In =
        &x2cModel.blocks.bGain1.Out;

    /* Block Gain1                                                                                                    */
    x2cModel.blocks.bGain1.In =
        &x2cModel.blocks.bAbs.Out;

    /* Block Mult                                                                                                     */
    x2cModel.blocks.bMult.In1 =
        &x2cModel.blocks.bSum.Out;
    x2cModel.blocks.bMult.In2 =
        &x2cModel.blocks.bGain.Out;

    /* Block PT1                                                                                                      */
    x2cModel.blocks.bPT1.In =
        &x2cModel.blocks.bMult.Out;

    /* Block SinGen1                                                                                                  */
    x2cModel.blocks.bSinGen1.A =
        &x2cModel.blocks.bGain1.Out;
    x2cModel.blocks.bSinGen1.f =
        &x2cModel.inports.bFreq4;

    /* Block SinGen2                                                                                                  */
    x2cModel.blocks.bSinGen2.A =
        &x2cModel.blocks.bGain1.Out;
    x2cModel.blocks.bSinGen2.f =
        &x2cModel.inports.bFreq1;

    /* Block SinGen3                                                                                                  */
    x2cModel.blocks.bSinGen3.A =
        &x2cModel.blocks.bGain1.Out;
    x2cModel.blocks.bSinGen3.f =
        &x2cModel.inports.bFreq2;

    /* Block SinGen4                                                                                                  */
    x2cModel.blocks.bSinGen4.A =
        &x2cModel.blocks.bGain1.Out;
    x2cModel.blocks.bSinGen4.f =
        &x2cModel.inports.bFreq3;

    /* Block Sum                                                                                                      */
    x2cModel.blocks.bSum.In1 =
        &x2cModel.blocks.bSinGen1.u;
    x2cModel.blocks.bSum.In2 =
        &x2cModel.blocks.bSinGen2.u;
    x2cModel.blocks.bSum.In3 =
        &x2cModel.blocks.bSinGen3.u;
    x2cModel.blocks.bSum.In4 =
        &x2cModel.blocks.bSinGen4.u;
    x2cModel.blocks.bSum.In5 =
        &x2cModel.blocks.bConstant.Out;
    x2cModel.blocks.bSum.In6 =
        &x2cModel.blocks.bConstant.Out;
    x2cModel.blocks.bSum.In7 =
        &x2cModel.blocks.bConstant.Out;
    x2cModel.blocks.bSum.In8 =
        &x2cModel.blocks.bConstant.Out;

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
    Constant_FiP16_Init(&x2cModel.blocks.bConstant);
    Gain_FiP16_Init(&x2cModel.blocks.bGain);
    Gain_FiP16_Init(&x2cModel.blocks.bGain1);
    Mult_FiP16_Init(&x2cModel.blocks.bMult);
    PT1_FiP16_Init(&x2cModel.blocks.bPT1);
    SinGen_FiP16_Init(&x2cModel.blocks.bSinGen1);
    SinGen_FiP16_Init(&x2cModel.blocks.bSinGen2);
    SinGen_FiP16_Init(&x2cModel.blocks.bSinGen3);
    SinGen_FiP16_Init(&x2cModel.blocks.bSinGen4);
    Sum_FiP16_Init(&x2cModel.blocks.bSum);
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
    Gain_FiP16_Update(&x2cModel.blocks.bGain1);
    SinGen_FiP16_Update(&x2cModel.blocks.bSinGen1);
    SinGen_FiP16_Update(&x2cModel.blocks.bSinGen2);
    SinGen_FiP16_Update(&x2cModel.blocks.bSinGen3);
    SinGen_FiP16_Update(&x2cModel.blocks.bSinGen4);
    Gain_FiP16_Update(&x2cModel.blocks.bGain);
    Sum_FiP16_Update(&x2cModel.blocks.bSum);
    Mult_FiP16_Update(&x2cModel.blocks.bMult);
    PT1_FiP16_Update(&x2cModel.blocks.bPT1);
    Scope_Main_Update(&x2cScope);
}

