/* SE_OBJ_PNGN_ICE_LAND_ref_6D6FF4
 * address: 0x606D6FF4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PNGN_ICE_LAND_ref_6D6FF4(int a1)
{
  int result; // r0
  float v3; // r1
  int v4; // r5
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  sub_605CC95C(a1);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    result = a1 + 6849;
    if ( !FIELD_U8(a1, 6849) )
    {
      *(_BYTE *)result = 1;
      v3 = FIELD_F32(a1, 112);
      v4 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v3;
      mapPositionToScreen(&v5, &position);
      return BasicSoundActor2_play(v4, "SE_OBJ_PNGN_ICE_LAND", &v5.x, 0);
    }
  }
  return result;
}
