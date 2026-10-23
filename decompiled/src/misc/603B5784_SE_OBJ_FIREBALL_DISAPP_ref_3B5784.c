/* SE_OBJ_FIREBALL_DISAPP_ref_3B5784
 * address: 0x603B5784   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_OBJ_FIREBALL_DISAPP_ref_3B5784(int a1, int a2, int a3)
{
  int v6; // r5
  int v7; // r0
  float v8; // r1
  float v9; // r0
  Vec2 v11; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  if ( FIELD_U32(a1, 11804) )
  {
    v6 = Global_BasicSoundActor2;
    v7 = FIELD_U32(a3, 64);
    v8 = FIELD_F32(v7, 108);
    v9 = FIELD_F32(v7, 112);
    position.x = v8;
    position.y = v9;
    mapPositionToScreen(&v11, &position);
    BasicSoundActor2_play(v6, "SE_OBJ_FIREBALL_DISAPP", &v11.x, 0);
    return 0;
  }
  else
  {
    sub_602A3EFC(a1 + 6344, 24, 0.0625);
    return Enemy__collisionFireball((float *)a1, a2, a3);
  }
}
