/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_hilbertToC_api.h
 *
 * Code generation for function 'hilbertToC'
 *
 */

#ifndef _CODER_HILBERTTOC_API_H
#define _CODER_HILBERTTOC_API_H

/* Include files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void hilbertToC(real_T x[3600], creal_T y[3600]);

void hilbertToC_api(const mxArray *prhs, const mxArray **plhs);

void hilbertToC_atexit(void);

void hilbertToC_initialize(void);

void hilbertToC_terminate(void);

void hilbertToC_xil_shutdown(void);

void hilbertToC_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (_coder_hilbertToC_api.h) */
