/* sub_605EB9CC
 * address: 0x605EB9CC   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605EB9CC(int a1)
{
  float v2; // s0
  float v3; // s2
  SolidOnTopColliderInfo v5; // [sp+0h] [bp-48h] BYREF
  _DWORD v6[12]; // [sp+18h] [bp-30h] BYREF

  obj_chikuwa_block_ref(a1);
  v2 = FIELD_F32(a1, 108) + 8.0;
  FIELD_F32(a1, 108) = v2;
  v3 = FIELD_F32(a1, 112) + -16.0;
  FIELD_F32(a1, 112) = v3;
  FIELD_F32(a1, 6564) = v2;
  FIELD_F32(a1, 6568) = v3;
  FIELD_U32(a1, 6572) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B05C28, 3);
  FIELD_U32(a1, 3200) |= 0x40000000u;
  v5.field_0 = 0.0;
  v6[0] = -1056964608;
  v6[1] = 0;
  v6[2] = 1090519040;
  v6[3] = 0;
  v5.field_4 = 1098907648;
  v5.field_8 = 0;
  v5.field_C = 0.0;
  v5.points = (Vec2 *)v6;
  v5.rotation = FIELD_U32(a1, 164);
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6104), (StageActor *)a1, &v5);
  sub_60160630((ColliderBase *)(a1 + 6104), 2);
  ColliderBase_setType((ColliderBase *)(a1 + 6104), 16);
  FIELD_U32(a1, 6468) = 1090519040;
  FIELD_U32(a1, 6416) = sub_605EC52C;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
  sub_605EC190(a1);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1090519040;
  FIELD_U32(a1, 500) = 1107296256;
  FIELD_U32(a1, 504) = 1107296256;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB1D50);
  sub_605EC37C(a1);
  return 1;
}
