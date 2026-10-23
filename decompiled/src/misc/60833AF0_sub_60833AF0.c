/* sub_60833AF0
 * address: 0x60833AF0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60833AF0(float a1, float a2, float *a3, float *a4, float *a5, float *a6, int a7, int a8)
{
  float v8; // s0
  float v9; // s4
  float v10; // s2
  float result; // s0
  float v12; // s4
  float v13; // s6
  float v14; // s8
  float v15; // s4

  v8 = (float)a7 / (float)a8;
  v9 = v8 * (float)(1.0 - v8);
  v10 = (float)(1.0 - v8) * (float)(1.0 - v8);
  result = v8 * v8;
  v12 = v9 + v9;
  v13 = (float)((float)(v12 * *a5) + (float)(v10 * *a4)) + (float)(result * *a6);
  v14 = (float)((float)(v12 * a5[1]) + (float)(v10 * a4[1])) + (float)(result * a6[1]);
  v15 = (float)((float)(v12 * a5[2]) + (float)(v10 * a4[2])) + (float)(result * a6[2]);
  *a3 = v13;
  a3[1] = v14;
  a3[2] = v15;
  return result;
}
