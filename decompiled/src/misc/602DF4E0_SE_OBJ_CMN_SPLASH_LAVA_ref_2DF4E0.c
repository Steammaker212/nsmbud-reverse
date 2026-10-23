/* SE_OBJ_CMN_SPLASH_LAVA_ref_2DF4E0
 * address: 0x602DF4E0   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char *__fastcall SE_OBJ_CMN_SPLASH_LAVA_ref_2DF4E0(int a1)
{
  const char *result; // r0
  float v3; // s16
  float v4; // s0
  float v5; // s2
  bool v6; // cc
  int v7; // r5
  bool v8; // cc
  float v9; // [sp+4h] [bp-3Ch] BYREF
  float v10; // [sp+8h] [bp-38h]
  int v11; // [sp+Ch] [bp-34h]
  const char *v12; // [sp+10h] [bp-30h] BYREF
  float v13; // [sp+14h] [bp-2Ch] BYREF
  Vec2 out; // [sp+18h] [bp-28h] BYREF
  Vec3 position; // [sp+20h] [bp-20h] BYREF

  ((void (__fastcall *)(const char **, float *, int, _DWORD))checkLiquidCollisions)(
    &v12,
    &v13,
    a1 + 108,
    FIELD_U8(a1, 86));
  result = v12;
  if ( v12 )
  {
    result = v12 - 3;
    if ( (unsigned int)(v12 - 3) <= 1 )
    {
      v3 = v13;
      v4 = FIELD_F32(a1, 588);
      v5 = FIELD_F32(a1, 112);
      v6 = v4 <= v13;
      if ( v4 >= v13 )
        v6 = v13 <= v5;
      if ( v6 )
      {
        v8 = v5 <= v13;
        if ( v5 >= v13 )
          v8 = v13 <= v4;
        if ( !v8 )
        {
          v9 = FIELD_F32(a1, 108);
          v10 = v13;
          return (const char *)TileMgr_splashRelated(TileMgr_instance, &v9, 19);
        }
      }
      else
      {
        v9 = FIELD_F32(a1, 108);
        v10 = v13;
        v11 = 1170939904;
        position.x = v9;
        position.y = v13;
        TileMgr_splashRelated(TileMgr_instance, &position, 18);
        position.x = v9;
        position.y = v3;
        v7 = Global_BasicSoundActor2;
        mapPositionToScreen(&out, &position);
        BasicSoundActor2_play(v7, "SE_OBJ_CMN_SPLASH_LAVA", &out.x, 0);
        return createWaterSplash((sead_ListNode *)dword_60C99CDC);
      }
    }
  }
  return result;
}
