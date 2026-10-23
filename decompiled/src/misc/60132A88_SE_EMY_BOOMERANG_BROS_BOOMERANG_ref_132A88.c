/* SE_EMY_BOOMERANG_BROS_BOOMERANG_ref_132A88
 * address: 0x60132A88   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_BOOMERANG_BROS_BOOMERANG_ref_132A88(int a1)
{
  float v2; // s18
  float v3; // s16
  float v4; // s20
  float v5; // s0
  float v6; // s0
  float v7; // s0
  float v8; // s2
  float v9; // s4
  int v10; // r5
  int v11; // r6
  int v12; // r0
  Vec2 out; // [sp+8h] [bp-40h] BYREF
  Vec3 position; // [sp+10h] [bp-38h] BYREF

  FIELD_U32(a1, 156) += FIELD_U32(a1, 6520);
  v2 = FIELD_F32(a1, 6528) - FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 6532) - FIELD_F32(a1, 116);
  v4 = FIELD_F32(a1, 6524) - FIELD_F32(a1, 108);
  v5 = sqrtf((float)((float)(v2 * v2) + (float)(v4 * v4)) + (float)(v3 * v3));
  if ( v5 > 0.0 )
  {
    v6 = 1.0 / v5;
    v3 = v3 * v6;
    v2 = v2 * v6;
    v4 = v4 * v6;
  }
  v7 = FIELD_F32(a1, 88);
  v8 = FIELD_F32(a1, 108) + (float)(v4 * v7);
  FIELD_F32(a1, 108) = v8;
  v9 = FIELD_F32(a1, 112) + (float)(v2 * v7);
  FIELD_F32(a1, 112) = v9;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + (float)(v3 * v7);
  v10 = Global_BasicSoundActor1;
  v11 = FIELD_U32(a1, 8);
  position.x = v8;
  position.y = v9;
  mapPositionToScreen(&out, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v10, "SE_EMY_BOOMERANG_BROS_BOOMERANG", v11, &out, 0);
  v12 = FIELD_U32(a1, 6512);
  FIELD_U32(a1, 6512) = v12 - 1;
  if ( v12 <= 1 )
  {
    FIELD_U8(a1, 19) = 1;
  }
  else
  {
    FIELD_F32(a1, 144) = FIELD_F32(a1, 144) - FIELD_F32(a1, 6500);
    FIELD_F32(a1, 148) = FIELD_F32(a1, 148) - FIELD_F32(a1, 6504);
    FIELD_F32(a1, 152) = FIELD_F32(a1, 152) - FIELD_F32(a1, 6508);
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
}
