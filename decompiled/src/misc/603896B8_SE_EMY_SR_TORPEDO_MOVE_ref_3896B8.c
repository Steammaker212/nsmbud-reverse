/* SE_EMY_SR_TORPEDO_MOVE_ref_3896B8
 * address: 0x603896B8   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_SR_TORPEDO_MOVE_ref_3896B8(int a1)
{
  float32x2_t v1; // d8
  unsigned int v3; // r0
  int v4; // r5
  float *v5; // r1
  float v6; // s8
  float v7; // s0
  float v8; // s4
  float v9; // s8
  float v10; // s2
  float v11; // s4
  float v12; // s2
  int v13; // r0
  int v14; // r1
  int v15; // r2
  float v16; // s2
  float v17; // s6
  float v18; // s0
  float v19; // s2
  float v20; // r1
  int v21; // r5
  int v22; // r6
  float32x2_t v23; // d0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v4 = a1 + 156;
  v3 = FIELD_U32(a1, 156);
  v5 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v6 = (float)(v3 & 0xFFFFFF);
  v7 = fabsf(*(float *)(v4 - 36)) * (float)(v5[2] + (float)((float)(v6 * v5[3]) * 0.000000059605));
  *(float *)(v4 - 36) = v7;
  v8 = v6 * v5[1];
  v9 = fabsf(v7);
  v10 = *v5 + (float)(v8 * 0.000000059605);
  v11 = -(float)(v9 * v10);
  v12 = v9 * v10;
  *(float *)(v4 - 32) = v11;
  if ( !FIELD_U8(v4, 5898) )
    FIELD_F32(a1, 120) = v7 * 0.5;
  FIELD_F32(a1, 124) = v12 * -0.5;
  CollisionActor__handleSpeed((CollisionActor *)a1);
  position.x = 3.7616e-37;
  out.x = 1.6718e-38;
  sub_608322C0((int *)v4, (int *)(a1 + 8256), (signed int *)&position, (signed int *)&out);
  v13 = FIELD_U32(a1, 8256);
  v14 = FIELD_U32(a1, 156) - v13;
  if ( v14 < 0 )
    v14 = v13 - FIELD_U32(a1, 156);
  if ( v14 < 11930465 )
  {
    FIELD_U32(a1, 156) = v13;
    FIELD_U8(a1, 8288) = 0;
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C96D8C);
  }
  position.x = 2.0;
  out.x = 9.404e-38;
  moveValueTo((int *)(a1 + 160), (int *)&position, (int *)&out);
  FIELD_U32(a1, 80) = (unsigned int)(FIELD_U32(a1, 156) + 0x40000000) > 0x80000000;
  v15 = FIELD_U32(a1, 6680) + 0x4000000;
  FIELD_U32(a1, 6680) = v15;
  FIELD_U32(a1, 164) -= 0x4000000;
  if ( v15 >= 0x20000000 )
    FIELD_U32(a1, 6680) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 644))(a1);
  v16 = FIELD_F32(a1, 112) - FIELD_F32(a1, 588);
  v17 = FIELD_F32(a1, 108) - FIELD_F32(a1, 584);
  v18 = v16 * v16;
  v19 = FIELD_F32(a1, 116) - FIELD_F32(a1, 592);
  v1.n64_f32[0] = sqrtf((float)(v18 + (float)(v17 * v17)) + (float)(v19 * v19));
  v20 = FIELD_F32(a1, 112);
  v21 = FIELD_U32(a1, 8);
  v22 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v20;
  mapPositionToScreen(&out, &position);
  v23.n64_u32[0] = 1036831949;
  return SE_EMY_LIFT_LINE_MOVE_ref_2(
           v22,
           "SE_EMY_SR_TORPEDO_MOVE",
           v21,
           &out,
           (int)(float)(vmax_f32(v1, v23).n64_f32[0] * 50.0),
           0);
}
