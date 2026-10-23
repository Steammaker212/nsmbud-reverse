/* SE_EMY_KK_SHIKO_ref_2
 * address: 0x6063D030   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KK_SHIKO_ref_2(int a1)
{
  int result; // r0
  float v3; // r1
  int v4; // r5
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  result = Actor__getProfileId((Actor *)a1);
  if ( result == 99 )
  {
    result = FIELD_U8(a1, 6186);
    if ( FIELD_U8(a1, 6186) )
    {
      v3 = FIELD_F32(a1, 112);
      v4 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v3;
      mapPositionToScreen(&v5, &position);
      return BasicSoundActor1_playSound(v4, "SE_EMY_KK_SHIKO", (int)&v5, 0);
    }
  }
  return result;
}
