/* SE_OBJ_WOOD_BOX_BREAK_ref
 * address: 0x60708938   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall SE_OBJ_WOOD_BOX_BREAK_ref(int a1, int a2)
{
  float *result; // r0
  int v3; // r4
  float v4; // r1
  float v5; // r0
  float v6; // r0
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  result = *(float **)(a2 + 64);
  if ( result )
  {
    v3 = Global_BasicSoundActor1;
    v4 = result[27];
    if ( *((_DWORD *)result + 1751) == 1 )
    {
      v5 = result[28];
      position.x = v4;
      position.y = v5;
      mapPositionToScreen(&out, &position);
      return (float *)sub_60813810(v3, (int)"SE_EMY_CMN_TOUCH_HARD", (int)&out, 1, 0);
    }
    else
    {
      v6 = result[28];
      position.x = v4;
      position.y = v6;
      mapPositionToScreen(&out, &position);
      return (float *)sub_60813810(v3, (int)"SE_OBJ_WOOD_BOX_BREAK", (int)&out, 1, 0);
    }
  }
  return result;
}
