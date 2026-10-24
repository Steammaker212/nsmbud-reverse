/* SE_EMY_KALON_REVIVAL_HEAD_ref_2DF630
 * address: 0x602DF630   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall SE_EMY_KALON_REVIVAL_HEAD_ref_2DF630(int a1)
{
  ModelAnimation *result; // r0
  _DWORD *v3; // r7
  int v4; // r4
  ModelWrapper *v5; // t1
  int v6; // r5
  int v7; // r6
  float v8; // r0
  int v9; // r1
  float v10; // r1
  int v11; // r5
  int v12; // r6
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  v3 = (_DWORD *)(a1 + 6152);
  result = *(ModelAnimation **)(a1 + 6152);
  if ( result == (ModelAnimation *)1 )
  {
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6100));
    v10 = FIELD_F32(a1, 112);
    v11 = FIELD_U32(a1, 8);
    v12 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v10;
    mapPositionToScreen(&out, &position);
    return (ModelAnimation *)j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v12, "SE_EMY_KALON_REVIVAL_HEAD", v11, &out, 0);
  }
  else if ( result == (ModelAnimation *)2 )
  {
    v5 = *(ModelWrapper **)(a1 + 6100);
    v4 = a1 + 6100;
    ModelWrapper_updateAnims(v5);
    v6 = *(_DWORD *)(v4 - 6092);
    v7 = Global_BasicSoundActor1;
    v8 = *(float *)(v4 - 5988);
    position.x = *(float *)(v4 - 5992);
    position.y = v8;
    mapPositionToScreen(&out, &position);
    j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v7, "SE_EMY_KALON_REVIVAL_HEAD", v6, &out, 0);
    result = **(ModelAnimation ***)(*(_DWORD *)v4 + 12);
    v9 = FIELD_U32(result + (1) * 28, 0x0);
    if ( (v9 & 0x30) != 0 )
    {
      FIELD_F32(result, 0x14) = 0.0;
      FIELD_U32(result + (1) * 28, 0x0) = v9 | 2;
      result = sub_6041838C((ModelAnimation *)&FIELD_U32(result, 0x4));
      *v3 = 0;
    }
  }
  return result;
}
