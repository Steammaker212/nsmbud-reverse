/* sub_604115D4
 * address: 0x604115D4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604115D4(float *a1, float *a2, float a3)
{
  float v4; // s2
  float v5; // s6
  float v6; // s4
  float v7; // s0
  _BOOL4 result; // r0

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = -a3;
  result = 0;
  if ( (float)((float)((float)((float)(a1[2] * v5) + (float)(a1[1] * *a2)) + (float)(a1[3] * v6)) - a1[4]) >= v7
    && (float)((float)((float)((float)(a1[6] * v5) + (float)(a1[5] * v4)) + (float)(a1[7] * v6)) - a1[8]) >= v7
    && (float)((float)((float)((float)(a1[10] * v5) + (float)(a1[9] * v4)) + (float)(a1[11] * v6)) - a1[12]) >= v7 )
  {
    return (float)((float)((float)((float)(a1[14] * v5) + (float)(a1[13] * v4)) + (float)(a1[15] * v6)) - a1[16]) >= v7;
  }
  return result;
}
