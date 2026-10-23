/* sub_60327C20
 * address: 0x60327C20   size: 1120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60327C20(int a1)
{
  int v2; // r0
  int v3; // r0
  float v4; // s0
  int v5; // r0
  float v6; // s0
  int v7; // s2
  int v8; // r0
  int v9; // r1
  int v10; // r3
  int v11; // r2
  unsigned int v12; // r0
  int v13; // r6
  CollisionMgr *v14; // r5
  float v15; // s26
  float v16; // s0
  int v17; // r1
  int *v18; // r0
  int v19; // r7
  int v20; // r5
  int v21; // r4
  int v22; // r2
  int v23; // r1
  int v24; // r2
  _DWORD *v25; // r1
  int v26; // r6
  CollisionMgr_Sensor adjacentSensor; // [sp+4h] [bp-64h] BYREF

  FIELD_U32(a1, 116) = 1148846080;
  v2 = FIELD_U32(a1, 20);
  FIELD_F32(a1, 86940) = (float)((unsigned int)((unsigned __int16)v2 >> 12) + 1) * 0.5;
  FIELD_U32(a1, 80) = dword_60AF24C4[v2 & 3];
  FIELD_U32(a1, 620) = 0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 6244) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  ActiveCollider__init((ActiveCollider *)(a1 + 87384), (StageActor *)a1, &stru_60AFF7B4, a1 + 88024);
  FIELD_U32(a1, 87516) = 1;
  v3 = FIELD_U32(a1, 87268);
  FIELD_U32(a1, 87504) = FIELD_U32(a1, 87272);
  FIELD_U32(a1, 87500) = v3;
  v4 = FIELD_F32(a1, 87280) + 12.0;
  FIELD_F32(a1, 87508) = FIELD_F32(a1, 87276) + 12.0;
  FIELD_F32(a1, 87512) = v4;
  ActiveCollider__init((ActiveCollider *)(a1 + 87688), (StageActor *)a1, &stru_60AFF7B4, a1 + 88024);
  v5 = FIELD_U32(a1, 87284);
  FIELD_U32(a1, 87808) = FIELD_U32(a1, 87288);
  FIELD_U32(a1, 87804) = v5;
  v6 = FIELD_F32(a1, 87296) + 10.0;
  FIELD_F32(a1, 87812) = FIELD_F32(a1, 87292) + 10.0;
  FIELD_F32(a1, 87816) = v6;
  FIELD_F64(a1, 87996) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 87992))(a1 + 87992);
  FIELD_U32(a1, 88004) = v7;
  killer_king_ref(a1);
  sub_60328190(a1);
  v8 = FIELD_U32(a1, 87268);
  v9 = FIELD_U32(a1, 87272);
  FIELD_U32(a1, 304) = v8;
  FIELD_U32(a1, 308) = v9;
  v10 = FIELD_U32(a1, 87288);
  v11 = FIELD_U32(a1, 87284);
  FIELD_U32(a1, 87084) = v10;
  FIELD_U32(a1, 87080) = v11;
  FIELD_U32(a1, 87504) = v9;
  FIELD_U32(a1, 87500) = v8;
  FIELD_U32(a1, 87808) = v10;
  FIELD_U32(a1, 87804) = v11;
  v12 = FIELD_U32(a1, 80);
  if ( v12 < 2 )
  {
    v13 = 15;
    v14 = (CollisionMgr *)(a1 + 6408);
    v15 = 112.0;
    do
    {
      v16 = 112.0;
      if ( v15 != 0.0 )
        v16 = sqrtf(12544.0 - (float)(v15 * v15));
      adjacentSensor.c = (float)(FIELD_F32(a1, 87268) + (float)(v16 + 0.1)) + 24.0;
      adjacentSensor.a = v15 + FIELD_F32(a1, 87272);
      adjacentSensor.b = adjacentSensor.a + 0.1;
      CollisionMgr_init(v14, (StateActor *)a1, 0, 0, &adjacentSensor);
      v15 = v15 + -16.0;
      ++v14;
      --v13;
    }
    while ( v13 );
    v17 = 15;
    v18 = (int *)(a1 + 8948);
    do
    {
      --v17;
      v19 = *(v18 - 1) | 0x4D000640;
      v20 = *(v18 - 2) | 0x1408000;
      v21 = *v18 | 0x1408000;
      *(v18 - 3) |= 0x4D000640u;
      *(v18 - 2) = v20;
      *(v18 - 1) = v19;
      *v18 = v21;
      v18 += 1338;
    }
    while ( v17 );
  }
  else if ( v12 == 2 )
  {
    sub_60328C1C(a1);
  }
  else if ( v12 == 3 )
  {
    sub_60328FF4(a1);
  }
  FIELD_U32(a1, 3200) |= 0x10000800u;
  FIELD_U32(a1, 3192) |= 0x10000800u;
  v22 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) |= 0x10000800u;
  v23 = v22 | 0x10000800;
  v24 = 15;
  FIELD_U32(a1, 3184) = v23;
  v25 = (_DWORD *)(a1 + 8960);
  do
  {
    --v24;
    *v25 |= 0x10000800u;
    *(v25 - 2) |= 0x10000800u;
    v26 = *(v25 - 4);
    *(v25 - 6) |= 0x10000800u;
    *(v25 - 4) = v26 | 0x10000800;
    v25 += 1338;
  }
  while ( v24 );
  FIELD_U32(a1, 500) = 1145569280;
  FIELD_U32(a1, 504) = 1140850688;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93BA0);
  return 1;
}
