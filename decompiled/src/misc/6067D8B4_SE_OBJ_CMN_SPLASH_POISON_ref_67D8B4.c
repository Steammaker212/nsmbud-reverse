/* SE_OBJ_CMN_SPLASH_POISON_ref_67D8B4
 * address: 0x6067D8B4   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_OBJ_CMN_SPLASH_POISON_ref_67D8B4(int a1)
{
  int v2; // r5
  Vec3 v4; // [sp+4h] [bp-34h] BYREF
  int v5; // [sp+10h] [bp-28h] BYREF
  float v6; // [sp+14h] [bp-24h] BYREF
  Vec2 out; // [sp+18h] [bp-20h] BYREF
  Vec3 position; // [sp+20h] [bp-18h] BYREF

  ((void (__fastcall *)(int *, float *, int, _DWORD))checkLiquidCollisions)(
    &v5,
    &v6,
    a1 + 308,
    FIELD_U8(a1, 340));
  if ( v5 == 5 )
  {
    v4.x = FIELD_F32(a1, 308);
    v4.y = v6;
    v4.z = 6500.0;
    if ( !FIELD_U8(a1, 339) )
    {
      FIELD_U8(a1, 339) = 1;
      createWaterSplash((sead_ListNode *)dword_60C99CDC);
      position.x = v4.x;
      position.y = v4.y;
      TileMgr_splashRelated(TileMgr_instance, &position, 21);
      v2 = Global_BasicSoundActor2;
      position.x = v4.x;
      position.y = v4.y;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v2, "SE_OBJ_CMN_SPLASH_POISON", &out.x, 0);
    }
    return EffectWrapper_update((EffectWrapper *)(a1 + 44), 918, &v4, 0, 0);
  }
  else
  {
    FIELD_U8(a1, 339) = 0;
    return 0;
  }
}
