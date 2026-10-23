/* SE_OBJ_CMN_TOUCH_MOVE_LV_ref_2
 * address: 0x60610D90   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_TOUCH_MOVE_LV_ref_2(int a1)
{
  int v2; // r0
  int v3; // r0
  float *v4; // r5
  float v5; // r1
  int v6; // r5
  int v7; // r6
  float v8; // r1
  int v9; // r5
  int v10; // r6
  int result; // r0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v2 = FIELD_U32(a1, 1096);
  if ( v2 )
  {
    v3 = v2 - 1;
    FIELD_U32(a1, 1096) = v3;
    v4 = (float *)(a1 + 1100);
    if ( v3 )
    {
      ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 1100, 1.0, 0.1, 0.1, 0.001);
      v5 = FIELD_F32(a1, 112);
      v6 = FIELD_U32(a1, 8);
      v7 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v5;
      mapPositionToScreen(&out, &position);
      SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v7, "SE_OBJ_CMN_TOUCH_MOVE_LV", v6, &out, 0);
      goto LABEL_10;
    }
  }
  else
  {
    v4 = (float *)(a1 + 1100);
  }
  ((void (__fastcall *)(float *, float, float, float, float))loc_60832560)(v4, 0.0, 0.05, 0.05, 0.001);
  if ( *v4 == 0.0 )
  {
    FIELD_U32(a1, 1104) = 0;
  }
  else if ( *v4 > 0.3 )
  {
    v8 = FIELD_F32(a1, 112);
    v9 = FIELD_U32(a1, 8);
    v10 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v8;
    mapPositionToScreen(&out, &position);
    SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v10, "SE_OBJ_CMN_TOUCH_MOVE_LV", v9, &out, 0);
  }
LABEL_10:
  result = FIELD_U32(a1, 1104) + 0x40000000;
  FIELD_U32(a1, 1104) = result;
  return result;
}
