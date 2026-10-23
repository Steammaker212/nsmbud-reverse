/* sub_600D94B4
 * address: 0x600D94B4   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D94B4(int a1)
{
  float v2; // s16
  float *v3; // r6
  float *v4; // r7
  float *v5; // r5
  float v6; // s0
  int v7; // r2
  unsigned int v8; // r1
  int v9; // r1
  float v10; // r1
  float v11; // s6
  float *v12; // r0
  float v13; // s8
  float v14; // s10
  float *v15; // r0
  float v16; // s6
  float v17; // s8
  int result; // r0

  FIELD_U32(a1, 7176) &= ~1u;
  FIELD_U32(a1, 6148) &= ~0x200u;
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 8164) = FIELD_U32(a1, 108);
  FIELD_U8(a1, 8168) = 1;
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
  FIELD_U32(a1, 7752) = 5;
  v2 = FIELD_F32(dword_60CC6484, 116);
  v3 = (float *)(a1 + 8120);
  FIELD_F32(a1, 8120) = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1672))(a1);
  v4 = (float *)(a1 + 8136);
  FIELD_F32(a1, 8136) = v2 + (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1668))(a1);
  v5 = (float *)(a1 + 8124);
  FIELD_F32(a1, 8124) = -(*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1672))(a1);
  v6 = v2 - (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1668))(a1);
  v7 = 0;
  FIELD_F32(a1, 8140) = v6;
  v8 = FIELD_U32(a1, 80);
  if ( v8 < 2 )
    v7 = FIELD_U32(a1, 80);
  if ( (float)((float)byte_60AFE3F4[v8] * (float)(v4[v7] - FIELD_F32(a1, 108))) <= 0.0 )
  {
    v8 = v8 != 1;
    FIELD_U32(a1, 80) = v8;
  }
  if ( v8 >= 2 )
    v8 = 0;
  v9 = *(_DWORD *)(a1 + 4 * v8 + 8120);
  FIELD_U32(a1, 132) = v9;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 8148) = v9;
  FIELD_U32(a1, 104) = 1036831949;
  v10 = *v4;
  FIELD_F32(a1, 8128) = *v4;
  v11 = v10;
  v12 = (float *)(a1 + 8128);
  v13 = *v3;
  v14 = *v3;
  do
  {
    while ( v13 > 0.0 )
    {
      v14 = v14 + -0.1;
      v11 = v11 - v14;
      *v12 = v11;
      if ( v14 < 0.0 )
        goto LABEL_14;
    }
    v14 = v14 + 0.1;
    v11 = v11 - v14;
    *v12 = v11;
  }
  while ( v14 <= 0.0 );
LABEL_14:
  v15 = (float *)(a1 + 8132);
  FIELD_F32(a1, 8132) = v6;
  v16 = *v5;
  v17 = *v5;
  do
  {
    while ( v16 > 0.0 )
    {
      v17 = v17 + -0.1;
      v6 = v6 - v17;
      *v15 = v6;
      if ( v17 < 0.0 )
        goto LABEL_19;
    }
    v17 = v17 + 0.1;
    v6 = v6 - v17;
    *v15 = v6;
  }
  while ( v17 <= 0.0 );
LABEL_19:
  FIELD_U32(a1, 100) = -1098068787;
  FIELD_U8(a1, 8152) = 1;
  FIELD_U8(a1, 8153) = 0;
  FIELD_U8(a1, 8144) = 1;
  FIELD_U8(a1, 8185) = 0;
  FIELD_U32(a1, 8188) = 0;
  FIELD_U32(a1, 0x2000) = 0;
  result = FIELD_U32(a1, 2872) & 1;
  FIELD_U8(a1, 8308) = result;
  return result;
}
