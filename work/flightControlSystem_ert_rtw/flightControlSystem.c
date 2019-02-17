/*
 * flightControlSystem.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "flightControlSystem".
 *
 * Model version              : 1.138
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Sun Feb 17 15:29:21 2019
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "flightControlSystem.h"
#include "flightControlSystem_private.h"

/* Exported block signals */
CommandBus cmd_inport;                 /* '<Root>/AC cmd' */
SensorsBus sensor_inport;              /* '<Root>/Sensors' */
real32_T motors_outport[4];            /* '<S1>/controller' */
uint8_T flag_outport;                  /* '<S3>/Merge' */

/* Block signals (default storage) */
B_flightControlSystem_T flightControlSystem_B;

/* Block states (default storage) */
DW_flightControlSystem_T flightControlSystem_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_flightControlSystem_T flightControlSystem_Y;

/* Real-time model */
RT_MODEL_flightControlSystem_T flightControlSystem_M_;
RT_MODEL_flightControlSystem_T *const flightControlSystem_M =
  &flightControlSystem_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void flightControlSystem_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(flightControlSystem_M, 1));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (flightControlSystem_M->Timing.TaskCounters.TID[1])++;
  if ((flightControlSystem_M->Timing.TaskCounters.TID[1]) > 39) {/* Sample time: [0.2s, 0.0s] */
    flightControlSystem_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * Output and update for action system:
 *    '<S3>/Geofencing error'
 *    '<S3>/estimator//Optical flow error'
 *    '<S3>/Normal condition'
 */
void flightControlSystem_Geofencingerror(uint8_T *rty_Out1,
  P_Geofencingerror_flightControlSystem_T *localP)
{
  /* SignalConversion: '<S13>/OutportBuffer_InsertedFor_Out1_at_inport_0' incorporates:
   *  Constant: '<S13>/Constant'
   */
  *rty_Out1 = localP->Constant_Value;
}

/* Start for atomic system: '<S1>/Logging' */
void flightControlSystem_Logging_Start(RT_MODEL_flightControlSystem_T * const
  flightControlSystem_M, DW_Logging_flightControlSystem_T *localDW)
{
  /* Start for ToWorkspace: '<S4>/To Workspace2' */
  {
    static int_T rt_ToWksWidths[] = { 12 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 12 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace2";
    localDW->ToWorkspace2_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "estim",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace2_PWORK.LoggedData == (NULL))
      return;
  }

  /* Start for ToWorkspace: '<S4>/To Workspace6' */
  {
    static int_T rt_ToWksWidths[] = { 10 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 10 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace6";
    localDW->ToWorkspace6_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "sensor",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace6_PWORK.LoggedData == (NULL))
      return;
  }

  /* Start for ToWorkspace: '<S4>/To Workspace3' */
  {
    static int_T rt_ToWksWidths[] = { 9 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 9 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace3";
    localDW->ToWorkspace3_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "cmd",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace3_PWORK.LoggedData == (NULL))
      return;
  }

  /* Start for ToWorkspace: '<S4>/To Workspace4' */
  {
    static int_T rt_ToWksWidths[] = { 8 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 8 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace4";
    localDW->ToWorkspace4_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "optical",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace4_PWORK.LoggedData == (NULL))
      return;
  }

  /* Start for ToWorkspace: '<S4>/To Workspace5' */
  {
    static int_T rt_ToWksWidths[] = { 8 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 8 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "SensorCalibration" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace5";
    localDW->ToWorkspace5_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "calib",
      1,
      0,
      100,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace5_PWORK.LoggedData == (NULL))
      return;
  }

  /* Start for ToWorkspace: '<S4>/To Workspace' */
  {
    static int_T rt_ToWksWidths[] = { 4 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 4 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace";
    localDW->ToWorkspace_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "motor",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace_PWORK.LoggedData == (NULL))
      return;
  }

  /* Start for ToWorkspace: '<S4>/To Workspace1' */
  {
    static int_T rt_ToWksWidths[] = { 8 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 8 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "flightControlSystem/Flight Control System/Logging/To Workspace1";
    localDW->ToWorkspace1_PWORK.LoggedData = rt_CreateStructLogVar(
      flightControlSystem_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(flightControlSystem_M),
      flightControlSystem_M->Timing.stepSize0,
      (&rtmGetErrorStatus(flightControlSystem_M)),
      "posref",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (localDW->ToWorkspace1_PWORK.LoggedData == (NULL))
      return;
  }
}

/* Output and update for atomic system: '<S1>/Logging' */
void flightControlSystem_Logging(RT_MODEL_flightControlSystem_T * const
  flightControlSystem_M, const real32_T rtu_motorCmds[4], const real32_T
  rtu_posRef[8], const statesEstim_t *rtu_states_estim_Inport_3, const
  CommandBus *rtu_ReferenceValueServerBus_Inport_4, const SensorsBus
  *rtu_Sensors_Inport_5, real32_T rtu_sensordata_datin_Inport_6, uint32_T
  rtu_sensordata_datin_Inport_6_d, real32_T rtu_sensordata_datin_Inport_6_e,
  real32_T rtu_sensordata_datin_Inport_6_c, real32_T
  rtu_sensordata_datin_Inport_6_cg, real32_T rtu_sensordata_datin_Inport_6_i,
  real32_T rtu_sensordata_datin_Inport_6_h, real32_T
  rtu_sensordata_datin_Inport_6_b, real32_T rtu_sensordata_datin_Inport_6_dz,
  real32_T rtu_sensordata_datin_Inport_6_n, B_Logging_flightControlSystem_T
  *localB, DW_Logging_flightControlSystem_T *localDW)
{
  /* local block i/o variables */
  real32_T rtb_SigConversion_InsertedFor_Sensors_BusSelector_BusSelector_i[8];
  real32_T rtb_DataTypeConversion7;
  real32_T rtb_DataTypeConversion11;
  int32_T i;

  /* SignalConversion: '<S4>/states_estim_BusSelector' */
  rtb_DataTypeConversion7 = rtu_states_estim_Inport_3->q;
  rtb_DataTypeConversion11 = rtu_states_estim_Inport_3->r;

  /* SignalConversion: '<S4>/TmpSignal ConversionAtTo Workspace2Inport1' incorporates:
   *  SignalConversion: '<S4>/states_estim_BusSelector'
   */
  localB->TmpSignalConversionAtToWorkspace2Inport1[0] =
    rtu_states_estim_Inport_3->X;
  localB->TmpSignalConversionAtToWorkspace2Inport1[1] =
    rtu_states_estim_Inport_3->Y;
  localB->TmpSignalConversionAtToWorkspace2Inport1[2] =
    rtu_states_estim_Inport_3->Z;
  localB->TmpSignalConversionAtToWorkspace2Inport1[3] =
    rtu_states_estim_Inport_3->yaw;
  localB->TmpSignalConversionAtToWorkspace2Inport1[4] =
    rtu_states_estim_Inport_3->pitch;
  localB->TmpSignalConversionAtToWorkspace2Inport1[5] =
    rtu_states_estim_Inport_3->roll;
  localB->TmpSignalConversionAtToWorkspace2Inport1[6] =
    rtu_states_estim_Inport_3->dx;
  localB->TmpSignalConversionAtToWorkspace2Inport1[7] =
    rtu_states_estim_Inport_3->dy;
  localB->TmpSignalConversionAtToWorkspace2Inport1[8] =
    rtu_states_estim_Inport_3->dz;
  localB->TmpSignalConversionAtToWorkspace2Inport1[9] =
    rtu_states_estim_Inport_3->p;
  localB->TmpSignalConversionAtToWorkspace2Inport1[10] = rtb_DataTypeConversion7;
  localB->TmpSignalConversionAtToWorkspace2Inport1[11] =
    rtb_DataTypeConversion11;

  /* ToWorkspace: '<S4>/To Workspace2' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace2_PWORK.LoggedData,
                          &locTime,
                          &localB->TmpSignalConversionAtToWorkspace2Inport1[0]);
  }

  /* DataTypeConversion: '<S4>/Data Type Conversion1' */
  rtb_DataTypeConversion11 = rtu_sensordata_datin_Inport_6;

  /* DataTypeConversion: '<S4>/Data Type Conversion2' */
  rtb_DataTypeConversion7 = (real32_T)rtu_sensordata_datin_Inport_6_d;

  /* SignalConversion: '<S4>/TmpSignal ConversionAtTo Workspace6Inport1' */
  localB->TmpSignalConversionAtToWorkspace6Inport1[0] =
    rtu_sensordata_datin_Inport_6_e;
  localB->TmpSignalConversionAtToWorkspace6Inport1[1] =
    rtu_sensordata_datin_Inport_6_c;
  localB->TmpSignalConversionAtToWorkspace6Inport1[2] =
    rtu_sensordata_datin_Inport_6_cg;
  localB->TmpSignalConversionAtToWorkspace6Inport1[3] =
    rtu_sensordata_datin_Inport_6_i;
  localB->TmpSignalConversionAtToWorkspace6Inport1[4] =
    rtu_sensordata_datin_Inport_6_h;
  localB->TmpSignalConversionAtToWorkspace6Inport1[5] =
    rtu_sensordata_datin_Inport_6_b;
  localB->TmpSignalConversionAtToWorkspace6Inport1[6] =
    rtu_sensordata_datin_Inport_6_dz;
  localB->TmpSignalConversionAtToWorkspace6Inport1[7] =
    rtu_sensordata_datin_Inport_6_n;
  localB->TmpSignalConversionAtToWorkspace6Inport1[8] = rtb_DataTypeConversion11;
  localB->TmpSignalConversionAtToWorkspace6Inport1[9] = rtb_DataTypeConversion7;

  /* ToWorkspace: '<S4>/To Workspace6' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace6_PWORK.LoggedData,
                          &locTime,
                          &localB->TmpSignalConversionAtToWorkspace6Inport1[0]);
  }

  /* DataTypeConversion: '<S4>/Data Type Conversion3' */
  rtb_DataTypeConversion11 =
    rtu_ReferenceValueServerBus_Inport_4->controlModePosVSOrient;

  /* DataTypeConversion: '<S4>/Data Type Conversion7' */
  rtb_DataTypeConversion7 = rtu_ReferenceValueServerBus_Inport_4->takeoff_flag;

  /* SignalConversion: '<S4>/TmpSignal ConversionAtTo Workspace3Inport1' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion9'
   *  SignalConversion: '<S4>/ReferenceValueServerBus_BusSelector'
   */
  localB->TmpSignalConversionAtToWorkspace3Inport1[0] = rtb_DataTypeConversion11;
  localB->TmpSignalConversionAtToWorkspace3Inport1[1] =
    rtu_ReferenceValueServerBus_Inport_4->pos_ref[0];
  localB->TmpSignalConversionAtToWorkspace3Inport1[2] =
    rtu_ReferenceValueServerBus_Inport_4->pos_ref[1];
  localB->TmpSignalConversionAtToWorkspace3Inport1[3] =
    rtu_ReferenceValueServerBus_Inport_4->pos_ref[2];
  localB->TmpSignalConversionAtToWorkspace3Inport1[4] = rtb_DataTypeConversion7;
  localB->TmpSignalConversionAtToWorkspace3Inport1[5] =
    rtu_ReferenceValueServerBus_Inport_4->orient_ref[0];
  localB->TmpSignalConversionAtToWorkspace3Inport1[6] =
    rtu_ReferenceValueServerBus_Inport_4->orient_ref[1];
  localB->TmpSignalConversionAtToWorkspace3Inport1[7] =
    rtu_ReferenceValueServerBus_Inport_4->orient_ref[2];
  localB->TmpSignalConversionAtToWorkspace3Inport1[8] = (real32_T)
    rtu_ReferenceValueServerBus_Inport_4->live_time_ticks;

  /* ToWorkspace: '<S4>/To Workspace3' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace3_PWORK.LoggedData,
                          &locTime,
                          &localB->TmpSignalConversionAtToWorkspace3Inport1[0]);
  }

  /* DataTypeConversion: '<S4>/Data Type Conversion11' */
  rtb_DataTypeConversion11 = rtu_Sensors_Inport_5->VisionSensors.usePosVIS_flag;

  /* SignalConversion: '<S4>/TmpSignal ConversionAtTo Workspace4Inport1' incorporates:
   *  SignalConversion: '<S4>/Sensors_BusSelector'
   */
  localB->TmpSignalConversionAtToWorkspace4Inport1[0] = rtb_DataTypeConversion11;
  localB->TmpSignalConversionAtToWorkspace4Inport1[1] =
    rtu_Sensors_Inport_5->VisionSensors.opticalFlow_data[0];
  localB->TmpSignalConversionAtToWorkspace4Inport1[2] =
    rtu_Sensors_Inport_5->VisionSensors.opticalFlow_data[1];
  localB->TmpSignalConversionAtToWorkspace4Inport1[3] =
    rtu_Sensors_Inport_5->VisionSensors.opticalFlow_data[2];
  localB->TmpSignalConversionAtToWorkspace4Inport1[4] =
    rtu_Sensors_Inport_5->VisionSensors.posVIS_data[0];
  localB->TmpSignalConversionAtToWorkspace4Inport1[5] =
    rtu_Sensors_Inport_5->VisionSensors.posVIS_data[1];
  localB->TmpSignalConversionAtToWorkspace4Inport1[6] =
    rtu_Sensors_Inport_5->VisionSensors.posVIS_data[2];
  localB->TmpSignalConversionAtToWorkspace4Inport1[7] =
    rtu_Sensors_Inport_5->VisionSensors.posVIS_data[3];

  /* ToWorkspace: '<S4>/To Workspace4' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace4_PWORK.LoggedData,
                          &locTime,
                          &localB->TmpSignalConversionAtToWorkspace4Inport1[0]);
  }

  /* SignalConversion: '<S4>/Sensors_BusSelector' */
  for (i = 0; i < 8; i++) {
    rtb_SigConversion_InsertedFor_Sensors_BusSelector_BusSelector_i[i] =
      rtu_Sensors_Inport_5->SensorCalibration[i];
  }

  /* ToWorkspace: '<S4>/To Workspace5' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace5_PWORK.LoggedData,
                          &locTime,
                          &rtb_SigConversion_InsertedFor_Sensors_BusSelector_BusSelector_i
                          [0]);
  }

  /* ToWorkspace: '<S4>/To Workspace' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace_PWORK.LoggedData,
                          &locTime, &rtu_motorCmds[0]);
  }

  /* ToWorkspace: '<S4>/To Workspace1' */
  {
    double locTime = flightControlSystem_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)localDW->ToWorkspace1_PWORK.LoggedData,
                          &locTime, &rtu_posRef[0]);
  }
}

/* System initialize for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem_Init
  (DW_FlightControlSystem_flightControlSystem_T *localDW,
   P_FlightControlSystem_flightControlSystem_T *localP)
{
  /* InitializeConditions for Memory: '<S5>/Memory' */
  localDW->Memory_PreviousInput = localP->Memory_InitialCondition;

  /* SystemInitialize for ModelReference: '<S1>/estimator' */
  stateEstimator_Init();

  /* SystemInitialize for ModelReference: '<S1>/controller' */
  flightController_Init();

  /* SystemInitialize for Merge: '<S3>/Merge' */
  flag_outport = localP->Merge_InitialOutput;
}

