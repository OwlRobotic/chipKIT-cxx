/* Test the `vqdmull_ns32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vqdmull_ns32 (void)
{
  int64x2_t out_int64x2_t;
  int32x2_t arg0_int32x2_t;
  int32_t arg1_int32_t;

  out_int64x2_t = vqdmull_n_s32 (arg0_int32x2_t, arg1_int32_t);
}

/* { dg-final { scan-assembler "vqdmull\.s32\[ 	\]+\[qQ\]\[0-9\]+, \[dD\]\[0-9\]+, \[dD\]\[0-9\]+\\\[\[0-9\]+\\\]!?\(\[ 	\]+@.*\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */