/* SE_EMY_SR_TORPEDO_MOVE_ref_389424
 * address: 0x60389424   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_SR_TORPEDO_MOVE_ref_389424(int a1)
{
  float32x2_t v1; // d8
  unsigned int v3; // r0
  float *v4; // r1
  float v5; // s8
  float v6; // s0
  float v7; // s4
  float v8; // s8
  float v9; // s2
  float v10; // s4
  float v11; // s2
  float v12; // s0
  int v13; // r2
  float v14; // s2
  float v15; // s6
  float v16; // s0
  float v17; // s2
  float v18; // r1
  int v19; // r5
  int v20; // r6
  float32x2_t v21; // d0
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v3 = FIELD_U32(a1, 156);
  v4 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v5 = (float)(v3 & 0xFFFFFF);
  v6 = fabsf(FIELD_F32(a1, 120)) * (float)(v4[2] + (float)((float)(v5 * v4[3]) * 0.000000059605));
  FIELD_F32(a1, 120) = v6;
  v7 = v5 * v4[1];
  v8 = fabsf(v6);
  v9 = *v4 + (float)(v7 * 0.000000059605);
  v10 = -(float)(v8 * v9);
  v11 = v8 * v9;
  FIELD_F32(a1, 124) = v10;
  if ( !FIELD_U8(a1, 6054) )
    FIELD_F32(a1, 120) = v6 * 0.5;
  FIELD_F32(a1, 124) = v11 * -0.5;
  v12 = CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( sub_6038BDC4(a1, v12) == 1 )
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C96D6C);
  position.x = 2.0;
  out.x = 9.404e-38;
  moveValueTo((int *)(a1 + 160), (int *)&position, (int *)&out);
  FIELD_U32(a1, 80) = (unsigned int)(FIELD_U32(a1, 156) + 0x40000000) > 0x80000000;
  v13 = FIELD_U32(a1, 6680) + 0x4000000;
  FIELD_U32(a1, 6680) = v13;
  FIELD_U32(a1, 164) -= 0x4000000;
  if ( v13 >= 0x20000000 )
    FIELD_U32(a1, 6680) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 644))(a1);
  v14 = FIELD_F32(a1, 112) - FIELD_F32(a1, 588);
  v15 = FIELD_F32(a1, 108) - FIELD_F32(a1, 584);
  v16 = v14 * v14;
  v17 = FIELD_F32(a1, 116) - FIELD_F32(a1, 592);
  v1.n64_f32[0] = sqrtf((float)(v16 + (float)(v15 * v15)) + (float)(v17 * v17));
  v18 = FIELD_F32(a1, 112);
  v19 = FIELD_U32(a1, 8);
  v20 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v18;
  mapPositionToScreen(&out, &position);
  v21.n64_u32[0] = 1036831949;
  return SE_EMY_LIFT_LINE_MOVE_ref_2(
           v20,
           "SE_EMY_SR_TORPEDO_MOVE",
           v19,
           &out,
           (int)(float)(vmax_f32(v1, v21).n64_f32[0] * 50.0),
           0);
}