/* Start for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem_Start
  (RT_MODEL_flightControlSystem_T * const flightControlSystem_M,
   DW_FlightControlSystem_flightControlSystem_T *localDW)
{
  /* Start for ModelReference: '<S1>/estimator' */
  stateEstimator_Start();

  /* Start for Atomic SubSystem: '<S1>/Logging' */
  flightControlSystem_Logging_Start(flightControlSystem_M, &localDW->Logging);

  /* End of Start for SubSystem: '<S1>/Logging' */
}

/* Output and update for atomic system: '<Root>/Flight Control System' */
void flightControlSystem_FlightControlSystem(RT_MODEL_flightControlSystem_T *
  const flightControlSystem_M, const CommandBus *rtu_ReferenceValueServerCmds,
  const SensorsBus *rtu_Sensors, real_T rtu_VisionbasedData,
  B_FlightControlSystem_flightControlSystem_T *localB,
  DW_FlightControlSystem_flightControlSystem_T *localDW,
  P_FlightControlSystem_flightControlSystem_T *localP)
{
  /* Switch: '<S5>/Switch' incorporates:
   *  BusCreator: '<S5>/Bus Creator'
   *  Constant: '<S16>/Constant'
   *  Constant: '<S5>/Constant'
   *  Constant: '<S5>/Constant1'
   *  Constant: '<S5>/Constant2'
   *  Constant: '<S5>/Constant3'
   *  Logic: '<S5>/Logical Operator'
   *  Memory: '<S5>/Memory'
   *  RelationalOperator: '<S16>/Compare'
   *  SignalConversion: '<S5>/TmpSignal ConversionAtBus CreatorInport2'
   */
  if ((rtu_VisionbasedData == localP->CompareToConstant_const) &&
      rtP_enableLanding) {
    localB->Switch_o.controlModePosVSOrient = localP->Constant1_Value;
    localB->Switch_o.pos_ref[0] = localDW->Memory_PreviousInput.X;
    localB->Switch_o.pos_ref[1] = localDW->Memory_PreviousInput.Y;
    localB->Switch_o.pos_ref[2] = rtP_landingAltitude;
    localB->Switch_o.takeoff_flag = rtu_ReferenceValueServerCmds->takeoff_flag;
    localB->Switch_o.orient_ref[0] = localP->Constant3_Value[0];
    localB->Switch_o.orient_ref[1] = localP->Constant3_Value[1];
    localB->Switch_o.orient_ref[2] = localP->Constant3_Value[2];
    localB->Switch_o.live_time_ticks =
      rtu_ReferenceValueServerCmds->live_time_ticks;
  } else {
    localB->Switch_o = *rtu_ReferenceValueServerCmds;
  }

  /* End of Switch: '<S5>/Switch' */

  /* SignalConversion: '<S6>/SigConversion_InsertedFor_Bus Selector3_at_outport_0' */
  localB->x = rtu_Sensors->HALSensors.HAL_acc_SI.x;

  /* SignalConversion: '<S6>/SigConversion_InsertedFor_Bus Selector3_at_outport_1' */
  localB->y = rtu_Sensors->HALSensors.HAL_acc_SI.y;

  /* SignalConversion: '<S6>/SigConversion_InsertedFor_Bus Selector3_at_outport_2' */
  localB->z = rtu_Sensors->HALSensors.HAL_acc_SI.z;

  /* SignalConversion: '<S6>/SigConversion_InsertedFor_Bus Selector4_at_outport_0' */
  localB->x_c = rtu_Sensors->HALSensors.HAL_gyro_SI.x;

  /* SignalConversion: '<S6>/SigConversion_InsertedFor_Bus Selector4_at_outport_1' */
  localB->y_n = rtu_Sensors->HALSensors.HAL_gyro_SI.y;

  /* SignalConversion: '<S6>/SigConversion_InsertedFor_Bus Selector4_at_outport_2' */
  localB->z_p = rtu_Sensors->HALSensors.HAL_gyro_SI.z;

  /* SignalConversion: '<S6>/SigConversion_InsertedFor_Bus Selector5_at_outport_0' */
  localB->altitude = rtu_Sensors->HALSensors.HAL_ultrasound_SI.altitude;

  /* SignalConversion: '<S6>/SigConversion_InsertedFor_Bus Selector6_at_outport_0' */
  localB->pressure = rtu_Sensors->HALSensors.HAL_pressure_SI.pressure;

  /* SignalConversion: '<S6>/SigConversion_InsertedFor_Bus Selector1_at_outport_0' */
  localB->vbat_V = rtu_Sensors->HALSensors.HAL_vbat_SI.vbat_V;

  /* SignalConversion: '<S6>/SigConversion_InsertedFor_Bus Selector1_at_outport_1' */
  localB->vbat_percentage = rtu_Sensors->HALSensors.HAL_vbat_SI.vbat_percentage;

  /* BusCreator: '<S1>/BusConversion_InsertedFor_estimator_at_inport_1' */
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.ddx =
    localB->x;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.ddy =
    localB->y;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.ddz =
    localB->z;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.p =
    localB->x_c;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.q =
    localB->y_n;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.r =
    localB->z_p;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.altitude_sonar
    = localB->altitude;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.prs =
    localB->pressure;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.vbat_V =
    localB->vbat_V;
  localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1.vbat_percentage
    = localB->vbat_percentage;

  /* ModelReference: '<S1>/estimator' */
  stateEstimator(&localB->Switch_o.controlModePosVSOrient,
                 &localB->BusConversion_InsertedFor_estimator_at_inport_1_BusCreator1,
                 &rtu_Sensors->VisionSensors.usePosVIS_flag,
                 &rtu_Sensors->VisionSensors.opticalFlow_data[0],
                 &rtu_Sensors->VisionSensors.posVIS_data[0],
                 &rtu_Sensors->SensorCalibration[0], &localB->estimator);

  /* ModelReference: '<S1>/controller' */
  flightController(&localB->Switch_o, &localB->estimator, &motors_outport[0],
                   &localB->controller_o2[0]);

  /* Outputs for Atomic SubSystem: '<S1>/Logging' */
  flightControlSystem_Logging(flightControlSystem_M, motors_outport,
    localB->controller_o2, &localB->estimator, rtu_ReferenceValueServerCmds,
    rtu_Sensors, localB->vbat_V, localB->vbat_percentage, localB->x, localB->y,
    localB->z, localB->x_c, localB->y_n, localB->z_p, localB->altitude,
    localB->pressure, &localB->Logging, &localDW->Logging);

  /* End of Outputs for SubSystem: '<S1>/Logging' */

  /* If: '<S3>/If' incorporates:
   *  Abs: '<S3>/Abs'
   *  Abs: '<S3>/Abs1'
   *  Abs: '<S3>/Abs2'
   *  Abs: '<S3>/Abs3'
   *  Abs: '<S3>/Abs4'
   *  Abs: '<S3>/Abs5'
   *  Constant: '<S10>/Constant'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S12>/Constant'
   *  Constant: '<S7>/Constant'
   *  Constant: '<S8>/Constant'
   *  Constant: '<S9>/Constant'
   *  Gain: '<S3>/Gain'
   *  Gain: '<S3>/Gain1'
   *  Logic: '<S3>/Logical Operator'
   *  Logic: '<S3>/Logical Operator1'
   *  Logic: '<S3>/Logical Operator2'
   *  Logic: '<S3>/Logical Operator3'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S11>/Compare'
   *  RelationalOperator: '<S12>/Compare'
   *  RelationalOperator: '<S7>/Compare'
   *  RelationalOperator: '<S8>/Compare'
   *  RelationalOperator: '<S9>/Compare'
   *  Sum: '<S3>/Subtract'
   *  Sum: '<S3>/Subtract1'
   */
  if (((real32_T)fabs(localB->estimator.X) > localP->CompareToConstant_const_o) ||
      ((real32_T)fabs(localB->estimator.Y) > localP->CompareToConstant1_const))
  {
    /* Outputs for IfAction SubSystem: '<S3>/Geofencing error' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    flightControlSystem_Geofencingerror(&flag_outport, &localP->Geofencingerror);

    /* End of Outputs for SubSystem: '<S3>/Geofencing error' */
  } else if (((((real32_T)fabs(rtu_Sensors->VisionSensors.opticalFlow_data[0]) >
                localP->CompareToConstant4_const) && ((real32_T)fabs
                (localP->Gain_Gain * rtu_Sensors->
                 VisionSensors.opticalFlow_data[0] - localB->estimator.dx) >
                localP->CompareToConstant2_const)) || (((real32_T)fabs
                (localP->Gain1_Gain *
                 rtu_Sensors->VisionSensors.opticalFlow_data[1] -
                 localB->estimator.dy) > localP->CompareToConstant3_const) &&
               ((real32_T)fabs(rtu_Sensors->VisionSensors.opticalFlow_data[1]) >
                localP->CompareToConstant5_const))) > 0) {
    /* Outputs for IfAction SubSystem: '<S3>/estimator//Optical flow error' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    flightControlSystem_Geofencingerror(&flag_outport,
      &localP->estimatorOpticalflowerror);

    /* End of Outputs for SubSystem: '<S3>/estimator//Optical flow error' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/Normal condition' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    flightControlSystem_Geofencingerror(&flag_outport, &localP->Normalcondition);

    /* End of Outputs for SubSystem: '<S3>/Normal condition' */
  }

  /* End of If: '<S3>/If' */

  /* Update for Memory: '<S5>/Memory' */
  localDW->Memory_PreviousInput = localB->estimator;
}

