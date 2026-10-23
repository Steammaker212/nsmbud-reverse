/* SE_OBJ_COIN_POP_UP_ref_3
 * address: 0x606B24E8   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_COIN_POP_UP_ref_3(int result)
{
  bool v1; // zf
  int v2; // r4
  float v3; // r1
  float v4; // r0
  Vec2 v5; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  FIELD_U32(result, 40) = 2;
  FIELD_U8(result, 53) = 1;
  v1 = FIELD_U8(result, 65) == 0;
  if ( FIELD_U8(result, 65) )
    v1 = (FIELD_U8(result, 64) & 1) == 0;
  if ( !v1 && FIELD_S32(result, 44) >= 1 )
  {
    v2 = Global_BasicSoundActor2;
    v3 = *(float *)result;
    v4 = FIELD_F32(result, 4);
    position.x = v3;
    position.y = v4;
    mapPositionToScreen(&v5, &position);
    return BasicSoundActor2_play(v2, "SE_OBJ_COIN_POP_UP", &v5.x, 0);
  }
  return result;
}
