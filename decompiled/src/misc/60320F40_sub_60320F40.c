/* sub_60320F40
 * address: 0x60320F40   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60320F40(int a1, int a2)
{
  int v2; // r5
  int ProfileId; // r0
  int v4; // r4
  float v5; // r1
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  v2 = FIELD_U32(a2, 64);
  if ( v2 )
  {
    ProfileId = Actor__getProfileId(*(Actor **)(a2 + 64));
    v4 = Global_BasicSoundActor1;
    v5 = FIELD_F32(v2, 112);
    position.x = FIELD_F32(v2, 108);
    position.y = v5;
    if ( ProfileId == 631 )
    {
      mapPositionToScreen(&out, &position);
      sub_60813810(v4, (int)"SE_EMY_BH_BOMB", (int)&out, 0, 0);
    }
    else
    {
      mapPositionToScreen(&out, &position);
      sub_60813810(v4, (int)"SE_EMY_CMN_TOUCH_HARD", (int)&out, 1, 0);
    }
  }
}
