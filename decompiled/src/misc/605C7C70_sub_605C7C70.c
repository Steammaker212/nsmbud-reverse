/* sub_605C7C70
 * address: 0x605C7C70   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C7C70(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  float *v6; // r3
  int v7; // r2
  float v8; // s12
  float *v9; // r0
  float v10; // s4
  float v11; // s6
  float v12; // s10
  float v13; // s2
  float *v14; // r0
  float v15; // s8
  int v16; // r3
  float *v17; // r1
  float v18; // s6
  float v19; // s14
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  _DWORD *v23; // r0

  sub_605C78B0((float *)a1);
  v2 = *(_DWORD **)(a1 + 2040);
  if ( FIELD_U32(a1, 2036) > 1u )
    v2 += 2;
  *v2 = FIELD_U32(a1, 2960);
  v2[1] = FIELD_U32(a1, 2964);
  v3 = *(_DWORD **)(a1 + 2040);
  if ( FIELD_U32(a1, 2036) > 2u )
    v3 += 4;
  *v3 = FIELD_U32(a1, 2968);
  v3[1] = FIELD_U32(a1, 2972);
  v4 = *(_DWORD **)(a1 + 2040);
  if ( FIELD_U32(a1, 2036) > 3u )
    v4 += 6;
  *v4 = FIELD_U32(a1, 2976);
  v4[1] = FIELD_U32(a1, 2980);
  v5 = *(_DWORD **)(a1 + 2040);
  if ( FIELD_U32(a1, 2036) > 4u )
    v5 += 8;
  *v5 = FIELD_U32(a1, 2984);
  v5[1] = FIELD_U32(a1, 2988);
  v6 = *(float **)(a1 + 1192);
  v7 = FIELD_U32(a1, 1392);
  v8 = FIELD_F32(a1, 112);
  v9 = *(float **)(a1 + 2040);
  v10 = v6[1];
  v11 = FIELD_F32(a1, 1216);
  if ( FIELD_U32(a1, 1388) > 3u )
    v7 += 96;
  v12 = FIELD_F32(v7, 8);
  v13 = FIELD_F32(a1, 108);
  if ( FIELD_U32(a1, 2036) > 5u )
    v9 += 10;
  *v9 = (float)((float)(*v6 + FIELD_F32(a1, 1212)) + FIELD_F32(v7, 4)) - v13;
  v9[1] = (float)((float)(v10 + v11) + v12) - v8;
  v14 = *(float **)(a1 + 1192);
  v15 = FIELD_F32(a1, 1216);
  v16 = FIELD_U32(a1, 1392);
  v17 = *(float **)(a1 + 2040);
  v18 = v14[1];
  if ( FIELD_U32(a1, 1388) > 2u )
    v16 += 64;
  v19 = FIELD_F32(v16, 8);
  if ( FIELD_U32(a1, 2036) > 6u )
    v17 += 12;
  *v17 = (float)((float)(*v14 + FIELD_F32(a1, 1212)) + FIELD_F32(v16, 4)) - v13;
  v17[1] = (float)((float)(v18 + v15) + v19) - v8;
  v20 = *(_DWORD **)(a1 + 2040);
  if ( FIELD_U32(a1, 2036) > 7u )
    v20 += 14;
  *v20 = FIELD_U32(a1, 2992);
  v20[1] = FIELD_U32(a1, 2996);
  v21 = *(_DWORD **)(a1 + 2040);
  if ( FIELD_U32(a1, 2036) > 8u )
    v21 += 16;
  *v21 = FIELD_U32(a1, 3000);
  v21[1] = FIELD_U32(a1, 3004);
  v22 = *(_DWORD **)(a1 + 2040);
  if ( FIELD_U32(a1, 2036) > 9u )
    v22 += 18;
  *v22 = FIELD_U32(a1, 3008);
  v22[1] = FIELD_U32(a1, 3012);
  v23 = *(_DWORD **)(a1 + 2040);
  if ( FIELD_U32(a1, 2036) > 0xAu )
    v23 += 20;
  *v23 = FIELD_U32(a1, 3016);
  v23[1] = FIELD_U32(a1, 3020);
  return ShapedCollider_execute((ColliderBase *)(a1 + 1696));
}
