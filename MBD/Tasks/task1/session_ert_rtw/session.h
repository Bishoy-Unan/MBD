/*
 * File: session.h
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

#ifndef RTW_HEADER_session_h_
#define RTW_HEADER_session_h_
#include <stddef.h>
#ifndef session_COMMON_INCLUDES_
#define session_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* session_COMMON_INCLUDES_ */

#include "session_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>/Triggered Subsystem' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
} DW_func2_T;

/* Block states (default storage) for system '<Root>/Triggered Subsystem1' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S2>/Unit Delay' */
} DW_func1_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  DW_func1_T TriggeredSubsystem1;      /* '<Root>/Triggered Subsystem1' */
  DW_func2_T TriggeredSubsystem;       /* '<Root>/Triggered Subsystem' */
} DW_session_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
} ExtY_session_T;

/* Real-time Model Data Structure */
struct tag_RTM_session_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_session_T session_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_session_T session_Y;

/* Model entry point functions */
extern void session_initialize(void);
extern void session_terminate(void);

/* Exported entry point function */
extern void Input(void);

/* Real-time Model object */
extern RT_MODEL_session_T *const session_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 * Block '<Root>/Scope1' : Unused code path elimination
 * Block '<Root>/Scope2' : Unused code path elimination
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
 * '<Root>' : 'session'
 * '<S1>'   : 'session/Triggered Subsystem'
 * '<S2>'   : 'session/Triggered Subsystem1'
 */
#endif                                 /* RTW_HEADER_session_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
