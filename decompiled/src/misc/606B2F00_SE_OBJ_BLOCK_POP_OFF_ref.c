/* SE_OBJ_BLOCK_POP_OFF_ref
 * address: 0x606B2F00   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BLOCK_POP_OFF_ref(int result)
{
  float v1; // s3
  float v2; // s8
  float v3; // s6
  float v4; // s1
  float v5; // s10
  float v6; // s5
  float v7; // s12
  int v8; // r4
  float v9; // r1
  float v10; // r0
  Vec2 v11; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  if ( (FIELD_U8(result, 64) & 2) != 0 )
  {
    if ( FIELD_U8(dword_60CC6D8C, 17) && FIELD_F32(result, 84) == 0.0 )
    {
      v1 = FIELD_F32(result, 168);
      v2 = FIELD_F32(result, 136);
      v3 = FIELD_F32(result, 132);
      v4 = FIELD_F32(result, 164);
      v5 = FIELD_F32(result, 140);
      v6 = FIELD_F32(result, 172);
      v7 = FIELD_F32(result, 144);
      v8 = Global_BasicSoundActor2;
      position.x = FIELD_F32(result, 128)
                 + (float)((float)((float)(v1 * FIELD_F32(result, 120)) + (float)(v4 * FIELD_F32(result, 116)))
                         + (float)(v6 * FIELD_F32(result, 124)));
      position.y = v7 + (float)((float)((float)(v1 * v2) + (float)(v4 * v3)) + (float)(v6 * v5));
      mapPositionToScreen(&v11, &position);
    }
    else
    {
      v8 = Global_BasicSoundActor2;
      v9 = *(float *)result;
      v10 = FIELD_F32(result, 4);
      position.x = v9;
      position.y = v10;
      mapPositionToScreen(&v11, &position);
    }
    return BasicSoundActor2_play(v8, "SE_OBJ_BLOCK_POP_OFF", &v11.x, 0);
  }
  return result;
}
