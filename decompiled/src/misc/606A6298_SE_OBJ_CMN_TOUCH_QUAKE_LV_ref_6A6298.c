/* SE_OBJ_CMN_TOUCH_QUAKE_LV_ref_6A6298
 * address: 0x606A6298   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_TOUCH_QUAKE_LV_ref_6A6298(int a1)
{
  int result; // r0
  float v3; // r1
  int v4; // r5
  int v5; // r6
  _BYTE *v6; // r5
  float v7; // s18
  float v8; // s16
  float v9; // s4
  float v10; // s2
  int v11; // r0
  float v12; // s0
  float v13; // s4
  float v14; // s2
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  if ( FIELD_U8(a1, 6785) )
    goto LABEL_2;
  v6 = (_BYTE *)(a1 + 6784);
  if ( !FIELD_U8(a1, 6784) )
  {
    sub_606D9058(a1);
    goto LABEL_3;
  }
  v7 = FIELD_F32(a1, 108);
  v8 = FIELD_F32(a1, 112);
  sub_606D9058(a1);
  v9 = FIELD_F32(a1, 108);
  v10 = FIELD_F32(a1, 6780);
  v11 = 1;
  if ( v7 >= v9 )
  {
    v12 = v7 - v10;
    if ( (float)(v7 - v10) >= v9 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v12 = v7 + v10;
  if ( (float)(v7 + v10) > v9 )
  {
LABEL_12:
    v12 = FIELD_F32(a1, 108);
    v11 = 0;
  }
LABEL_13:
  v13 = FIELD_F32(a1, 112);
  if ( v8 >= v13 )
  {
    v14 = v8 - v10;
    if ( v14 >= v13 )
    {
LABEL_19:
      FIELD_F32(a1, 108) = v12;
      FIELD_F32(a1, 112) = v14;
      goto LABEL_20;
    }
  }
  else
  {
    v14 = v8 + v10;
    if ( v14 <= v13 )
      goto LABEL_19;
  }
  FIELD_F32(a1, 108) = v12;
  if ( !v11 )
  {
    *v6 = 0;
    goto LABEL_3;
  }
LABEL_20:
  if ( *v6 )
LABEL_2:
    FIELD_U8(a1, 6112) = 1;
LABEL_3:
  result = FIELD_U8(a1, 6112);
  if ( FIELD_U8(a1, 6112) )
  {
    v3 = FIELD_F32(a1, 112);
    v4 = FIELD_U32(a1, 8);
    v5 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v3;
    mapPositionToScreen(&out, &position);
    return SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v5, "SE_OBJ_CMN_TOUCH_QUAKE_LV", v4, &out, 0);
  }
  return result;
}
