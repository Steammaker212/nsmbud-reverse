/* sub_606667F8
 * address: 0x606667F8   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606667F8(int a1)
{
  int v2; // r1
  int v3; // r0
  float v4; // s0
  float *v5; // r7
  float v6; // s4
  float v7; // s0
  int v8; // r0
  int v9; // r1
  SolidOnTopColliderInfo v11; // [sp+0h] [bp-50h] BYREF
  _DWORD v12[14]; // [sp+18h] [bp-38h] BYREF

  sub_606429F0((_DWORD *)(a1 + 144), (_DWORD *)(a1 + 116));
  v2 = FIELD_U32(a1, 20);
  v3 = (FIELD_U32(a1, 24) >> 8) & 0xF;
  if ( !v3 )
    v3 = 4;
  FIELD_U32(a1, 6820) = v3;
  v4 = (float)v3 * 16.0;
  FIELD_F32(a1, 6816) = v4;
  FIELD_U32(a1, 80) = v2 & 3;
  FIELD_U8(a1, 6824) = (v2 & 0x10000000) != 0;
  v5 = (float *)((char *)&unk_60B07978 + 16 * (v2 & 3));
  v6 = v5[1];
  FIELD_F32(a1, 108) = *v5 + FIELD_F32(a1, 108);
  FIELD_F32(a1, 112) = v6 + FIELD_F32(a1, 112);
  FIELD_U32(a1, 144) = 0x40000000;
  FIELD_U32(a1, 148) = 1056964608;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_F32(a1, 6808) = v4 * 0.5;
  FIELD_U32(a1, 6812) = -1056964608;
  FIELD_U32(a1, 6324) = v3;
  FIELD_U32(a1, 6264) = 0;
  FIELD_U32(a1, 6268) = -1056964608;
  FIELD_U32(a1, 6272) = 0;
  FIELD_U32(a1, 6328) = 0;
  FIELD_U32(a1, 6300) = 0;
  FIELD_U32(a1, 6304) = 0;
  FIELD_U32(a1, 6308) = 0;
  ((void (__fastcall *)(int))loc_60645374)(a1 + 6104);
  v7 = FIELD_F32(a1, 6816);
  FIELD_F32(a1, 492) = v7 * 0.5;
  FIELD_U32(a1, 496) = 1090519040;
  FIELD_F32(a1, 500) = v7;
  FIELD_U32(a1, 504) = 1136656384;
  FIELD_F32(a1, 508) = v7;
  FIELD_U32(a1, 512) = 1136656384;
  memset(&v11, 0, 16);
  v12[0] = 0;
  v12[1] = 0;
  *(float *)&v12[2] = v7;
  v12[3] = 0;
  v11.points = (Vec2 *)v12;
  v11.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6360), (StageActor *)a1, &v11);
  FIELD_U32(a1, 6532) = 0;
  FIELD_U32(a1, 6536) = 0;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6360));
  v8 = *((_DWORD *)v5 + 2);
  v9 = *((_DWORD *)v5 + 3);
  FIELD_U32(a1, 120) = v8;
  FIELD_U32(a1, 124) = v9;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = v8;
  FIELD_U32(a1, 136) = v9;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = 0;
  sub_60645448(a1 + 6104, a1 + 108, FIELD_F32(a1, 6816));
  return 1;
}
