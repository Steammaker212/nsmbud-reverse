/* sub_608336CC
 * address: 0x608336CC   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_608336CC(float *result)
{
  float v1; // s0
  float v2; // s4
  float v3; // s2
  float v4; // s2
  float v5; // s4
  float v6; // s4
  float v7; // s4
  float v8; // s0

  v1 = *result;
  v2 = result[3];
  v3 = result[1] - (float)(*result * result[2]);
  if ( v3 >= 0.0 )
  {
    v4 = v3 - v2;
    if ( v4 <= 0.0 )
      v4 = 0.0;
  }
  else
  {
    v4 = v2 + v3;
    if ( v4 >= 0.0 )
      v4 = 0.0;
  }
  v5 = result[5];
  if ( v4 >= v5 )
  {
    v4 = result[5];
  }
  else
  {
    v6 = -v5;
    if ( v4 <= v6 )
      v4 = v6;
  }
  v7 = result[4];
  if ( v4 < (float)-v7 || v4 > v7 )
  {
    v8 = v1 + v4;
  }
  else
  {
    if ( v1 < 0.0 )
    {
      v8 = v1 + v7;
      if ( v8 < 0.0 )
        goto LABEL_20;
      goto LABEL_19;
    }
    v8 = v1 - v7;
    if ( v8 <= 0.0 )
    {
LABEL_19:
      v4 = 0.0;
      v8 = 0.0;
    }
  }
LABEL_20:
  *result = v8;
  result[1] = v4;
  return result;
}
