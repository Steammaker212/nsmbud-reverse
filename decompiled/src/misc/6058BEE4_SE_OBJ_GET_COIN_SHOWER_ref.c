/* SE_OBJ_GET_COIN_SHOWER_ref
 * address: 0x6058BEE4   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_GET_COIN_SHOWER_ref(int a1)
{
  _WORD *v2; // r0
  __int16 v3; // r1
  int v4; // t1
  __int16 v5; // r1
  float v6; // r1
  int v7; // r5
  Vec2 v9; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v4 = FIELD_U16(a1, 7490);
  v2 = (_WORD *)(a1 + 7490);
  v3 = v4;
  if ( v4 )
  {
    v5 = v3 - 1;
    *v2 = v5;
    if ( v5 == 1 )
    {
      FIELD_U8(a1, 535) = 1;
      if ( (FIELD_U8(a1, 20) & 7) == 0 )
      {
        v6 = FIELD_F32(a1, 112);
        v7 = Global_BasicSoundActor2;
        position.x = FIELD_F32(a1, 108);
        position.y = v6;
        mapPositionToScreen(&v9, &position);
        BasicSoundActor2_play(v7, "SE_OBJ_GET_COIN_SHOWER", &v9.x, 0);
      }
    }
  }
  return sub_6058BC4C(a1);
}
