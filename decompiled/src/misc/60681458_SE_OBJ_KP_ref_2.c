/* SE_OBJ_KP_ref_2
 * address: 0x60681458   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall SE_OBJ_KP_ref_2(int a1)
{
  int v2; // r0
  float v3; // r1
  int v4; // r5
  const char *v5; // r1
  float v6; // s0
  float result; // s0
  Vec2 v8; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  FIELD_U32(a1, 124) = FIELD_U32(a1, 7472);
  v2 = FIELD_U32(a1, 7508);
  if ( v2 == 1 )
  {
    v6 = FIELD_F32(a1, 112) + 128.0;
    v4 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&v8, &position);
    v5 = "SE_OBJ_KP_PUNCH_RETURN";
  }
  else
  {
    if ( v2 )
      goto LABEL_6;
    v3 = FIELD_F32(a1, 112);
    v4 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v3;
    mapPositionToScreen(&v8, &position);
    v5 = "SE_OBJ_KP_HAND_RETURN";
  }
  BasicSoundActor2_play(v4, v5, &v8.x, 0);
LABEL_6:
  if ( FIELD_U8(a1, 7597) )
  {
    result = FIELD_F32(a1, 124) + FIELD_F32(a1, 124);
    FIELD_F32(a1, 124) = result;
  }
  return result;
}
