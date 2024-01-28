/*
 * File: task1.h
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

#ifndef RTW_HEADER_task1_h_
#define RTW_HEADER_task1_h_
#ifndef task1_COMMON_INCLUDES_
#define task1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* task1_COMMON_INCLUDES_ */

#include "task1_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_task1_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  real_T Out4;                         /* '<Root>/Out4' */
} ExtY_task1_T;

/* Real-time Model Data Structure */
struct tag_RTM_task1_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_task1_T task1_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_task1_T task1_Y;

/* Model entry point functions */
extern void task1_initialize(void);
extern void task1_step(void);
extern void task1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_task1_T *const task1_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 * Block '<Root>/Display3' : Unused code path elimination
 * Block '<Root>/Max' : Eliminated since input is scalar
 * Block '<Root>/Min' : Eliminated since input is scalar
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'task1'
 * '<S1>'   : 'task1/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_task1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
