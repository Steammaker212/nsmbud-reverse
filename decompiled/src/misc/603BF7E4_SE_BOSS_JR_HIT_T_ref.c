/* SE_BOSS_JR_HIT_T_ref
 * address: 0x603BF7E4   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_HIT_T_ref(StageActor *a1, int a2, int a3)
{
  int result; // r0
  float v7; // r1
  int v8; // r2
  float v9; // r1
  int v10; // r2
  float *v11; // r1
  float *v12; // r2
  float v13; // s0
  float v14; // s4
  float v15; // s0
  float y; // r1
  int v17; // r5
  float v18; // [sp+0h] [bp-48h] BYREF
  float v19; // [sp+4h] [bp-44h]
  int v20; // [sp+8h] [bp-40h]
  float v21; // [sp+10h] [bp-38h] BYREF
  float v22; // [sp+14h] [bp-34h]
  int v23; // [sp+18h] [bp-30h]
  Vec3 v24; // [sp+1Ch] [bp-2Ch] BYREF
  Vec2 out; // [sp+28h] [bp-20h] BYREF
  Vec3 position; // [sp+30h] [bp-18h] BYREF

  result = StageActor__isOffScreen(a1);
  if ( !result )
  {
    v7 = FIELD_F32(a2, 112);
    v8 = FIELD_U32(a2, 116);
    v21 = FIELD_F32(a2, 108);
    v22 = v7;
    v23 = v8;
    v9 = FIELD_F32(a3, 112);
    v10 = FIELD_U32(a3, 116);
    v18 = FIELD_F32(a3, 108);
    v19 = v9;
    v20 = v10;
    v11 = &v21;
    v12 = &v21;
    v13 = fabsf(v21 - v18);
    if ( (float)(v21 - v18) >= 0.0 )
      v12 = &v18;
    v14 = *v12 + (float)(v13 * 0.5);
    v15 = fabsf(v22 - v19);
    v24.x = v14;
    if ( (float)(v22 - v19) >= 0.0 )
      v11 = &v18;
    v24.y = v11[1] + (float)(v15 * 0.5);
    v24.z = 4500.0;
    y = FIELD_U32(a1, 0x6C).y;
    v17 = Global_BasicSoundActor1;
    position.x = FIELD_U32(a1, 0x6C).x;
    position.y = y;
    mapPositionToScreen(&out, &position);
    BasicSoundActor1_playSound(v17, "SE_BOSS_JR_HIT_T", (int)&out, 0);
    return EffectData_create(548, &v24, 0, 0);
  }
  return result;
}
