/* SE_BOSS_KOOPAHAND_PUNCH_SIGN_ref
 * address: 0x60686AE8   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KOOPAHAND_PUNCH_SIGN_ref(int a1)
{
  float v2; // s2
  float v3; // s0
  float v4; // s2
  TileCheck *v5; // r0
  int v6; // r1
  int v7; // r5
  TileCheck_Result out; // [sp+8h] [bp-A0h] BYREF
  TileCheck position; // [sp+30h] [bp-78h] BYREF
  TileCheck_Param v11; // [sp+7Ch] [bp-2Ch] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-20h] BYREF
  Vec2 a3; // [sp+90h] [bp-18h] BYREF

  PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, a1 + 7688);
  sub_60687C18(a1, 2);
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 7628);
  FIELD_U32(a1, 7660) = -1031798784;
  FIELD_U32(a1, 7664) = 1115684864;
  FIELD_F32(a1, 7668) = (float)(v3 - v2) + -112.0;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, (CollisionMgr_Sensor *)(a1 + 7660), 0, 0);
  FIELD_U32(a1, 3204) |= 0x8000u;
  FIELD_U32(a1, 3200) |= 0x40000000u;
  FIELD_U32(a1, 7636) = FIELD_U32(dword_60CC6484, 248);
  FIELD_U8(a1, 7675) = 0;
  FIELD_U8(a1, 7676) = 0;
  FIELD_U16(a1, 7678) = 0;
  FIELD_U16(a1, 7680) = 200;
  v4 = FIELD_F32(a1, 112);
  a3.x = FIELD_F32(a1, 108);
  positionOffset.x = a3.x;
  a3.y = v4;
  *(_WORD *)&v11.field_0 = 1;
  positionOffset.y = v4 + -100.0;
  v11.field_2 = FIELD_U8(a1, 86);
  v11.field_3 = FIELD_U8(a1, 87);
  v11.field_4 = 0;
  v11.field_8 = 0;
  v5 = TileCheck_ctor(&position, &v11);
  out.field_C = 0;
  out.field_10 = 0;
  if ( TileCheck_check(v5, &out, &a3, &positionOffset, 15) == 1 )
    FIELD_F32(a1, 7648) = out.field_8;
  v6 = FIELD_U32(a1, 7628);
  v7 = Global_BasicSoundActor2;
  *(_DWORD *)&position.field_0 = FIELD_U32(a1, 7624);
  position.field_4 = v6;
  mapPositionToScreen((Vec2 *)&out, (Vec3 *)&position);
  return BasicSoundActor2_play(v7, "SE_BOSS_KOOPAHAND_PUNCH_SIGN", (float *)&out.field_0, 0);
}
