/* sub_6090ECAC
 * address: 0x6090ECAC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090ECAC(float *result, float *a2, float *a3)
{
  float v3; // s2
  float v4; // s4
  float v5; // s0
  float v6; // s12
  float v7; // s6
  float v8; // s1
  float v9; // s14
  float v10; // s8
  float v11; // s3
  float v12; // s8

  v3 = *a2;
  v4 = *result;
  v5 = a2[1];
  v6 = a2[3];
  v7 = result[1];
  v8 = v6 - v5;
  v9 = a2[2] - *a2;
  v10 = (float)((float)(v6 - v5) * (float)(v7 - v5)) + (float)(v9 * (float)(*result - *a2));
  if ( v10 <= 0.0 )
  {
    v12 = 0.0;
    if ( !a3 )
      return (float)((float)(v3 - v4) * (float)(v3 - v4)) + (float)((float)(v5 - v7) * (float)(v5 - v7));
    goto LABEL_8;
  }
  v11 = (float)(v8 * v8) + (float)(v9 * v9);
  if ( v10 < v11 )
  {
    v12 = v10 / v11;
    v5 = v5 + (float)(v8 * v12);
    v3 = v3 + (float)(v9 * v12);
    if ( !a3 )
      return (float)((float)(v3 - v4) * (float)(v3 - v4)) + (float)((float)(v5 - v7) * (float)(v5 - v7));
    goto LABEL_8;
  }
  v12 = 1.0;
  v5 = a2[3];
  v3 = a2[2];
  if ( a3 )
  {
LABEL_8:
    *a3 = v12;
    v4 = *result;
    v7 = result[1];
  }
  return (float)((float)(v3 - v4) * (float)(v3 - v4)) + (float)((float)(v5 - v7) * (float)(v5 - v7));
}
