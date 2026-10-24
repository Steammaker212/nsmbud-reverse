/* sub_60967650
 * address: 0x60967650   size: 988   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60967650(int a1, int a2, float32x2_t *a3, int a4, int a5, int a6)
{
  unsigned __int8 *v10; // r0
  int32x2_t v11; // d5
  int32x2_t v12; // d3
  int32x4_t v13; // q11
  int32x4_t v14; // q12
  int32x2_t v15; // d1
  int32x4_t v16; // q3
  int8x16_t v17; // q14
  float32x4_t v18; // q11
  float32x4_t v19; // q13
  float32x4_t v20; // q15
  int8x16_t v21; // q2
  int8x16_t v22; // q1
  float32x4_t v23; // q12
  float32x4_t v24; // q13
  float32x4_t v25; // q14
  int32x4_t v26; // q3
  float32x4_t v27; // q8
  int8x16_t v28; // q10
  float v29; // s0
  float v30; // s2
  float v31; // s4
  float v32; // s6
  float v33; // s8
  float v34; // s10
  float v35; // s12
  float v36; // s14
  float v37; // s1
  float v38; // s3
  float v39; // s5
  float v40; // s7
  float v41; // s9
  float v42; // s11
  float v43; // s13
  float v44; // s15
  int v45; // r0
  float *v46; // r1
  float v47; // s18
  float v48; // s20
  float v49; // s22
  float v50; // s26
  float v51; // s24
  float v52; // s18
  int v54; // [sp+0h] [bp-1B8h]
  int v55; // [sp+0h] [bp-1B8h]
  int v56; // [sp+0h] [bp-1B8h]
  int v57; // [sp+0h] [bp-1B8h]
  int v58; // [sp+0h] [bp-1B8h]
  int v59; // [sp+0h] [bp-1B8h]
  int v60; // [sp+0h] [bp-1B8h]
  int v61; // [sp+0h] [bp-1B8h]
  int v62; // [sp+0h] [bp-1B8h]
  int v63; // [sp+0h] [bp-1B8h]
  int v64; // [sp+0h] [bp-1B8h]
  int v65; // [sp+0h] [bp-1B8h]
  int v66; // [sp+4h] [bp-1B4h]
  int v67; // [sp+4h] [bp-1B4h]
  int v68; // [sp+4h] [bp-1B4h]
  int v69; // [sp+4h] [bp-1B4h]
  int v70; // [sp+4h] [bp-1B4h]
  int v71; // [sp+4h] [bp-1B4h]
  int v72; // [sp+4h] [bp-1B4h]
  int v73; // [sp+4h] [bp-1B4h]
  int v74; // [sp+4h] [bp-1B4h]
  int v75; // [sp+4h] [bp-1B4h]
  int v76; // [sp+4h] [bp-1B4h]
  int v77; // [sp+4h] [bp-1B4h]
  int v78[16]; // [sp+8h] [bp-1B0h] BYREF
  int v79[3]; // [sp+48h] [bp-170h] BYREF
  int v80[3]; // [sp+54h] [bp-164h] BYREF
  int v81[3]; // [sp+60h] [bp-158h] BYREF
  int v82[3]; // [sp+6Ch] [bp-14Ch] BYREF
  int v83[3]; // [sp+78h] [bp-140h] BYREF
  int v84[3]; // [sp+84h] [bp-134h] BYREF
  int v85[3]; // [sp+90h] [bp-128h] BYREF
  int v86[3]; // [sp+9Ch] [bp-11Ch] BYREF
  _OWORD v87[4]; // [sp+A8h] [bp-110h] BYREF
  _BYTE v88[208]; // [sp+E8h] [bp-D0h] BYREF
  float32x4_t v89; // 0:q9.16

  v10 = (unsigned __int8 *)sub_6090B350((int)v88);
  sub_6090B4B0(v10, a1);
  sub_6093AC5C(a1, a4, a5);
  v11.n64_u64[0] = FIELD_U64(a3 + (1) * 8, 0x0)[0];
  v12.n64_u64[0] = FIELD_U64(a3 + (3) * 8, 0x0)[0];
  v89 = *(float32x4_t *)(a2 + 16);
  v13 = vdupq_lane_s32(v11, 1);
  v14 = vdupq_lane_s32(v12, 1);
  v15.n64_u64[0] = FIELD_U64(a3 + (5) * 8, 0x0)[0];
  v16 = vdupq_lane_s32(v15, 1);
  v17 = vextq_s8((int8x16_t)vzipq_s32(v13, v13).val, (int8x16_t)0, 0xCu);
  v18 = *(float32x4_t *)(a2 + 32);
  v19 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(a3, 0x0)[0]), v89, (float32x2_t)FIELD_U64(a3, 0x0)[0], 1),
          v18,
          v11,
          0);
  v20 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(a3 + (2) * 8, 0x0)[0]), v89, a3[2], 1), v18, v12, 0);
  v21 = vextq_s8((int8x16_t)vzipq_s32(v14, v14).val, (int8x16_t)0, 0xCu);
  v22 = vextq_s8((int8x16_t)vzipq_s32(v16, v16).val, (int8x16_t)0, 0xCu);
  v23 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(a3 + (4) * 8, 0x0)[0]), v89, a3[4], 1), v18, v15, 0);
  v24 = vaddq_f32(vextq_s8(v17, v17, 4u), v19);
  v25 = vextq_s8(v21, v21, 4u);
  *(float32x2_t *)&v21.n128_i8[8] = a3[7];
  v26 = vdupq_lane_s32(*(int32x2_t *)&v21.n128_i8[8], 1);
  v27 = vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(a3 + (6) * 8, 0x0)[0]), v89, a3[6], 1);
  v87[0] = v24;
  v87[1] = vaddq_f32(v25, v20);
  v28 = vextq_s8((int8x16_t)vzipq_s32(v26, v26).val, (int8x16_t)0, 0xCu);
  v87[2] = vaddq_f32(vextq_s8(v22, v22, 4u), v23);
  v87[3] = vaddq_f32(vextq_s8(v28, v28, 4u), vmlaq_lane_f32(v27, v18, *(float32x2_t *)&v21.n128_i8[8], 0));
  v79[0] = -1082130432;
  v79[1] = 1065353216;
  v79[2] = -1082130432;
  v80[0] = -1082130432;
  v80[1] = -1082130432;
  v80[2] = -1082130432;
  v81[0] = 1065353216;
  v81[1] = -1082130432;
  v81[2] = -1082130432;
  v82[0] = 1065353216;
  v82[1] = 1065353216;
  v82[2] = -1082130432;
  v83[0] = -1082130432;
  v83[1] = 1065353216;
  v83[2] = 1065185444;
  v84[0] = -1082130432;
  v84[1] = -1082130432;
  v84[2] = 1065185444;
  v85[0] = 1065353216;
  v85[1] = -1082130432;
  v85[2] = 1065185444;
  v86[0] = 1065353216;
  v86[1] = 1065353216;
  v86[2] = 1065185444;
  sub_6042E898((float *)v78, (float *)v87);
  v29 = *(float *)&v78[11];
  v30 = *(float *)&v78[10];
  v31 = *(float *)&v78[9];
  v32 = *(float *)&v78[8];
  v33 = *(float *)&v78[7];
  v34 = *(float *)&v78[6];
  v35 = *(float *)&v78[5];
  v36 = *(float *)&v78[4];
  v37 = *(float *)v78;
  v38 = *(float *)&v78[1];
  v39 = *(float *)&v78[2];
  v40 = *(float *)&v78[3];
  v41 = *(float *)&v78[15];
  v42 = *(float *)&v78[14];
  v43 = *(float *)&v78[13];
  v44 = *(float *)&v78[12];
  v45 = 0;
  do
  {
    v46 = (float *)&v79[v45];
    v45 += 3;
    v47 = v46[1];
    v48 = v46[2];
    v49 = v41 + (float)((float)((float)(v47 * v43) + (float)(*v46 * v44)) + (float)(v48 * v42));
    v50 = (float)(v47 * (float)(v35 / v49)) + (float)(*v46 * (float)(v36 / v49));
    v51 = (float)((float)(v47 * (float)(v38 / v49)) + (float)(*v46 * (float)(v37 / v49)))
        + (float)(v48 * (float)(v39 / v49));
    v52 = (float)(v47 * (float)(v31 / v49)) + (float)(*v46 * (float)(v32 / v49));
    *v46 = (float)(v40 / v49) + v51;
    v46[1] = (float)(v33 / v49) + (float)(v50 + (float)(v48 * (float)(v34 / v49)));
    v46[2] = (float)(v29 / v49) + (float)(v52 + (float)(v48 * (float)(v30 / v49)));
  }
  while ( v45 != 24 );
  sub_6093AD38(a1, v79, v83, a6, v54, v66, v78[0]);
  sub_6093AD38(a1, v79, v80, (int)&dword_60B45D0C, v55, v67, v78[0]);
  sub_6093AD38(a1, v83, v84, a6, v56, v68, v78[0]);
  sub_6093AD38(a1, v80, v84, a6, v57, v69, v78[0]);
  sub_6093AD38(a1, v80, v81, (int)&dword_60B45D0C, v58, v70, v78[0]);
  sub_6093AD38(a1, v84, v85, a6, v59, v71, v78[0]);
  sub_6093AD38(a1, v81, v85, a6, v60, v72, v78[0]);
  sub_6093AD38(a1, v81, v82, (int)&dword_60B45D0C, v61, v73, v78[0]);
  sub_6093AD38(a1, v85, v86, a6, v62, v74, v78[0]);
  sub_6093AD38(a1, v82, v86, a6, v63, v75, v78[0]);
  sub_6093AD38(a1, v82, v79, (int)&dword_60B45D0C, v64, v76, v78[0]);
  return sub_6093AD38(a1, v86, v83, a6, v65, v77, v78[0]);
}
