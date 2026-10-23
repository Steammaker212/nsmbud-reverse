/* sub_60833454
 * address: 0x60833454   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_60833454(float *result, float *a2, float a3, float a4, float a5)
{
  float *v5; // r4
  float v8; // s22
  float v9; // s24
  float v10; // s26
  float v11; // s0
  float v12; // s8
  float v13; // s2
  float v14; // s4
  float v15; // s6
  float v16; // s8

  v5 = result;
  if ( *result != *a2 || result[2] != a2[2] )
  {
    v8 = result[1] - a2[1];
    v9 = *result - *a2;
    v10 = result[2] - a2[2];
    v11 = sqrtf((float)((float)(v8 * v8) + (float)(v9 * v9)) + (float)(v10 * v10));
    if ( v11 < a5 || (v12 = v11 / a3, (float)(v11 / a3) == 0.0) )
    {
      *result = *a2;
      result[1] = a2[1];
      result = *((float **)a2 + 2);
      *((_DWORD *)v5 + 2) = result;
      return result;
    }
    v13 = (float)(1.0 / a3) * v10;
    v14 = (float)(1.0 / a3) * v8;
    v15 = (float)(1.0 / a3) * v9;
    if ( v12 <= a4 )
    {
      if ( v12 >= a5 )
      {
LABEL_12:
        *result = *result - v15;
        result[1] = result[1] - v14;
        result[2] = result[2] - v13;
        return result;
      }
      v16 = a5 / v12;
    }
    else
    {
      v16 = a4 / v12;
    }
    v13 = v13 * v16;
    v14 = v14 * v16;
    v15 = v15 * v16;
    goto LABEL_12;
  }
  return result;
}