/* Model step function for TID0 */
void flightControlSystem_step0(void)   /* Sample time: [0.005s, 0.0s] */
{
  {                                    /* Sample time: [0.005s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* RateTransition: '<Root>/Rate Transition' */
  flightControlSystem_B.RateTransition =
    flightControlSystem_DW.RateTransition_Buffer[flightControlSystem_DW.RateTransition_ActiveBufIdx];

  /* Outputs for Atomic SubSystem: '<Root>/Flight Control System' */

  /* Inport: '<Root>/AC cmd' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  flightControlSystem_FlightControlSystem(flightControlSystem_M, &cmd_inport,
    &sensor_inport, flightControlSystem_B.RateTransition,
    &flightControlSystem_B.FlightControlSystem,
    &flightControlSystem_DW.FlightControlSystem,
    &flightControlSystem_P.FlightControlSystem);

  /* End of Outputs for SubSystem: '<Root>/Flight Control System' */

  /* Outport: '<Root>/Actuators' */
  flightControlSystem_Y.Actuators[0] = motors_outport[0];
  flightControlSystem_Y.Actuators[1] = motors_outport[1];
  flightControlSystem_Y.Actuators[2] = motors_outport[2];
  flightControlSystem_Y.Actuators[3] = motors_outport[3];

  /* Outport: '<Root>/Flag' */
  flightControlSystem_Y.Flag = flag_outport;

  /* Matfile logging */
  rt_UpdateTXYLogVars(flightControlSystem_M->rtwLogInfo,
                      (&flightControlSystem_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(flightControlSystem_M)!=-1) &&
        !((rtmGetTFinal(flightControlSystem_M)-
           flightControlSystem_M->Timing.taskTime0) >
          flightControlSystem_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(flightControlSystem_M, "Simulation finished");
    }
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++flightControlSystem_M->Timing.clockTick0)) {
    ++flightControlSystem_M->Timing.clockTickH0;
  }

  flightControlSystem_M->Timing.taskTime0 =
    flightControlSystem_M->Timing.clockTick0 *
    flightControlSystem_M->Timing.stepSize0 +
    flightControlSystem_M->Timing.clockTickH0 *
    flightControlSystem_M->Timing.stepSize0 * 4294967296.0;
}

