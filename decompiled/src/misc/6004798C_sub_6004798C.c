/* sub_6004798C
 * address: 0x6004798C   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6004798C(int a1, float *a2)
{
  float v4; // s2
  float v5; // s0
  float v6; // s0
  float v7; // s18
  float v8; // s16
  float v9; // s0
  int *v10; // r1
  int *v11; // r0
  float v12; // s6
  float *v13; // r2
  float v14; // s2
  float v15; // s4
  float v16; // s2
  float result; // s0

  if ( sqrtf((float)((float)(a2[1] * a2[1]) + (float)(*a2 * *a2)) + (float)(a2[2] * a2[2])) == 0.0 )
  {
    v5 = 0.0;
  }
  else
  {
    v4 = (float)((float)((float)(*a2 * 0.0) - a2[1]) + (float)(a2[2] * 0.0))
       / sqrtf((float)((float)(a2[1] * a2[1]) + (float)(*a2 * *a2)) + (float)(a2[2] * a2[2]));
    v5 = 1.0;
    if ( v4 <= 1.0 )
    {
      v5 = v4;
      if ( v4 < -1.0 )
        v5 = -1.0;
    }
  }
  v6 = acosf(v5) * 57.296;
  if ( FIELD_S32(a1, 11512) > 1 )
  {
    if ( v6 <= 30.0 )
      goto LABEL_16;
    if ( v6 < 60.0 )
    {
      v8 = *a2;
      v9 = a2[1];
      goto LABEL_26;
    }
    v11 = dword_60047BC4;
    v9 = -0.5;
    if ( *a2 < 0.0 )
      v11 = &dword_60047BC4[1];
    v8 = *(float *)v11;
  }
  else
  {
    if ( v6 < 60.0 )
    {
      if ( v6 > 30.0 )
      {
        v7 = (float)(90.0 - v6) * 0.017453;
        v8 = cosf(v7);
        v9 = -sinf(v7);
        if ( FIELD_U32(a1, 11468) != 1 )
          v8 = -v8;
        goto LABEL_25;
      }
LABEL_16:
      v9 = -0.86603;
      v10 = dword_60047BB4;
      if ( FIELD_U32(a1, 11468) == 1 )
        v10 = &dword_60047BB4[1];
      v8 = *(float *)v10;
      goto LABEL_25;
    }
    v9 = -0.5;
    if ( *a2 >= 0.0 )
      v8 = 0.86603;
    else
      v8 = -0.86603;
  }
LABEL_25:
  a2[2] = 0.0;
  *a2 = v8;
  a2[1] = v9;
LABEL_26:
  v12 = fabsf(v9);
  v13 = (float *)(a1 + 11292);
  if ( !FIELD_U32(a1, 11468) )
    v13 = (float *)(a1 + 11184);
  v14 = FIELD_F32(a1, 11584);
  v15 = *v13;
  a2[2] = 0.0;
  v16 = (float)(v15 - v14) / v12;
  result = v9 * v16;
  *a2 = v8 * v16;
  a2[1] = result;
  return result;
}
