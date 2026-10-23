/* sub_609312C4
 * address: 0x609312C4   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_609312C4(_DWORD *a1, int a2)
{
  unsigned int v4; // r1
  int *v5; // r2
  unsigned int v6; // r0
  int *v7; // r2
  unsigned int v8; // r0
  int v9; // r4
  float v10; // s16
  float v11; // s18
  float v12; // s0
  float v13; // s8
  float v14; // s10
  float v15; // s4
  float v16; // s6
  float v17; // s5
  float v18; // s8
  float v19; // s12
  float v20; // s14
  float v21; // s3
  float result; // s0

  v4 = a1[208];
  v5 = (int *)a1[209];
  v6 = a1[5] & a2;
  if ( v4 > v6 )
    v5 += v6;
  sub_6092DC18(*v5);
  v7 = (int *)a1[209];
  v8 = a1[5] & a2;
  if ( a1[208] > v8 )
    v7 += v8;
  v9 = *v7;
  v10 = *(float *)(*v7 + 416);
  v11 = sinf(v10);
  v12 = cosf(v10);
  v13 = FIELD_F32(v9, 396);
  v14 = FIELD_F32(v9, 400);
  v15 = FIELD_F32(v9, 380);
  v16 = FIELD_F32(v9, 376);
  v17 = v12 * v13;
  v18 = v11 * v13;
  v19 = (float)(v11 * 0.0) - (float)(v12 * 0.0);
  FIELD_F32(v9, 756) = v17;
  v20 = (float)((float)(v12 * 0.0) - v11) * v14;
  v21 = (float)((float)(v11 * 0.0) + (float)(v12 * 0.0)) * 0.0;
  result = (float)((float)(v11 * 0.0) + v12) * v14;
  FIELD_F32(v9, 760) = v20;
  FIELD_F32(v9, 764) = (float)((float)((float)(v20 * v15) + (float)(v17 * v16)) + (float)(v21 * 0.0)) + 0.0;
  FIELD_U32(v9, 768) = 0;
  FIELD_U32(v9, 784) = 0;
  FIELD_F32(v9, 772) = v18;
  FIELD_F32(v9, 776) = result;
  FIELD_F32(v9, 780) = (float)((float)((float)(result * v15) + (float)(v18 * v16)) + (float)((float)(v19 * 0.0) * 0.0))
                       + 0.0;
  return result;
}