/* Model step function for TID1 */
void flightControlSystem_step1(void)   /* Sample time: [0.2s, 0.0s] */
{
  int32_T ns;
  int32_T ms;
  int32_T numLoops;
  int32_T p;
  boolean_T maxNumBlobsReached;
  uint8_T currentLabel;
  uint32_T walkerIdx;
  uint32_T pixIdx;
  uint32_T centerIdx;
  uint32_T padIdx;
  int32_T idx;
  int32_T n;
  int32_T m;
  real32_T centroid_idx_1;
  real32_T centroid_idx_0;

  /* Outputs for Atomic SubSystem: '<Root>/Image Processing System' */
  /* ModelReference: '<S2>/Y1UY2V to YUV' incorporates:
   *  Inport: '<Root>/Image Data'
   */
  conversionYUV(&imRGB[0], &flightControlSystem_B.Y1UY2VtoYUV_o1[0],
                &flightControlSystem_B.Y1UY2VtoYUV_o2[0],
                &flightControlSystem_B.Y1UY2VtoYUV_o3[0],
                &(flightControlSystem_DW.Y1UY2VtoYUV_InstanceData.rtb));

  /* S-Function (svipcolorconv): '<S2>/Color Space  Conversion' */
  /* Precompute constants */
  pixIdx = ((uint16_T)26149U) * 128U;
  padIdx = (((uint16_T)6419U) * 128U + ((uint16_T)13320U) * 128U) + 8192U;
  centerIdx = ((uint16_T)33050U) * 128U;
  for (flightControlSystem_B.k = 0; flightControlSystem_B.k < 19200;
       flightControlSystem_B.k++) {
    /* Convert YcbCr to RGB; apply coefficients and offsets */
    /* derived from the ITU BT.601-5 recommendation; all of the */
    /* coefficients and offsets are scaled (by 2^14) such that */
    /* the conversion can be done using integer arithmetic; this */
    /* routine relies on the user supplying the data in proper */
    /* ranges: Y [16..235], Cb & Cr [16..240] */
    /* Note that all of the operations are grouped in such a way */
    /* that the arithmetic can be done using unsigned integers */
    /* Given that Y is in the proper range, yDiff should */
    /* always be positive */
    flightControlSystem_B.yDiff =
      flightControlSystem_B.Y1UY2VtoYUV_o1[flightControlSystem_B.k] - 16U;

    /* Red; 8192 in this equations is 0.5*2^14 or 2^13; adding 0.5  */
    /* before truncation will result in rounding */
    flightControlSystem_B.pos = (flightControlSystem_B.yDiff * ((uint16_T)19077U)
      + (uint32_T)flightControlSystem_B.Y1UY2VtoYUV_o3[flightControlSystem_B.k] *
      ((uint16_T)26149U)) + 8192U;
    if (flightControlSystem_B.pos > pixIdx) {
      flightControlSystem_B.pos -= pixIdx;
    } else {
      flightControlSystem_B.pos = 0U;
    }

    walkerIdx = flightControlSystem_B.pos >> 14;

    /* limit to avoid wrapping */
    if (walkerIdx > 255U) {
      walkerIdx = 255U;
    }

    /* Compute green channel */
    flightControlSystem_B.pos = flightControlSystem_B.yDiff * ((uint16_T)19077U)
      + padIdx;
    flightControlSystem_B.neg = (uint32_T)
      flightControlSystem_B.Y1UY2VtoYUV_o2[flightControlSystem_B.k] * ((uint16_T)
      6419U) + (uint32_T)
      flightControlSystem_B.Y1UY2VtoYUV_o3[flightControlSystem_B.k] * ((uint16_T)
      13320U);

    /* scale back */
    if (flightControlSystem_B.pos > flightControlSystem_B.neg) {
      flightControlSystem_B.pos -= flightControlSystem_B.neg;
    } else {
      flightControlSystem_B.pos = 0U;
    }

    flightControlSystem_B.neg = flightControlSystem_B.pos >> 14;
    if (flightControlSystem_B.neg > 255U) {
      flightControlSystem_B.neg = 255U;
    }

    /* Compute blue channel */
    flightControlSystem_B.pos = (flightControlSystem_B.yDiff * ((uint16_T)19077U)
      + (uint32_T)flightControlSystem_B.Y1UY2VtoYUV_o2[flightControlSystem_B.k] *
      ((uint16_T)33050U)) + 8192U;

    /* scale back */
    if (flightControlSystem_B.pos > centerIdx) {
      flightControlSystem_B.pos -= centerIdx;
    } else {
      flightControlSystem_B.pos = 0U;
    }

    flightControlSystem_B.yDiff = flightControlSystem_B.pos >> 14;
    if (flightControlSystem_B.yDiff > 255U) {
      flightControlSystem_B.yDiff = 255U;
    }

    /* assign back the results */
    flightControlSystem_B.ColorSpaceConversion_o1[flightControlSystem_B.k] =
      (uint8_T)walkerIdx;
    flightControlSystem_B.ColorSpaceConversion_o2[flightControlSystem_B.k] =
      (uint8_T)flightControlSystem_B.neg;
    flightControlSystem_B.ColorSpaceConversion_o3[flightControlSystem_B.k] =
      (uint8_T)flightControlSystem_B.yDiff;
  }

  /* End of S-Function (svipcolorconv): '<S2>/Color Space  Conversion' */

  /* RelationalOperator: '<S2>/Relational Operator1' incorporates:
   *  Constant: '<S2>/Constant'
   *  Sum: '<S2>/Sum'
   */
  for (flightControlSystem_B.k = 0; flightControlSystem_B.k < 19200;
       flightControlSystem_B.k++) {
    /* Sum: '<S2>/Sum' */
    n = (flightControlSystem_B.ColorSpaceConversion_o1[flightControlSystem_B.k]
         - flightControlSystem_B.ColorSpaceConversion_o2[flightControlSystem_B.k])
      - flightControlSystem_B.ColorSpaceConversion_o3[flightControlSystem_B.k];
    if (n < 0) {
      n = 0;
    }

    flightControlSystem_B.RelationalOperator1[flightControlSystem_B.k] = (n >
      flightControlSystem_P.Constant_Value);
  }

  /* End of RelationalOperator: '<S2>/Relational Operator1' */

  /* S-Function (svipblob): '<S2>/Blob Analysis' */
  maxNumBlobsReached = false;
  memset(&flightControlSystem_DW.BlobAnalysis_PAD_DW[0], 0, 123U * sizeof
         (uint8_T));
  currentLabel = 1U;
  flightControlSystem_B.k = 0;
  idx = 123;
  for (n = 0; n < 160; n++) {
    for (m = 0; m < 120; m++) {
      flightControlSystem_DW.BlobAnalysis_PAD_DW[idx] = (uint8_T)
        (flightControlSystem_B.RelationalOperator1[flightControlSystem_B.k] ?
         255 : 0);
      flightControlSystem_B.k++;
      idx++;
    }

    flightControlSystem_DW.BlobAnalysis_PAD_DW[idx] = 0U;
    flightControlSystem_DW.BlobAnalysis_PAD_DW[idx + 1] = 0U;
    idx += 2;
  }

  memset(&flightControlSystem_DW.BlobAnalysis_PAD_DW[idx], 0, 121U * sizeof
         (uint8_T));
  idx = 0;
  pixIdx = 0U;
  n = 0;
  while (n < 160) {
    flightControlSystem_B.j = 0;
    ns = (idx + 1) * 122;
    m = 0;
    while (m < 120) {
      padIdx = (uint32_T)((ns + flightControlSystem_B.j) + 1);
      if (flightControlSystem_DW.BlobAnalysis_PAD_DW[padIdx] == 255) {
        flightControlSystem_DW.BlobAnalysis_PAD_DW[padIdx] = currentLabel;
        flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[pixIdx] = (int16_T)idx;
        flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[pixIdx] = (int16_T)
          flightControlSystem_B.j;
        pixIdx++;
        ms = currentLabel - 1;
        flightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[ms] = 1U;
        flightControlSystem_DW.BlobAnalysis_STACK_DW[0U] = padIdx;
        padIdx = 1U;
        while (padIdx != 0U) {
          padIdx--;
          centerIdx = flightControlSystem_DW.BlobAnalysis_STACK_DW[padIdx];
          for (flightControlSystem_B.k = 0; flightControlSystem_B.k < 8;
               flightControlSystem_B.k++) {
            walkerIdx = centerIdx +
              rtCP_BlobAnalysis_WALKER_RTP[flightControlSystem_B.k];
            if (flightControlSystem_DW.BlobAnalysis_PAD_DW[walkerIdx] == 255) {
              flightControlSystem_DW.BlobAnalysis_PAD_DW[walkerIdx] =
                currentLabel;
              flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[pixIdx] =
                (int16_T)((int16_T)(walkerIdx / 122U) - 1);
              flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[pixIdx] =
                (int16_T)(walkerIdx % 122U - 1U);
              pixIdx++;
              flightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[ms]++;
              flightControlSystem_DW.BlobAnalysis_STACK_DW[padIdx] = walkerIdx;
              padIdx++;
            }
          }
        }

        if (currentLabel == 50) {
          maxNumBlobsReached = true;
          n = 160;
          m = 120;
        }

        if (m < 120) {
          currentLabel++;
        }
      }

      flightControlSystem_B.j++;
      m++;
    }

    idx++;
    n++;
  }

  n = maxNumBlobsReached ? (int32_T)currentLabel : (int32_T)(uint8_T)
    (currentLabel - 1U);
  m = 0;
  idx = 0;
  flightControlSystem_B.k = 0;
  while (flightControlSystem_B.k < n) {
    flightControlSystem_B.BlobAnalysis_o1[flightControlSystem_B.k] = (int32_T)
      flightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[flightControlSystem_B.k];
    ns = 0;
    ms = 0;
    if (flightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[flightControlSystem_B.k] <=
        260000U) {
      flightControlSystem_B.j = 0;
      while (flightControlSystem_B.j < (int32_T)
             flightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[flightControlSystem_B.k])
      {
        ns +=
          flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[flightControlSystem_B.j
          + idx];
        ms +=
          flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[flightControlSystem_B.j
          + m];
        flightControlSystem_B.j++;
      }

      centroid_idx_0 = (real32_T)ms / (real32_T)
        flightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[flightControlSystem_B.k];
      centroid_idx_1 = (real32_T)ns / (real32_T)
        flightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[flightControlSystem_B.k];
    } else {
      numLoops = (int32_T)((real32_T)
                           flightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[flightControlSystem_B.k]
                           / 260000.0F);
      centroid_idx_0 = 0.0F;
      centroid_idx_1 = 0.0F;
      for (p = 0; p < numLoops; p++) {
        ns = 0;
        ms = 0;
        for (flightControlSystem_B.j = 0; flightControlSystem_B.j < 260000;
             flightControlSystem_B.j++) {
          ns += flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[(idx +
            flightControlSystem_B.j) + p * 260000];
          ms += flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[(m +
            flightControlSystem_B.j) + p * 260000];
        }

        centroid_idx_0 += (real32_T)ms / (real32_T)
          flightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[flightControlSystem_B.k];
        centroid_idx_1 += (real32_T)ns / (real32_T)
          flightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[flightControlSystem_B.k];
      }

      ns = 0;
      ms = 0;
      numLoops *= 260000;
      p = (int32_T)
        (flightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[flightControlSystem_B.k]
         - numLoops);
      flightControlSystem_B.j = 0;
      while (flightControlSystem_B.j < p) {
        ns += flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW
          [(flightControlSystem_B.j + idx) + numLoops];
        ms += flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW
          [(flightControlSystem_B.j + m) + numLoops];
        flightControlSystem_B.j++;
      }

      centroid_idx_0 += (real32_T)ms / (real32_T)
        flightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[flightControlSystem_B.k];
      centroid_idx_1 += (real32_T)ns / (real32_T)
        flightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[flightControlSystem_B.k];
    }

    flightControlSystem_B.BlobAnalysis_o2[flightControlSystem_B.k] =
      centroid_idx_1 + 1.0F;
    pixIdx = 50U + flightControlSystem_B.k;
    flightControlSystem_B.BlobAnalysis_o2[pixIdx] = centroid_idx_0 + 1.0F;
    ns = 160;
    ms = 120;
    numLoops = 0;
    p = 0;
    flightControlSystem_B.j = 0;
    while (flightControlSystem_B.j < (int32_T)
           flightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[flightControlSystem_B.k])
    {
      flightControlSystem_B.j_pixListNinc = flightControlSystem_B.j + idx;
      if (flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[flightControlSystem_B.j_pixListNinc]
          < ns) {
        ns =
          flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[flightControlSystem_B.j_pixListNinc];
      }

      if (flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[flightControlSystem_B.j_pixListNinc]
          > numLoops) {
        numLoops =
          flightControlSystem_DW.BlobAnalysis_N_PIXLIST_DW[flightControlSystem_B.j_pixListNinc];
      }

      flightControlSystem_B.j_pixListNinc = flightControlSystem_B.j + m;
      if (flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[flightControlSystem_B.j_pixListNinc]
          < ms) {
        ms =
          flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[flightControlSystem_B.j_pixListNinc];
      }

      if (flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[flightControlSystem_B.j_pixListNinc]
          > p) {
        p =
          flightControlSystem_DW.BlobAnalysis_M_PIXLIST_DW[flightControlSystem_B.j_pixListNinc];
      }

      flightControlSystem_B.j++;
    }

    flightControlSystem_B.BlobAnalysis_o3[flightControlSystem_B.k] = ns + 1;
    flightControlSystem_B.BlobAnalysis_o3[pixIdx] = ms + 1;
    flightControlSystem_B.BlobAnalysis_o3[100 + flightControlSystem_B.k] =
      (numLoops - ns) + 1;
    flightControlSystem_B.BlobAnalysis_o3[150 + flightControlSystem_B.k] = (p -
      ms) + 1;
    m += (int32_T)
      flightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[flightControlSystem_B.k];
    idx += (int32_T)
      flightControlSystem_DW.BlobAnalysis_NUM_PIX_DW[flightControlSystem_B.k];
    flightControlSystem_B.k++;
  }

  flightControlSystem_B.k = n;
  while (flightControlSystem_B.k < 50) {
    flightControlSystem_B.BlobAnalysis_o1[flightControlSystem_B.k] = (-1);
    flightControlSystem_B.k++;
  }

  flightControlSystem_B.k = n;
  while (flightControlSystem_B.k < 50) {
    flightControlSystem_B.BlobAnalysis_o2[flightControlSystem_B.k] = (-1.0F);
    flightControlSystem_B.k++;
  }

  flightControlSystem_B.k = 50 + n;
  while (flightControlSystem_B.k < 100) {
    flightControlSystem_B.BlobAnalysis_o2[flightControlSystem_B.k] = (-1.0F);
    flightControlSystem_B.k++;
  }

  flightControlSystem_B.k = n;
  while (flightControlSystem_B.k < 50) {
    flightControlSystem_B.BlobAnalysis_o3[flightControlSystem_B.k] = (-1);
    flightControlSystem_B.k++;
  }

  flightControlSystem_B.k = 50 + n;
  while (flightControlSystem_B.k < 100) {
    flightControlSystem_B.BlobAnalysis_o3[flightControlSystem_B.k] = (-1);
    flightControlSystem_B.k++;
  }

  flightControlSystem_B.k = 100 + n;
  while (flightControlSystem_B.k < 150) {
    flightControlSystem_B.BlobAnalysis_o3[flightControlSystem_B.k] = (-1);
    flightControlSystem_B.k++;
  }

  flightControlSystem_B.k = 150 + n;
  while (flightControlSystem_B.k < 200) {
    flightControlSystem_B.BlobAnalysis_o3[flightControlSystem_B.k] = (-1);
    flightControlSystem_B.k++;
  }

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/One'
   *  Constant: '<S2>/One1'
   *  Constant: '<S2>/One2'
   *  RelationalOperator: '<S2>/Relational Operator'
   *  S-Function (svipblob): '<S2>/Blob Analysis'
   */
  if (n >= flightControlSystem_P.One_Value) {
    flightControlSystem_B.Switch = flightControlSystem_P.One1_Value;
  } else {
    flightControlSystem_B.Switch = flightControlSystem_P.One2_Value;
  }

  /* End of Switch: '<S2>/Switch' */
  /* End of Outputs for SubSystem: '<Root>/Image Processing System' */

  /* Update for RateTransition: '<Root>/Rate Transition' */
  flightControlSystem_DW.RateTransition_Buffer[flightControlSystem_DW.RateTransition_ActiveBufIdx
    == 0] = flightControlSystem_B.Switch;
  flightControlSystem_DW.RateTransition_ActiveBufIdx = (int8_T)
    (flightControlSystem_DW.RateTransition_ActiveBufIdx == 0);
}

