/* sub_600EBBFC
 * address: 0x600EBBFC   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600EBBFC(int a1)
{
  float v2; // s16
  float *v3; // r6
  float *v4; // r7
  float *v5; // r5
  float v6; // s0
  int v7; // r3
  unsigned int v8; // r1
  float v9; // r1
  float v10; // s6
  float *v11; // r0
  float v12; // s8
  float v13; // s10
  float *v14; // r0
  float v15; // s6
  float v16; // s8

  FIELD_U32(a1, 7176) = 2;
  FIELD_U32(a1, 6148) &= ~0x200u;
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 8352) = FIELD_U32(a1, 108);
  FIELD_U8(a1, 8356) = 1;
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
  FIELD_U32(a1, 7752) = 3;
  v2 = FIELD_F32(dword_60CC6484, 116);
  v3 = (float *)(a1 + 8240);
  FIELD_F32(a1, 8240) = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1672))(a1);
  v4 = (float *)(a1 + 8256);
  FIELD_F32(a1, 8256) = v2 + (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1668))(a1);
  v5 = (float *)(a1 + 8244);
  FIELD_F32(a1, 8244) = -(*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1672))(a1);
  v6 = v2 - (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1668))(a1);
  v7 = 0;
  FIELD_F32(a1, 8260) = v6;
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
  FIELD_U32(a1, 132) = *(_DWORD *)(a1 + 4 * v8 + 8240);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 104) = 1045220557;
  v9 = *v4;
  FIELD_F32(a1, 8248) = *v4;
  v10 = v9;
  v11 = (float *)(a1 + 8248);
  v12 = *v3;
  v13 = *v3;
  do
  {
    while ( v12 > 0.0 )
    {
      v13 = v13 + -0.2;
      v10 = v10 - v13;
      *v11 = v10;
      if ( v13 < 0.0 )
        goto LABEL_14;
    }
    v13 = v13 + 0.2;
    v10 = v10 - v13;
    *v11 = v10;
  }
  while ( v13 <= 0.0 );
LABEL_14:
  v14 = (float *)(a1 + 8252);
  FIELD_F32(a1, 8252) = v6;
  v15 = *v5;
  v16 = *v5;
  do
  {
    while ( v15 > 0.0 )
    {
      v16 = v16 + -0.2;
      v6 = v6 - v16;
      *v14 = v6;
      if ( v16 < 0.0 )
        goto LABEL_19;
    }
    v16 = v16 + 0.2;
    v6 = v6 - v16;
    *v14 = v6;
  }
  while ( v16 <= 0.0 );
LABEL_19:
  FIELD_U32(a1, 100) = -1098068787;
  FIELD_U8(a1, 8121) = 1;
  return 8121;
}
