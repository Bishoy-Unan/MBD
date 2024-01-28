/*
 * File: ert_main.c
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

#include <stdio.h>              /* This ert_main.c example uses printf/fflush */
#include "session.h"                   /* Model's header file */
#include "rtwtypes.h"
#include "stddef.h"

/*
 * Example use case for call to exported function:
 * Input
 */
extern void sample_usage_Input(void);
void sample_usage_Input(void)
{
  /*
   * Set task inputs here:
   */

  /*
   * Call to exported function
   */
  Input();

  /*
   * Read function outputs here
   */
}

/*
 * The example "main" function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching exported functions to a real-time clock is target specific.
 * This example illustrates how you do this relative to initializing the model.
 */
int_T main(int_T argc, const char *argv[])
{
  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Initialize model */
  session_initialize();

  /* First time initialization of system output variables.
   * Constant and invariant outputs will not be updated
   * after this step.
   */
  while (rtmGetErrorStatus(session_M) == (NULL)) {
    /*  Perform application tasks here. */
  }

  /* Terminate model */
  session_terminate();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
