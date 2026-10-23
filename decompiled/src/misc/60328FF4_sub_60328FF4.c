/* sub_60328FF4
 * address: 0x60328FF4   size: 976   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60328FF4(int a1)
{
  int v2; // r4
  CollisionMgr *v3; // r5
  float *v4; // r7
  float *v5; // r6
  float v6; // s28
  float v7; // s0
  float v8; // s0
  int v9; // r3
  int v10; // r2
  int v11; // r2
  int v12; // r2
  int v13; // r2
  int v14; // r2
  int v15; // r2
  int v16; // r2
  int v17; // r2
  int v18; // r2
  int v19; // r2
  int v20; // r2
  int v21; // r2
  int v22; // r2
  int *v23; // r9
  int v24; // t1
  int v25; // r3
  int v26; // r3
  CollisionMgr_Sensor a4; // [sp+4h] [bp-6Ch] BYREF

  v2 = 15;
  v3 = (CollisionMgr *)(a1 + 6408);
  v4 = (float *)(a1 + 87272);
  v5 = (float *)(a1 + 87268);
  v6 = 112.0;
  do
  {
    v7 = 112.0;
    if ( v6 != 0.0 )
      v7 = sqrtf(12544.0 - (float)(v6 * v6));
    a4.a = (float)(v6 + *v5) + 40.0;
    a4.b = a4.a;
    a4.c = (float)((float)(v7 + *v4) + 48.0) + 16.0;
    CollisionMgr_init(v3, (StateActor *)a1, 0, &a4, 0);
    v6 = v6 + -16.0;
    ++v3;
    --v2;
  }
  while ( v2 );
  v8 = *v5 + 112.0;
  FIELD_F32(a1, 86868) = v8;
  FIELD_F32(a1, 86872) = v8;
  FIELD_F32(a1, 86876) = *v4;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, 0, (CollisionMgr_Sensor *)(a1 + 86868), 0);
  v9 = FIELD_U32(a1, 8956);
  FIELD_U32(a1, 8952) |= 0x4D000640u;
  FIELD_U32(a1, 8956) = v9 | 0x1408000;
  v10 = FIELD_U32(a1, 14308) | 0x1408000;
  FIELD_U32(a1, 14304) |= 0x4D000640u;
  FIELD_U32(a1, 14308) = v10;
  v11 = FIELD_U32(a1, 19660) | 0x1408000;
  FIELD_U32(a1, 19656) |= 0x4D000640u;
  FIELD_U32(a1, 19660) = v11;
  v12 = FIELD_U32(a1, 25012) | 0x1408000;
  FIELD_U32(a1, 25008) |= 0x4D000640u;
  FIELD_U32(a1, 25012) = v12;
  v13 = FIELD_U32(a1, 30364) | 0x1408000;
  FIELD_U32(a1, 30360) |= 0x4D000640u;
  FIELD_U32(a1, 30364) = v13;
  v14 = FIELD_U32(a1, 35716) | 0x1408000;
  FIELD_U32(a1, 35712) |= 0x4D000640u;
  FIELD_U32(a1, 35716) = v14;
  v15 = FIELD_U32(a1, 41068) | 0x1408000;
  FIELD_U32(a1, 41064) |= 0x4D000640u;
  FIELD_U32(a1, 41068) = v15;
  v16 = FIELD_U32(a1, 46420) | 0x1408000;
  FIELD_U32(a1, 46416) |= 0x4D000640u;
  FIELD_U32(a1, 46420) = v16;
  v17 = FIELD_U32(a1, 51772) | 0x1408000;
  FIELD_U32(a1, 51768) |= 0x4D000640u;
  FIELD_U32(a1, 51772) = v17;
  v18 = FIELD_U32(a1, 57124) | 0x1408000;
  FIELD_U32(a1, 57120) |= 0x4D000640u;
  FIELD_U32(a1, 57124) = v18;
  v19 = FIELD_U32(a1, 62476) | 0x1408000;
  FIELD_U32(a1, 62472) |= 0x4D000640u;
  FIELD_U32(a1, 62476) = v19;
  v20 = FIELD_U32(a1, 67828) | 0x1408000;
  FIELD_U32(a1, 67824) |= 0x4D000640u;
  FIELD_U32(a1, 67828) = v20;
  v21 = FIELD_U32(a1, 73180) | 0x1408000;
  FIELD_U32(a1, 73176) |= 0x4D000640u;
  FIELD_U32(a1, 73180) = v21;
  v22 = FIELD_U32(a1, 78532) | 0x1408000;
  FIELD_U32(a1, 78528) |= 0x4D000640u;
  FIELD_U32(a1, 78532) = v22;
  v24 = FIELD_U32(a1, 83880);
  v23 = (int *)(a1 + 83880);
  v25 = v23[1] | 0x1408000;
  *v23 = v24 | 0x4D000640;
  v23[1] = v25;
  v26 = *(v23 - 20171);
  *(v23 - 20172) |= 0x4D000640u;
  *(v23 - 20171) = v26 | 0x1408000;
  return v26 | 0x1408000;
}