/* Model initialize function */
void flightControlSystem_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)flightControlSystem_M, 0,
                sizeof(RT_MODEL_flightControlSystem_T));
  rtmSetTFinal(flightControlSystem_M, 30.0);
  flightControlSystem_M->Timing.stepSize0 = 0.005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    flightControlSystem_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(flightControlSystem_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(flightControlSystem_M->rtwLogInfo, (NULL));
    rtliSetLogT(flightControlSystem_M->rtwLogInfo, "tout");
    rtliSetLogX(flightControlSystem_M->rtwLogInfo, "");
    rtliSetLogXFinal(flightControlSystem_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(flightControlSystem_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(flightControlSystem_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(flightControlSystem_M->rtwLogInfo, 1000);
    rtliSetLogDecimation(flightControlSystem_M->rtwLogInfo, 1);

    /*
     * Set pointers to the data and signal info for each output
     */
    {
      static void * rt_LoggedOutputSignalPtrs[] = {
        &flightControlSystem_Y.Actuators[0],
        &flightControlSystem_Y.Flag
      };

      rtliSetLogYSignalPtrs(flightControlSystem_M->rtwLogInfo,
                            ((LogSignalPtrsType)rt_LoggedOutputSignalPtrs));
    }

    {
      static int_T rt_LoggedOutputWidths[] = {
        4,
        1
      };

      static int_T rt_LoggedOutputNumDimensions[] = {
        1,
        1
      };

      static int_T rt_LoggedOutputDimensions[] = {
        4,
        1
      };

      static boolean_T rt_LoggedOutputIsVarDims[] = {
        0,
        0
      };

      static void* rt_LoggedCurrentSignalDimensions[] = {
        (NULL),
        (NULL)
      };

      static int_T rt_LoggedCurrentSignalDimensionsSize[] = {
        4,
        4
      };

      static BuiltInDTypeId rt_LoggedOutputDataTypeIds[] = {
        SS_SINGLE,
        SS_UINT8
      };

      static int_T rt_LoggedOutputComplexSignals[] = {
        0,
        0
      };

      static RTWPreprocessingFcnPtr rt_LoggingPreprocessingFcnPtrs[] = {
        (NULL),
        (NULL)
      };

      static const char_T *rt_LoggedOutputLabels[] = {
        "motors",
        "flag" };

      static const char_T *rt_LoggedOutputBlockNames[] = {
        "flightControlSystem/Actuators",
        "flightControlSystem/Flag" };

      static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert[] = {
        { 0, SS_SINGLE, SS_SINGLE, 0, 0, 0, 1.0, 0, 0.0 },

        { 0, SS_UINT8, SS_UINT8, 0, 0, 0, 1.0, 0, 0.0 }
      };

      static RTWLogSignalInfo rt_LoggedOutputSignalInfo[] = {
        {
          2,
          rt_LoggedOutputWidths,
          rt_LoggedOutputNumDimensions,
          rt_LoggedOutputDimensions,
          rt_LoggedOutputIsVarDims,
          rt_LoggedCurrentSignalDimensions,
          rt_LoggedCurrentSignalDimensionsSize,
          rt_LoggedOutputDataTypeIds,
          rt_LoggedOutputComplexSignals,
          (NULL),
          rt_LoggingPreprocessingFcnPtrs,

          { rt_LoggedOutputLabels },
          (NULL),
          (NULL),
          (NULL),

          { rt_LoggedOutputBlockNames },

          { (NULL) },
          (NULL),
          rt_RTWLogDataTypeConvert
        }
      };

      rtliSetLogYSignalInfo(flightControlSystem_M->rtwLogInfo,
                            rt_LoggedOutputSignalInfo);

      /* set currSigDims field */
      rt_LoggedCurrentSignalDimensions[0] = &rt_LoggedOutputWidths[0];
      rt_LoggedCurrentSignalDimensions[1] = &rt_LoggedOutputWidths[1];
    }

    rtliSetLogY(flightControlSystem_M->rtwLogInfo, "yout");
  }

  /* block I/O */
  (void) memset(((void *) &flightControlSystem_B), 0,
                sizeof(B_flightControlSystem_T));

  /* exported global signals */
  motors_outport[0] = 0.0F;
  motors_outport[1] = 0.0F;
  motors_outport[2] = 0.0F;
  motors_outport[3] = 0.0F;
  flag_outport = 0U;

  /* states (dwork) */
  (void) memset((void *)&flightControlSystem_DW, 0,
                sizeof(DW_flightControlSystem_T));

  /* external inputs */
  (void)memset(&sensor_inport, 0, sizeof(SensorsBus));
  (void)memset(&cmd_inport, 0, sizeof(CommandBus));

  /* external outputs */
  (void) memset((void *)&flightControlSystem_Y, 0,
                sizeof(ExtY_flightControlSystem_T));

  /* Model Initialize function for ModelReference Block: '<S1>/controller' */
  flightController_initialize(rtmGetErrorStatusPointer(flightControlSystem_M));

  /* Model Initialize function for ModelReference Block: '<S1>/estimator' */
  stateEstimator_initialize(rtmGetErrorStatusPointer(flightControlSystem_M));

  /* Model Initialize function for ModelReference Block: '<S2>/Y1UY2V to YUV' */
  conversionYUV_initialize(rtmGetErrorStatusPointer(flightControlSystem_M),
    &(flightControlSystem_DW.Y1UY2VtoYUV_InstanceData.rtm));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(flightControlSystem_M->rtwLogInfo, 0.0,
    rtmGetTFinal(flightControlSystem_M), flightControlSystem_M->Timing.stepSize0,
    (&rtmGetErrorStatus(flightControlSystem_M)));

  /* Start for Atomic SubSystem: '<Root>/Flight Control System' */

  /* Start for Inport: '<Root>/Sensors' */
  flightControlSystem_FlightControlSystem_Start(flightControlSystem_M,
    &flightControlSystem_DW.FlightControlSystem);

  /* End of Start for SubSystem: '<Root>/Flight Control System' */

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  flightControlSystem_DW.RateTransition_Buffer[0] =
    flightControlSystem_P.RateTransition_InitialCondition;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Flight Control System' */

  /* SystemInitialize for Inport: '<Root>/Sensors' */
  flightControlSystem_FlightControlSystem_Init
    (&flightControlSystem_DW.FlightControlSystem,
     &flightControlSystem_P.FlightControlSystem);

  /* End of SystemInitialize for SubSystem: '<Root>/Flight Control System' */
}

/* Model terminate function */
void flightControlSystem_terminate(void)
{
  /* (no terminate code required) */
}
