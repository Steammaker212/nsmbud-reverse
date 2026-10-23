/* SE_OBJ_FIREBALL_DISAPP_ref_3CC4B0
 * address: 0x603CC4B0   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_OBJ_FIREBALL_DISAPP_ref_3CC4B0(int a1, int a2, int a3)
{
  int v6; // r1
  _DWORD *v7; // r7
  int v8; // r0
  float v9; // s0
  int v10; // r1
  int v11; // r5
  int v12; // r0
  float v13; // r1
  float v14; // r0
  Vec2 v16; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v7 = (_DWORD *)(a1 + 6300);
  v6 = FIELD_U32(a1, 6300);
  v8 = a1 + 6332;
  if ( v6 )
  {
    v9 = 0.025;
    v10 = 16;
  }
  else
  {
    v9 = 0.0625;
    v10 = 24;
  }
  sub_602A3EFC(v8, v10, v9);
  if ( *v7 == 1 )
  {
    v11 = Global_BasicSoundActor2;
    v12 = FIELD_U32(a3, 64);
    v13 = FIELD_F32(v12, 108);
    v14 = FIELD_F32(v12, 112);
    position.x = v13;
    position.y = v14;
    mapPositionToScreen(&v16, &position);
    BasicSoundActor2_play(v11, "SE_OBJ_FIREBALL_DISAPP", &v16.x, 0);
    return 0;
  }
  else
  {
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    return Enemy__collisionFireball((float *)a1, a2, a3);
  }
}
