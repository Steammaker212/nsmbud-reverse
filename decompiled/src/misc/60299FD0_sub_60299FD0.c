/* sub_60299FD0
 * address: 0x60299FD0   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60299FD0(float a1, float a2, float a3, float a4, int a5, float *a6)
{
  float v6; // s18
  float v7; // s28
  float v8; // s30
  float v9; // s26
  float v10; // s24
  int result; // r0
  float v12; // s0
  float v13; // s0

  v6 = a3;
  v7 = a2 - a6[1];
  v8 = a1 - *a6;
  v9 = a3 - a6[2];
  v10 = (float)((float)(v7 * v7) + (float)(v8 * v8)) + (float)(v9 * v9);
  if ( sqrtf(v10) >= a4 )
  {
    v12 = sqrtf(v10);
    if ( v12 > 0.0 )
    {
      v13 = 1.0 / v12;
      v9 = v9 * v13;
      v7 = v7 * v13;
      v8 = v8 * v13;
    }
    result = 0;
    *a6 = *a6 + (float)(v8 * a4);
    a6[1] = a6[1] + (float)(v7 * a4);
    v6 = a6[2] + (float)(v9 * a4);
  }
  else
  {
    *a6 = a1;
    a6[1] = a2;
    result = 1;
  }
  a6[2] = v6;
  return result;
}
