/* SE_BOSS_KOOPAHAND_ARM_MOVE_ref
 * address: 0x60686750   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KOOPAHAND_ARM_MOVE_ref(int a1)
{
  float v2; // r1
  float v3; // r0
  TileCheck *v4; // r0
  int v5; // r5
  int v6; // r0
  TileCheck_Result out; // [sp+8h] [bp-A0h] BYREF
  TileCheck position; // [sp+30h] [bp-78h] BYREF
  TileCheck_Param v10; // [sp+7Ch] [bp-2Ch] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-20h] BYREF
  Vec2 a3; // [sp+90h] [bp-18h] BYREF

  sub_60687C18(a1, 1);
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 108);
  *(_WORD *)&v10.field_0 = 1;
  a3.x = v3;
  a3.y = v2;
  positionOffset.x = v3;
  positionOffset.y = v2 + -100.0;
  v10.field_2 = FIELD_U8(a1, 86);
  v10.field_3 = FIELD_U8(a1, 87);
  v10.field_4 = 0;
  v10.field_8 = 0;
  v4 = TileCheck_ctor(&position, &v10);
  out.field_C = 0;
  out.field_10 = 0;
  if ( TileCheck_check(v4, &out, &a3, &positionOffset, 15) == 1 )
    FIELD_F32(a1, 7648) = out.field_8;
  FIELD_U32(a1, 124) = -1073741824;
  FIELD_U16(a1, 7656) = 0;
  FIELD_U8(a1, 7658) = 1;
  v5 = Global_BasicSoundActor2;
  v6 = FIELD_U32(a1, 7628);
  *(_DWORD *)&position.field_0 = FIELD_U32(a1, 7624);
  position.field_4 = v6;
  mapPositionToScreen((Vec2 *)&out, (Vec3 *)&position);
  return BasicSoundActor2_play(v5, "SE_BOSS_KOOPAHAND_ARM_MOVE", (float *)&out.field_0, 0);
}
