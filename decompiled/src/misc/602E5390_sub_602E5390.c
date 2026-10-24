/* sub_602E5390
 * address: 0x602E5390   size: 896   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602E5390(int a1)
{
  char v1; // r12
  float v3; // s16
  float v4; // s0
  float v5; // r0
  EnemyFreezeMgr_Info *p_info; // r1
  int v7; // r7
  _DWORD **v8; // r11
  char *v9; // r6
  EnemyFreezeMgr_Info *v10; // r4
  EnemyFreezeMgr_Info *v11; // r8
  int v12; // t1
  float v13; // s0
  float v14; // s2
  int v15; // r11
  char *v16; // r10
  EnemyFreezeMgr_Info *v17; // r6
  int v18; // t1
  int32x4_t v19; // q9
  float32x4_t v20; // q8
  int32x4_t v21; // q11
  int32x4_t v22; // q15
  float32x4_t v23; // q10
  float32x4_t v24; // q12
  int8x16_t v25; // q9
  float32x4_t v26; // q14
  int8x16_t v27; // q11
  float32x4_t v28; // q13
  float32x4_t v29; // q8
  int8x16_t v30; // q10
  float32x4_t v31; // q11
  float32x4_t v32; // q8
  int v34; // [sp+8h] [bp-1F8h]
  _DWORD **v35; // [sp+Ch] [bp-1F4h]
  float32x4_t v36; // [sp+50h] [bp-1B0h] BYREF
  float32x4_t v37; // [sp+60h] [bp-1A0h]
  float32x4_t v38; // [sp+70h] [bp-190h]
  EnemyFreezeMgr_Info info; // [sp+80h] [bp-180h] BYREF

  v3 = 0.0;
  info.settings = 4096;
  v4 = FIELD_F32(a1, 6380);
  v5 = FIELD_F32(a1, 6384);
  info.position.x = FIELD_F32(a1, 6376);
  info.position.y = v4 + -14.0;
  info.position.z = v5;
  info.scale.x = 1.4;
  info.scale.y = 1.4;
  info.scale.z = (float)(0.0 / 20.0) + 2.0;
  info.field_1C = 0;
  if ( ((unsigned int)algn_60C922DC & ~(1613648936 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60C922DC) )
  {
    dword_60C922D8 = 1052672;
    _cxa_guard_release((__guard *)algn_60C922DC);
  }
  p_info = &info;
  v7 = 0;
  v34 = a1;
  v8 = (_DWORD **)(a1 + 6300);
  v9 = &byte_60AFEC9C;
  do
  {
    v10 = &p_info[v7];
    v11 = p_info;
    v12 = (unsigned __int8)*v9++;
    p_info[v7 + 1].settings = dword_60C922D8;
    (*(void (__fastcall **)(_DWORD, int, float32x4_t *))(*(_DWORD *)**v8 + 108))(**v8, v12, &v36);
    v13 = v37.n128_f32[3];
    v14 = v38.n128_f32[3];
    v3 = v3 + 1.0;
    ++v7;
    p_info = v11;
    LODWORD(FIELD_F32(v10 + (1) * 32, 0x4)) = v36.n128_u32[3];
    FIELD_F32(v10 + (1) * 32, 0x8) = v13 + -11.0;
    FIELD_F32(v10 + (1) * 32, 0xC) = v14 - v3;
    FIELD_F32(v10 + (1) * 32, 0x10) = 0.95;
    FIELD_F32(v10 + (1) * 32, 0x14) = 0.95;
    FIELD_F32(v10 + (1) * 32, 0x18) = (float)((float)(v3 * 4.0) / 20.0) + 0.95;
    FIELD_U32(v10 + (1) * 32, 0x1C) = 0;
  }
  while ( v7 != 6 );
  v35 = v8;
  v15 = 0;
  v16 = &byte_60AFECA2;
  do
  {
    v17 = &p_info[v15];
    v18 = (unsigned __int8)*v16++;
    p_info[v15 + 7].settings = dword_60C922D8;
    (*(void (__fastcall **)(_DWORD, int, float32x4_t *))(*(_DWORD *)**v35 + 108))(**v35, v18, &v36);
    v3 = v3 + 1.0;
    ++v15;
    p_info = v11;
    v19 = vdupq_lane_s32(*(int32x2_t *)&v36.n128_i8[8], 1);
    v20.n128_u64[0] = 1065353216;
    v20.n128_u64[1] = 0x4060000000000000LL;
    v21 = vdupq_lane_s32(*(int32x2_t *)&v37.n128_i8[8], 1);
    v22 = vdupq_lane_s32(*(int32x2_t *)&v38.n128_i8[8], 1);
    v23.n128_u64[0] = 0x3F80000000000000LL;
    v23.n128_u64[1] = 0;
    v24 = vmlaq_lane_f32(vmulq_n_f32(v20, v36.n128_f32[0]), v23, (float32x2_t)v36.n128_u64[0], 1);
    v25 = vextq_s8((int8x16_t)vzipq_s32(v19, v19).val, (int8x16_t)0LL, 0xCu);
    v26.n128_u64[0] = 0;
    v26.n128_u64[1] = 1065353216;
    v27 = vextq_s8((int8x16_t)vzipq_s32(v21, v21).val, (int8x16_t)0LL, 0xCu);
    v28 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v20, v37.n128_f32[0]), v23, (float32x2_t)v37.n128_u64[0], 1),
            v26,
            *(float32x2_t *)&v37.n128_i8[8],
            0);
    v29 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v20, v38.n128_f32[0]), v23, (float32x2_t)v38.n128_u64[0], 1),
            v26,
            *(float32x2_t *)&v38.n128_i8[8],
            0);
    v30 = vextq_s8((int8x16_t)vzipq_s32(v22, v22).val, (int8x16_t)0LL, 0xCu);
    v31 = vaddq_f32(vextq_s8(v27, v27, 4u), v28);
    v36 = vaddq_f32(vextq_s8(v25, v25, 4u), vmlaq_lane_f32(v24, v26, *(float32x2_t *)&v36.n128_i8[8], 0));
    v37 = v31;
    v32 = vaddq_f32(vextq_s8(v30, v30, 4u), v29);
    v38 = v32;
    LODWORD(FIELD_F32(v17 + (7) * 32, 0x4)) = v36.n128_u32[3];
    FIELD_F32(v17 + (7) * 32, 0x8) = v31.n128_f32[3] + -11.5;
    FIELD_F32(v17 + (7) * 32, 0xC) = v32.n128_f32[3] - v3;
    FIELD_F32(v17 + (7) * 32, 0x10) = 1.15;
    FIELD_F32(v17 + (7) * 32, 0x14) = 1.15;
    FIELD_F32(v17 + (7) * 32, 0x18) = (float)((float)(v3 * 4.0) / 20.0) + 2.0;
    FIELD_U32(v17 + (7) * 32, 0x1C) = 0;
  }
  while ( v15 != 2 );
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(v34 + 6152), &info, 9u);
}
