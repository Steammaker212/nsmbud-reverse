/* sub_606E5E10
 * address: 0x606E5E10   size: 888   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E5E10(int a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r7
  unsigned int v4; // r6
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int *v8; // r8
  int v9; // r11
  char **v10; // r10
  int v11; // r5
  int v12; // t1
  int v13; // r0
  int (__fastcall *v14)(int, float32x4_t *); // r2
  unsigned int v15; // t1
  float *v16; // r1
  float v17; // s8
  float v18; // s10
  float v19; // s14
  float v20; // s4
  float v21; // s0
  int32x4_t v22; // q10
  int32x4_t v23; // q12
  int8x16_t v24; // q10
  int32x4_t v25; // q15
  float32x4_t v26; // q9
  int8x16_t v27; // q12
  int8x16_t v28; // q8
  int v30; // [sp+28h] [bp-128h]
  _BYTE v31[12]; // [sp+2Ch] [bp-124h] BYREF
  float32x4_t v32; // [sp+38h] [bp-118h]
  float32x4_t v33; // [sp+48h] [bp-108h]
  float32x4_t v34; // [sp+58h] [bp-F8h]
  float32x2_t v35; // [sp+68h] [bp-E8h]
  unsigned int v36; // [sp+70h] [bp-E0h]
  int v37; // [sp+74h] [bp-DCh]
  float32x2_t v38; // [sp+78h] [bp-D8h]
  int32x2_t v39; // [sp+80h] [bp-D0h]
  float32x2_t v40; // [sp+88h] [bp-C8h]
  int32x2_t v41; // [sp+90h] [bp-C0h]
  float32x4_t v42; // [sp+98h] [bp-B8h] BYREF
  float32x4_t v43; // [sp+A8h] [bp-A8h]
  float32x4_t v44; // [sp+B8h] [bp-98h]
  float32x2_t v45; // [sp+C8h] [bp-88h] BYREF
  int v46; // [sp+D0h] [bp-80h]
  int v47; // [sp+D4h] [bp-7Ch]
  int v48; // [sp+D8h] [bp-78h]
  int v49; // [sp+DCh] [bp-74h]
  int v50; // [sp+E0h] [bp-70h]
  int v51; // [sp+E4h] [bp-6Ch]
  int v52; // [sp+E8h] [bp-68h]
  int v53; // [sp+ECh] [bp-64h]
  int v54; // [sp+F0h] [bp-60h]
  int v55; // [sp+F4h] [bp-5Ch]
  unsigned int v56; // [sp+F8h] [bp-58h] BYREF
  unsigned int v57; // [sp+FCh] [bp-54h] BYREF
  unsigned int v58; // [sp+100h] [bp-50h] BYREF
  int32x4x2_t v59; // 0:q15.16,16:q2.16

  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = FIELD_U32(a1, 112);
  v6 = FIELD_U32(a1, 116);
  v7 = FIELD_U32(a1, 108);
  v58 = v4;
  v57 = v3;
  v56 = v2;
  v45.n64_u64[0] = 1065353216;
  v46 = 0;
  v48 = 0;
  v49 = 1065353216;
  v50 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 1065353216;
  v47 = v7;
  v51 = v5;
  v55 = v6;
  Mtx34_rotateY(&v45, &v57);
  Mtx34_rotateX(&v45, &v56);
  Mtx34_rotateZ(&v45, &v58);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 732) + 60))(**(_DWORD **)(a1 + 732), &v45);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 732) + 68))(**(_DWORD **)(a1 + 732), a1 + 144);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 732) + 52))(**(_DWORD **)(a1 + 732));
  v8 = (int *)(a1 + 2240);
  v9 = 0;
  v10 = off_60C1F6F8;
  do
  {
    v12 = *v8++;
    v11 = v12;
    v13 = **(_DWORD **)(a1 + 732);
    v14 = *(int (__fastcall **)(int, float32x4_t *))(*(_DWORD *)v13 + 84);
    v15 = (unsigned int)*v10++;
    v42.n128_u64[0] = __PAIR64__(v15, &sead__SafeStringBase__vtable);
    v30 = v14(v13, &v42);
    (*(void (__fastcall **)(_DWORD, int, float32x4_t *, _BYTE *))(***(_DWORD ***)(a1 + 732) + 100))(
      **(_DWORD **)(a1 + 732),
      v30,
      &v42,
      v31);
    v16 = (float *)((char *)sinLutTable + (((unsigned int)(v11 - v9) >> 20) & 0xFF0));
    v17 = (float)((v11 - v9) & 0xFFFFFF) * 0.000000059605;
    v18 = (float)(0.024541 * 0.0) + 0.0;
    v19 = (float)(-0.00030118 * 0.0) + 1.0;
    v20 = v16[2] + (float)(v17 * v16[3]);
    v21 = *v16 + (float)(v17 * v16[1]);
    v35.n64_f32[0] = v19 * v20;
    v38.n64_f32[0] = v19 * v21;
    v40.n64_f32[0] = -v18;
    v35.n64_f32[1] = (float)((float)(v18 * v18) * v20) - (float)(v19 * v21);
    v38.n64_f32[1] = (float)(v19 * v20) + (float)((float)(v18 * v18) * v21);
    v40.n64_f32[1] = v18 * v19;
    *(float *)&v36 = (float)(v18 * (float)(v19 * v20)) + (float)(v18 * v21);
    v39.n64_f32[0] = (float)(v18 * (float)(v19 * v21)) - (float)(v18 * v20);
    v41.n64_f32[0] = v19 * v19;
    v37 = 0;
    v39.n64_u32[1] = 0;
    v41.n64_u32[1] = 0;
    v22 = vdupq_lane_s32((int32x2_t)v36, 1);
    v23 = vdupq_lane_s32(v39, 1);
    v24 = vextq_s8((int8x16_t)vzipq_s32(v22, v22).val, (int8x16_t)0LL, 0xCu);
    v25 = vdupq_lane_s32(v41, 1);
    v26 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v42, -v18), v43, v40, 1), v44, v41, 0);
    v27 = vextq_s8((int8x16_t)vzipq_s32(v23, v23).val, (int8x16_t)0LL, 0xCu);
    v59 = vzipq_s32(v25, v25);
    v28 = vextq_s8(v59.val[0], (int8x16_t)0LL, 0xCu);
    v32 = vaddq_f32(
            vextq_s8(v24, v24, 4u),
            vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v42, v19 * v20), v43, v35, 1), v44, (float32x2_t)v36, 0));
    v33 = vaddq_f32(
            vextq_s8(v27, v27, 4u),
            vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v42, v19 * v21), v43, v38, 1), v44, v39, 0));
    v34 = vaddq_f32(vextq_s8(v28, v28, 4u), v26);
    (*(void (__fastcall **)(_DWORD, int, float, float, float, float, float, float, float, float, float, float, float, float))(***(_DWORD ***)(a1 + 732) + 96))(
      **(_DWORD **)(a1 + 732),
      v30,
      v19 * v21,
      v38.n64_f32[1],
      v39.n64_f32[0],
      0.0,
      v40.n64_f32[0],
      v40.n64_f32[1],
      v19 * v19,
      0.0,
      v59.val[1].n128_f32[0],
      v59.val[1].n128_f32[1],
      v59.val[1].n128_f32[2],
      v59.val[1].n128_f32[3]);
    v9 = v11;
  }
  while ( v10 < (char **)&unk_60C1F738 );
  return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 732) + 56))(**(_DWORD **)(a1 + 732));
}
