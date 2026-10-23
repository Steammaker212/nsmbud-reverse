/* sub_6096030C
 * address: 0x6096030C   size: 884   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6096030C(int a1, float *a2, _DWORD *a3)
{
  float32x2_t v3; // d4
  int32x2_t v4; // d5
  float32x2_t v5; // d0
  int32x2_t v6; // d1
  float32x4_t *v7; // r12
  float32x2_t *v8; // r3
  float32x2_t *v9; // r0
  int32x4_t v10; // q13
  int32x4_t v11; // q14
  int32x2_t v12; // d3
  int8x16_t v13; // q13
  float32x4_t v14; // q11
  int32x4_t v15; // q0
  float32x4_t v16; // q15
  int8x16_t v17; // q14
  int32x2_t v18; // d5
  float32x4_t v19; // q13
  float32x4_t v20; // q15
  int8x16_t v21; // q0
  float32x4_t v22; // q8
  int32x4_t v23; // q12
  float32x4_t v24; // q15
  float v25; // s6
  float32x4_t v26; // q8
  float v27; // s24
  float v28; // s26
  int8x16_t v29; // q9
  float32x4_t v30; // q12
  float v31; // s2
  float v32; // s28
  float v33; // s30
  int v34; // r3
  int v35; // r0
  int v36; // r5
  int v37; // r2
  int result; // r0
  float v39; // s8
  float v40; // s10
  float v41; // s12
  float v42; // s14
  float v43; // s1
  float v44; // s3
  unsigned __int64 v45; // kr00_8
  unsigned __int64 v46; // kr08_8
  float v47; // s13
  float v48; // s15
  float v49; // s16
  float v50; // s18
  float *v51; // r3
  float v52; // s19
  float v53; // s17
  float v54; // s21
  float v55; // s23
  float v56; // s27
  float v57; // s31
  float v58; // s19
  float v59; // s0
  float v60; // s31
  float v61; // s21
  float v62; // s17
  float v63; // s23
  float v64; // s19
  float v65; // s21
  unsigned __int64 v66; // [sp+0h] [bp-24h]
  _DWORD v67[3]; // [sp+8h] [bp-1Ch] BYREF
  int v68; // [sp+14h] [bp-10h]
  int v69; // [sp+18h] [bp-Ch]
  int v70; // [sp+1Ch] [bp-8h]
  int v71; // [sp+20h] [bp-4h]
  int v72; // [sp+24h] [bp+0h]
  int v73; // [sp+28h] [bp+4h]
  int v74; // [sp+2Ch] [bp+8h]
  int v75; // [sp+30h] [bp+Ch]
  int v76; // [sp+34h] [bp+10h]
  int v77; // [sp+38h] [bp+14h]
  int v78; // [sp+3Ch] [bp+18h]
  int v79; // [sp+40h] [bp+1Ch]
  int v80; // [sp+44h] [bp+20h]
  int v81; // [sp+48h] [bp+24h]
  int v82; // [sp+4Ch] [bp+28h]
  int v83; // [sp+50h] [bp+2Ch]
  int v84; // [sp+54h] [bp+30h]
  int v85; // [sp+58h] [bp+34h]
  int v86; // [sp+5Ch] [bp+38h]
  int v87; // [sp+60h] [bp+3Ch]
  int v88; // [sp+64h] [bp+40h]
  float32x4_t v89; // [sp+68h] [bp+44h]
  float32x4_t v90; // [sp+78h] [bp+54h]
  float32x4_t v91; // [sp+88h] [bp+64h]
  float32x4_t v92; // [sp+98h] [bp+74h]
  float32x4_t v93; // 0:q8.16
  float32x4_t v94; // 0:q12.16

  v3.n64_u64[0] = *(unsigned __int64 *)(a1 + 292);
  v4.n64_u64[0] = *(unsigned __int64 *)(a1 + 300);
  v5.n64_u64[0] = *(unsigned __int64 *)(a1 + 308);
  v6.n64_u64[0] = *(unsigned __int64 *)(a1 + 316);
  v7 = (float32x4_t *)(a1 + 276);
  v93 = *(float32x4_t *)(a1 + 244);
  v94 = *(float32x4_t *)(a1 + 260);
  v8 = (float32x2_t *)(a1 + 324);
  v9 = (float32x2_t *)(a1 + 340);
  v10 = vdupq_lane_s32(v4, 1);
  v11 = vdupq_lane_s32(v6, 1);
  v12.n64_u64[0] = v8[1].n64_u64[0];
  v13 = vextq_s8((int8x16_t)vzipq_s32(v10, v10).val, (int8x16_t)0, 0xCu);
  v14 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v93, v5.n64_f32[0]), v94, v5, 1), *v7, v6, 0);
  v15 = vdupq_lane_s32(v12, 1);
  v16 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v93, v3.n64_f32[0]), v94, v3, 1), *v7, v4, 0);
  v17 = vextq_s8((int8x16_t)vzipq_s32(v11, v11).val, (int8x16_t)0, 0xCu);
  v18.n64_u64[0] = v9[1].n64_u64[0];
  v19 = vaddq_f32(vextq_s8(v13, v13, 4u), v16);
  v20 = vmlaq_lane_f32(vmulq_n_f32(v93, FIELD_F32(v8, 0x0)[0]), v94, (float32x2_t)FIELD_U64(v8, 0x0)[0], 1);
  v21 = vextq_s8((int8x16_t)vzipq_s32(v15, v15).val, (int8x16_t)0, 0xCu);
  v22 = vmlaq_lane_f32(vmulq_n_f32(v93, FIELD_F32(v9, 0x0)[0]), v94, (float32x2_t)FIELD_U64(v9, 0x0)[0], 1);
  v23 = vdupq_lane_s32(v18, 1);
  v24 = vmlaq_lane_f32(v20, *v7, v12, 0);
  v25 = -3.4028e38;
  v26 = vmlaq_lane_f32(v22, *v7, v18, 0);
  v89 = v19;
  v27 = -3.4028e38;
  v28 = -3.4028e38;
  v90 = vaddq_f32(vextq_s8(v17, v17, 4u), v14);
  v29 = vextq_s8((int8x16_t)vzipq_s32(v23, v23).val, (int8x16_t)0, 0xCu);
  v30 = vextq_s8(v21, v21, 4u);
  v31 = 3.4028e38;
  v32 = 3.4028e38;
  v33 = 3.4028e38;
  v91 = vaddq_f32(v30, v24);
  v92 = vaddq_f32(vextq_s8(v29, v29, 4u), v26);
  v34 = a3[1];
  v35 = a3[2];
  v67[0] = *a3;
  v67[1] = v34;
  v67[2] = v35;
  v68 = a3[3];
  v69 = v34;
  v70 = v35;
  v36 = a3[5];
  v71 = v68;
  v72 = v34;
  v73 = v36;
  v74 = v67[0];
  v75 = v34;
  v76 = v36;
  v37 = a3[4];
  v77 = v67[0];
  v78 = v37;
  v79 = v35;
  v80 = v68;
  v81 = v37;
  v82 = v35;
  v83 = v68;
  v84 = v37;
  v85 = v36;
  v86 = v67[0];
  v87 = v37;
  v88 = v36;
  *a2 = 3.4028e38;
  a2[1] = 3.4028e38;
  a2[2] = 3.4028e38;
  a2[3] = -3.4028e38;
  a2[4] = -3.4028e38;
  a2[5] = -3.4028e38;
  result = 0;
  v39 = v91.n128_f32[1];
  v40 = v91.n128_f32[0];
  v41 = v90.n128_f32[3];
  v42 = v90.n128_f32[2];
  v43 = v90.n128_f32[1];
  v44 = v90.n128_f32[0];
  v45 = v89.n128_u64[0];
  v46 = v89.n128_u64[1];
  v47 = v92.n128_f32[3];
  v48 = v92.n128_f32[2];
  v49 = v92.n128_f32[1];
  v50 = v92.n128_f32[0];
  v66 = v91.n128_u64[1];
  do
  {
    v51 = (float *)&v67[result];
    v52 = *(float *)&v67[result + 1];
    v53 = *(float *)&v67[result];
    v54 = *(float *)&v67[result + 2];
    v55 = v47 + (float)((float)((float)(v52 * v49) + (float)(v53 * v50)) + (float)(v54 * v48));
    v56 = (float)((float)(v52 * (float)(v43 / v55)) + (float)(v53 * (float)(v44 / v55)))
        + (float)(v54 * (float)(v42 / v55));
    v57 = (float)(v52 * (float)(v39 / v55)) + (float)(v53 * (float)(v40 / v55));
    v58 = (float)(*((float *)&v46 + 1) / v55)
        + (float)((float)((float)(v52 * (float)(*((float *)&v45 + 1) / v55))
                        + (float)(v53 * (float)(*(float *)&v45 / v55)))
                + (float)(v54 * (float)(*(float *)&v46 / v55)));
    v59 = *((float *)&v66 + 1) / v55;
    *v51 = v58;
    v60 = v57 + (float)(v54 * (float)(*(float *)&v66 / v55));
    v61 = (float)(v41 / v55) + v56;
    v62 = -1.0;
    v63 = v59 + v60;
    v51[1] = v61;
    v51[2] = v59 + v60;
    if ( v58 >= -1.0 )
    {
      v62 = v58;
      if ( v58 > 1.0 )
        v62 = 1.0;
    }
    v64 = -1.0;
    *v51 = v62;
    if ( v61 >= -1.0 )
    {
      v64 = v61;
      if ( v61 > 1.0 )
        v64 = 1.0;
    }
    v65 = -1.0;
    v51[1] = v64;
    if ( v63 >= -1.0 )
    {
      v65 = v59 + v60;
      if ( v63 > 1.0 )
        v65 = 1.0;
    }
    v51[2] = v65;
    result += 3;
    if ( v33 > v62 )
    {
      *a2 = v62;
      v33 = v62;
    }
    if ( v32 > v64 )
    {
      a2[1] = v64;
      v32 = v64;
    }
    if ( v31 > v65 )
    {
      a2[2] = v65;
      v31 = v65;
    }
    if ( v28 < v62 )
    {
      a2[3] = v62;
      v28 = v62;
    }
    if ( v27 < v64 )
    {
      a2[4] = v64;
      v27 = v64;
    }
    if ( v25 < v65 )
    {
      v25 = v65;
      a2[5] = v65;
    }
  }
  while ( result != 24 );
  return result * 4;
}
