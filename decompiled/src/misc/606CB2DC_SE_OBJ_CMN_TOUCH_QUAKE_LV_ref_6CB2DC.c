/* SE_OBJ_CMN_TOUCH_QUAKE_LV_ref_6CB2DC
 * address: 0x606CB2DC   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_TOUCH_QUAKE_LV_ref_6CB2DC(int a1)
{
  int v2; // r0
  float v3; // r1
  int v4; // r6
  int v5; // r5
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  FIELD_U8(a1, 6620) = 0;
  if ( FIELD_U8(a1, 6621) )
  {
    v2 = FIELD_U32(dword_60C99DD4, 1052);
    FIELD_F32(a1, 6612) = (float)(*(float *)((char *)sinLutTable + ((v2 << 8) & 0xF00))
                                  + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v2 << 8) & 0xF00)) * 0.0)
                                          * 0.000000059605))
                          * 0.5;
    FIELD_F32(a1, 6616) = (float)(*(float *)((char *)sinLutTable + ((v2 << 9) & 0xE00))
                                  + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v2 << 9) & 0xE00)) * 0.0)
                                          * 0.000000059605))
                          * 0.5;
    v3 = FIELD_F32(a1, 112);
    v4 = FIELD_U32(a1, 8);
    v5 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v3;
    mapPositionToScreen(&out, &position);
    SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v5, "SE_OBJ_CMN_TOUCH_QUAKE_LV", v4, &out, 0);
  }
  else
  {
    FIELD_U32(a1, 6612) = 0;
    FIELD_U32(a1, 6616) = 0;
  }
  return sub_606CB408(a1);
}
