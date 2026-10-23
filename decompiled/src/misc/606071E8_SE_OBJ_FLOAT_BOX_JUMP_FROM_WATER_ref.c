/* SE_OBJ_FLOAT_BOX_JUMP_FROM_WATER_ref
 * address: 0x606071E8   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_FLOAT_BOX_JUMP_FROM_WATER_ref(int a1, float a2, float a3, double a4, float32x2_t a5)
{
  float v6; // s0
  float v7; // s0
  int v8; // r2
  float v9; // r1
  float v10; // r1
  int v11; // r5
  Vec2 v13; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v6 = FIELD_F32(a1, 124);
  if ( v6 >= 0.1 )
  {
    a5.n64_u32[0] = 1080704369;
    FIELD_U8(a1, 7264) = 1;
    *(float *)&a4 = v6 + 0.3;
    FIELD_U32(a1, 7260) = vmin_f32(*(float32x2_t *)&a4, a5).n64_u32[0];
  }
  v7 = v6 * 0.942;
  FIELD_F32(a1, 124) = v7;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 100) = -1106289623;
  if ( FIELD_S32(a1, 7256) <= 0 )
  {
    FIELD_U32(a1, 7256) = 16;
    v8 = FIELD_U32(a1, 108);
    v9 = FIELD_F32(a1, 6800);
    LODWORD(position.x) = v8;
    if ( v7 <= 1.5 )
      v8 = 27;
    position.y = v9;
    if ( v7 > 1.5 )
      v8 = 5;
    TileMgr_splashRelated(TileMgr_instance, &position, v8);
  }
  v10 = FIELD_F32(a1, 112);
  v11 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v10;
  mapPositionToScreen(&v13, &position);
  return BasicSoundActor2_play(v11, "SE_OBJ_FLOAT_BOX_JUMP_FROM_WATER", &v13.x, 0);
}
