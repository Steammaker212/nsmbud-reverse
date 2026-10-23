/* sub_6092928C
 * address: 0x6092928C   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6092928C(int a1, float *a2, unsigned int a3)
{
  int v5; // r3
  unsigned int v6; // r2
  float *v7; // r0
  float v8; // s8
  float v9; // s6
  float v10; // s10
  unsigned int *v11; // r0
  float **v12; // r2
  _DWORD *v13; // r7
  float v14; // s8
  float v15; // s6
  float v16; // s10
  float *v17; // r6
  float *v18; // r7
  float v19; // s0
  float v20; // s0
  unsigned int result; // r0
  float *v22; // r5
  float v23; // s0
  float v24; // s0

  v5 = FIELD_U8(a1, 308);
  v6 = FIELD_U32(a1, 320);
  v7 = *(float **)(a1 + 324);
  if ( v5 )
  {
    v8 = FIELD_F32(a1, 288);
    v9 = FIELD_F32(a1, 284);
    v10 = FIELD_F32(a1, 292);
    if ( v6 > a3 )
      v7 += 3 * a3;
    *v7 = (float)((float)(v8 * a2[13]) + (float)(v9 * a2[12])) + (float)(v10 * a2[14]);
    v7[1] = (float)((float)(v8 * a2[17]) + (float)(v9 * a2[16])) + (float)(v10 * a2[18]);
    v7[2] = (float)((float)(v8 * a2[21]) + (float)(v9 * a2[20])) + (float)(v10 * a2[22]);
    v11 = (unsigned int *)(a1 + 312);
    v12 = (float **)(a1 + 316);
    v13 = *(_DWORD **)(a1 + 316);
    if ( FIELD_U32(a1, 312) > a3 )
      v13 += 3 * a3;
    *v13 = FIELD_U32(a1, 284);
    v13[1] = FIELD_U32(a1, 288);
    v13[2] = FIELD_U32(a1, 292);
  }
  else
  {
    if ( v6 > a3 )
      v7 += 3 * a3;
    *v7 = FIELD_F32(a1, 284);
    v7[1] = FIELD_F32(a1, 288);
    v7[2] = FIELD_F32(a1, 292);
    v14 = FIELD_F32(a1, 288);
    v15 = FIELD_F32(a1, 284);
    v16 = FIELD_F32(a1, 292);
    v11 = (unsigned int *)(a1 + 312);
    v12 = (float **)(a1 + 316);
    v17 = *(float **)(a1 + 316);
    if ( FIELD_U32(a1, 312) > a3 )
      v17 += 3 * a3;
    *v17 = (float)((float)(v14 * a2[1]) + (float)(v15 * *a2)) + (float)(v16 * a2[2]);
    v17[1] = (float)((float)(v14 * a2[5]) + (float)(v15 * a2[4])) + (float)(v16 * a2[6]);
    v17[2] = (float)((float)(v14 * a2[9]) + (float)(v15 * a2[8])) + (float)(v16 * a2[10]);
  }
  v18 = *v12;
  if ( *v11 > a3 )
    v18 += 3 * a3;
  v19 = sqrtf((float)((float)(v18[1] * v18[1]) + (float)(*v18 * *v18)) + (float)(v18[2] * v18[2]));
  if ( v19 > 0.0 )
  {
    v20 = 1.0 / v19;
    *v18 = v20 * *v18;
    v18[1] = v20 * v18[1];
    v18[2] = v20 * v18[2];
  }
  result = FIELD_U32(a1, 320);
  v22 = *(float **)(a1 + 324);
  if ( result > a3 )
    v22 += 3 * a3;
  v23 = sqrtf((float)((float)(v22[1] * v22[1]) + (float)(*v22 * *v22)) + (float)(v22[2] * v22[2]));
  if ( v23 > 0.0 )
  {
    v24 = 1.0 / v23;
    *v22 = v24 * *v22;
    v22[1] = v24 * v22[1];
    v22[2] = v24 * v22[2];
  }
  return result;
}
