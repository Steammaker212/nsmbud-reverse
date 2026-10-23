/* sub_6000B050
 * address: 0x6000B050   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_6000B050(float *result, float *a2, int a3, float *a4)
{
  float v4; // s16
  float v5; // s4
  float v6; // s2
  float v7; // s12
  float v8; // s0
  float v9; // s4

  if ( a3 >= 1 )
  {
    v4 = a4[34];
    v5 = a2[1] - a4[28];
    v6 = fabsf(a4[25]);
    v7 = (float)a3 * v6;
    v8 = (float)(v5 / (float)a3) + (float)(v7 * 0.5);
    if ( (float)(v8 - v7) < v4 )
    {
      v9 = v5 - (float)((float)a3 * v4);
      if ( v9 >= 0.0 )
        v8 = v4 + sqrtf((float)(v6 + v6) * v9);
    }
    *result = (float)(*a2 - a4[27]) / (float)a3;
    result[1] = v8;
  }
  return result;
}
