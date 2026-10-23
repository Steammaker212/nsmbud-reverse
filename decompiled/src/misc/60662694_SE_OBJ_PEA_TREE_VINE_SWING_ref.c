/* SE_OBJ_PEA_TREE_VINE_SWING_ref
 * address: 0x60662694   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PEA_TREE_VINE_SWING_ref(int result)
{
  int v1; // r2
  int v2; // r1
  int v3; // r1
  int v4; // r3
  int v5; // r3
  _BYTE *v6; // r3
  int v7; // r2
  int v8; // r4
  float v9; // r1
  float v10; // r0
  Vec2 v11; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v1 = FIELD_U8(result, 7220);
  v2 = FIELD_U8(result, 7224);
  FIELD_U8(result, 7220) = v2;
  v3 = v1 == 0 && v2 != 0;
  if ( !FIELD_U8(result, 7221) )
  {
    v4 = FIELD_U8(result, 7225);
    if ( FIELD_U8(result, 7225) )
      v4 = 1;
    v3 |= v4;
  }
  FIELD_U8(result, 7221) = FIELD_U8(result, 7225);
  if ( !FIELD_U8(result, 7222) )
  {
    v5 = FIELD_U8(result, 7226);
    if ( FIELD_U8(result, 7226) )
      v5 = 1;
    v3 |= v5;
  }
  FIELD_U8(result, 7222) = FIELD_U8(result, 7226);
  v6 = (_BYTE *)(result + 7223);
  v7 = FIELD_U8(result, 7227);
  if ( !FIELD_U8(result, 7223) )
  {
    *v6 = v7;
    if ( !(v3 | (v7 != 0)) )
      return result;
    goto LABEL_13;
  }
  *v6 = v7;
  if ( v3 )
  {
LABEL_13:
    FIELD_U32(result, 7176) = 20;
    FIELD_U32(result, 7180) = 0;
    FIELD_U32(result, 7184) = 0;
    FIELD_U32(result, 7188) = 0;
    FIELD_U8(result, 7192) = 1;
    v8 = Global_BasicSoundActor2;
    v9 = FIELD_F32(result, 108);
    v10 = FIELD_F32(result, 112);
    position.x = v9;
    position.y = v10;
    mapPositionToScreen(&v11, &position);
    return BasicSoundActor2_play(v8, "SE_OBJ_PEA_TREE_VINE_SWING", &v11.x, 0);
  }
  return result;
}
