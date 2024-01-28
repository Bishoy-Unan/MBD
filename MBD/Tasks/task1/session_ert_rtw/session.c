/*
 * File: session.c
 *
 * Code generated for Simulink model 'session'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 15:34:39 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "session.h"
#include "session_private.h"

/* Block states (default storage) */
DW_session_T session_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_session_T session_Y;

/* Real-time model */
static RT_MODEL_session_T session_M_;
RT_MODEL_session_T *const session_M = &session_M_;

/* Output and update for function-call system: '<Root>/Triggered Subsystem' */
void func2(real_T *rty_Out2, DW_func2_T *localDW)
{
  /* Sum: '<S1>/Add' incorporates:
   *  Constant: '<S1>/Constant'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  *rty_Out2 = localDW->UnitDelay_DSTATE + 2.0;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  localDW->UnitDelay_DSTATE = *rty_Out2;
}

/* Output and update for function-call system: '<Root>/Triggered Subsystem1' */
void func1(real_T *rty_Out2, DW_func1_T *localDW)
{
  /* Sum: '<S2>/Add' incorporates:
   *  Constant: '<S2>/Constant'
   *  UnitDelay: '<S2>/Unit Delay'
   */
  *rty_Out2 = localDW->UnitDelay_DSTATE + 3.0;

  /* Update for UnitDelay: '<S2>/Unit Delay' */
  localDW->UnitDelay_DSTATE = *rty_Out2;
}

/* Model step function */
void Input(void)
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/Input' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem'
   */
  /* Outport: '<Root>/Out1' */
  func2(&session_Y.Out1, &session_DW.TriggeredSubsystem);

  /* RootInportFunctionCallGenerator generated from: '<Root>/Input' incorporates:
   *  SubSystem: '<Root>/Triggered Subsystem1'
   */

  /* Outport: '<Root>/Out2' */
  func1(&session_Y.Out2, &session_DW.TriggeredSubsystem1);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Input' */
}

/* Model initialize function */
void session_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void session_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
