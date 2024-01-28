/*
 * File: task1.c
 *
 * Code generated for Simulink model 'task1'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 28 10:57:03 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "task1.h"
#include "task1_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_task1_T task1_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_task1_T task1_Y;

/* Real-time model */
static RT_MODEL_task1_T task1_M_;
RT_MODEL_task1_T *const task1_M = &task1_M_;

/* Model step function */
void task1_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/Input'
   */
  task1_Y.Out1 = task1_U.Input;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/Input'
   *  Sum: '<Root>/Add'
   */
  task1_Y.Out4 = task1_U.Input + task1_U.Input;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/Input'
   */
  task1_Y.Out2 = task1_U.Input;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/Input'
   */
  task1_Y.Out3 = task1_U.Input;
}

/* Model initialize function */
void task1_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void task1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
