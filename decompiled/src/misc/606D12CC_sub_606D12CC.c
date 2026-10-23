/* sub_606D12CC
 * address: 0x606D12CC   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D12CC(int a1)
{
  float *v2; // r6
  float v3; // s0
  float v4; // s0
  ColliderBase *v5; // r5
  float v6; // s4
  float v8[2]; // [sp+8h] [bp-40h] BYREF
  SolidOnTopColliderInfo info; // [sp+10h] [bp-38h] BYREF
  float v10[8]; // [sp+28h] [bp-20h] BYREF

  v2 = (float *)(a1 + 6612);
  v3 = (float)((FIELD_U32(a1, 24) >> 5) & 0xF8) + 4.0;
  v10[0] = -v3;
  v10[1] = 0.0;
  v10[2] = v3;
  v10[3] = 0.0;
  v4 = FIELD_F32(a1, 6612);
  info.field_0 = 0.0;
  *(float *)&info.field_4 = v4 * 0.5;
  info.field_8 = 0;
  info.field_C = 0.0;
  info.points = (Vec2 *)v10;
  info.rotation = FIELD_U32(a1, 164);
  v5 = (ColliderBase *)(a1 + 6160);
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6160), (StageActor *)a1, &info);
  sub_60160630(v5, 2);
  v6 = *v2;
  v8[0] = FIELD_F32(a1, 6608) + 64.0;
  v8[1] = v6 + 64.0;
  sub_6069AFA0(a1 + 6616, a1 + 108, (_DWORD *)(a1 + 492), v8, v5);
  FIELD_U8(a1, 6656) = 1;
  return 6656;
}
