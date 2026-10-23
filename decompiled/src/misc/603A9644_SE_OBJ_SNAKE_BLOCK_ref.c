/* SE_OBJ_SNAKE_BLOCK_ref
 * address: 0x603A9644   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_SNAKE_BLOCK_ref(int result)
{
  float v1; // s0
  int v2; // r1
  float v3; // r0
  int v4; // r4
  const char *v5; // r1
  float v6; // r0
  float v7; // r0
  Vec2 v8; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v1 = FIELD_F32(result, 108);
  if ( v1 > FIELD_F32(dword_60CC6484, 24) && v1 < FIELD_F32(dword_60CC6484, 32) )
  {
    v2 = (FIELD_U32(result, 20) >> 26) & 3;
    if ( v2 == 1 )
    {
      v6 = FIELD_F32(result, 112);
      position.x = v1;
      position.y = v6;
      v4 = Global_BasicSoundActor2;
      mapPositionToScreen(&v8, &position);
      v5 = "SE_OBJ_SNAKE_BLOCK_M";
    }
    else if ( v2 == 2 )
    {
      v7 = FIELD_F32(result, 112);
      position.x = v1;
      position.y = v7;
      v4 = Global_BasicSoundActor2;
      mapPositionToScreen(&v8, &position);
      v5 = "SE_OBJ_SNAKE_BLOCK_L";
    }
    else
    {
      v3 = FIELD_F32(result, 112);
      position.x = v1;
      position.y = v3;
      v4 = Global_BasicSoundActor2;
      if ( v2 == 3 )
      {
        mapPositionToScreen(&v8, &position);
        v5 = "SE_OBJ_SNAKE_BLOCK_LL";
      }
      else
      {
        mapPositionToScreen(&v8, &position);
        v5 = "SE_OBJ_SNAKE_BLOCK";
      }
    }
    return BasicSoundActor2_play(v4, v5, &v8.x, 0);
  }
  return result;
}
