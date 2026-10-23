/* SE_OBJ_CMN_TOUCH_QUAKE_LV_ref_6AB0AC
 * address: 0x606AB0AC   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_TOUCH_QUAKE_LV_ref_6AB0AC(int a1, int a2)
{
  int v4; // r6
  float v5; // s0
  int v6; // r0
  bool v7; // zf
  int v8; // r6
  float v9; // s0
  int v10; // r0
  bool v11; // zf
  int result; // r0
  float v13; // r1
  int v14; // r5
  int v15; // r6
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  if ( FIELD_U8(a1, 6115) )
  {
    v4 = FIELD_U8(a1, 29);
    sub_606C3FD8(a2, v4);
    v6 = FIELD_U8(a1, 6140);
    v7 = v6 == 4;
    if ( v6 != 4 )
      v7 = v6 == 2;
    if ( v7 )
      v5 = -v5;
    if ( FIELD_U8(a1, 6141) )
    {
      FIELD_F32(a1, 112) = v5 + FIELD_F32(a1, 6128);
      FIELD_F32(a1, 496) = FIELD_F32(a1, 6120) - v5;
    }
    else
    {
      FIELD_F32(a1, 108) = v5 + FIELD_F32(a1, 6124);
      FIELD_F32(a1, 492) = FIELD_F32(a1, 6116) - v5;
    }
    result = sub_606C4030(a2, a1 + 6132, v4);
    if ( result == 1 )
    {
LABEL_21:
      v13 = FIELD_F32(a1, 112);
      v14 = FIELD_U32(a1, 8);
      v15 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v13;
      mapPositionToScreen(&out, &position);
      return SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v15, "SE_OBJ_CMN_TOUCH_QUAKE_LV", v14, &out, 0);
    }
  }
  else
  {
    v8 = FIELD_U8(a1, 29);
    v9 = sub_606AE1F0(a2, v8);
    v10 = FIELD_U8(a1, 6140);
    v11 = v10 == 4;
    if ( v10 != 4 )
      v11 = v10 == 2;
    if ( v11 )
      v9 = -v9;
    if ( FIELD_U8(a1, 6141) )
    {
      FIELD_F32(a1, 112) = v9 + FIELD_F32(a1, 6128);
      FIELD_F32(a1, 496) = FIELD_F32(a1, 6120) - v9;
    }
    else
    {
      FIELD_F32(a1, 108) = v9 + FIELD_F32(a1, 6124);
      FIELD_F32(a1, 492) = FIELD_F32(a1, 6116) - v9;
    }
    result = sub_606AE248(a2, a1 + 6132, v8);
    if ( result == 1 )
      goto LABEL_21;
  }
  return result;
}
