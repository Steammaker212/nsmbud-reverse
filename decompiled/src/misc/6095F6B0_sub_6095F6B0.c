/* sub_6095F6B0
 * address: 0x6095F6B0   size: 1100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095F6B0(
        int a1,
        int a2,
        int a3,
        int *a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  _QWORD *v15; // r9
  unsigned __int32 v16; // r4
  unsigned int v17; // r5
  unsigned int v18; // r6
  unsigned __int32 v19; // r7
  unsigned __int64 v20; // r4
  unsigned __int64 v21; // r6
  unsigned __int32 v22; // r3
  unsigned __int64 v23; // r4
  unsigned __int64 v24; // r6
  float32x4_t v25; // q12
  float32x4_t v26; // q13
  float32x4_t v27; // q9
  int result; // r0
  float v29; // s12
  float v30; // s1
  float v31; // s10
  float v32; // s14
  float v33; // s6
  float v34; // s8
  float v35; // s2
  float v36; // s4
  float v37; // s5
  float v38; // s3
  float v39; // s7
  float v40; // s9
  float v41; // s5
  float v42; // s16
  float v43; // s12
  float v44; // s10
  float v45; // s5
  float v46; // s11
  float v47; // s12
  float v48; // s1
  unsigned int v49; // s9
  float v50; // s5
  float v51; // s3
  float v52; // s8
  float v53; // s12
  float v54; // s6
  float v55; // s2
  float v56; // s8
  int v57; // r5
  int v58; // r7
  int v59; // r6
  float32x4_t v60; // q8
  float32x4_t v61; // q9
  float32x4_t v62; // q10
  float v63; // [sp+8h] [bp-C8h] BYREF
  float v64; // [sp+Ch] [bp-C4h]
  float v65; // [sp+10h] [bp-C0h]
  float v66; // [sp+14h] [bp-BCh]
  float v67; // [sp+18h] [bp-B8h]
  float v68; // [sp+1Ch] [bp-B4h]
  float32x2_t v69; // [sp+20h] [bp-B0h] BYREF
  float32x2_t v70; // [sp+28h] [bp-A8h]
  float32x2_t v71; // [sp+30h] [bp-A0h]
  float32x2_t v72; // [sp+38h] [bp-98h]
  float32x2_t v73; // [sp+40h] [bp-90h]
  float32x2_t v74; // [sp+48h] [bp-88h]
  float32x2_t v75; // [sp+50h] [bp-80h]
  float32x2_t v76; // [sp+58h] [bp-78h]
  float32x4_t v77; // [sp+60h] [bp-70h] BYREF
  float32x4_t v78; // [sp+70h] [bp-60h]
  float32x4_t v79; // [sp+80h] [bp-50h]
  float32x4_t v80; // [sp+90h] [bp-40h]
  float32x4_t v81; // 0:q9.16

  v15 = (_QWORD *)(a1 + 244);
  v16 = FIELD_U32(a1, 296);
  v17 = FIELD_U32(a1, 300);
  v18 = FIELD_U32(a1, 304);
  v19 = FIELD_U32(a1, 308);
  v77.n128_u32[0] = FIELD_U32(a1, 292);
  v77.n128_u32[1] = v16;
  v77.n128_u64[1] = __PAIR64__(v18, v17);
  v78.n128_u32[0] = v19;
  v20 = FIELD_U64(a1, 316);
  v21 = FIELD_U64(a1, 324);
  v78.n128_u32[1] = FIELD_U32(a1, 312);
  v78.n128_u64[1] = v20;
  v79.n128_u64[0] = v21;
  v22 = FIELD_U32(a1, 336);
  v23 = FIELD_U64(a1, 340);
  v24 = FIELD_U64(a1, 348);
  v79.n128_u32[2] = FIELD_U32(a1, 332);
  v79.n128_u32[3] = v22;
  v80.n128_u64[0] = v23;
  v80.n128_u64[1] = v24;
  if ( !a3
    && ((int (__fastcall *)(int, float32x2_t *, float32x4_t *, int, int))loc_60960DA8)(a1, &v69, &v77, a1 + 244, a2) == 1 )
  {
    a11 = v69.n64_f64[0];
    a12 = v70.n64_f64[0];
    v81 = v77;
    a5 = v75.n64_f64[0];
    a6 = v76.n64_f64[0];
    a7 = v71.n64_f64[0];
    a8 = v72.n64_f64[0];
    a9 = v73.n64_f64[0];
    a10 = v74.n64_f64[0];
    v25 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v77, v71.n64_f32[0]), v78, v71, 1), v79, v72, 0),
            v80,
            v72,
            1);
    v26 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v77, v75.n64_f32[0]), v78, v75, 1), v79, v76, 0),
            v80,
            v76,
            1);
    v77 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v77, v69.n64_f32[0]), v78, v69, 1), v79, v70, 0),
            v80,
            v70,
            1);
    v27 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v81, v73.n64_f32[0]), v78, v73, 1), v79, v74, 0),
            v80,
            v74,
            1);
    v78 = v25;
    v79 = v27;
    v80 = v26;
  }
  v63 = 3.4028e38;
  v64 = 3.4028e38;
  v65 = 3.4028e38;
  v66 = -3.4028e38;
  v67 = -3.4028e38;
  v68 = -3.4028e38;
  result = sub_609645DC(
             a1 + 68,
             &v63,
             &v77,
             v15,
             *(float *)&a5,
             *((float *)&a5 + 1),
             *(float *)&a6,
             *((float *)&a6 + 1),
             *(float *)&a7,
             *((float *)&a7 + 1),
             *(float *)&a8,
             *((float *)&a8 + 1),
             *(float *)&a9,
             *((float *)&a9 + 1),
             *(float *)&a10,
             *((float *)&a10 + 1),
             *(float *)&a11,
             *((float *)&a11 + 1),
             *(float *)&a12,
             *((float *)&a12 + 1));
  v29 = v63;
  v30 = v66;
  if ( v63 <= v66 )
  {
    v31 = v64;
    v32 = v67;
    if ( v64 <= v67 )
    {
      v33 = v65;
      v34 = v68;
      if ( v65 <= v68 )
      {
        v35 = (float)a4[1];
        v36 = (float)*a4;
        if ( a3 == 2 && FIELD_U8(a1, 1376) )
        {
          v37 = (float)(v66 + v63) * 0.5;
          v38 = FIELD_F32(a1, 204) * 0.5;
          v39 = (float)(v67 + v64) * 0.5;
          v40 = v37 - v38;
          v41 = v37 + v38;
          v42 = v64 - (float)(v39 - v38);
          v43 = v66 - v63;
          v44 = v67 - v64;
          v32 = v39 + v38;
          FIELD_F32(a1, 1380) = (float)(v63 - v40) / (float)(v41 - v40);
          FIELD_F32(a1, 1384) = v42 / (float)((float)(v39 + v38) - (float)(v39 - v38));
          v30 = v41;
          FIELD_F32(a1, 1388) = v43 / (float)(v41 - v40);
          FIELD_F32(a1, 1392) = v44 / (float)((float)(v39 + v38) - (float)(v39 - v38));
          v29 = v40;
          v31 = v39 - v38;
        }
        else
        {
          FIELD_U32(a1, 1380) = 0;
          FIELD_U32(a1, 1384) = 0;
          FIELD_U32(a1, 1388) = 1065353216;
          FIELD_U32(a1, 1392) = 1065353216;
        }
        v45 = v30 - v29;
        v46 = v34 - v33;
        v70.n64_u32[0] = 0;
        v71.n64_u32[0] = 0;
        v72.n64_u32[0] = 0;
        v73.n64_u64[0] = 0;
        v75.n64_u64[0] = 0;
        v76.n64_u64[0] = 0;
        v47 = v29 / (float)(v30 - v29);
        v48 = (float)-v30 / v45;
        *(float *)&v49 = 2.0 / v45;
        v50 = -v34;
        v51 = 2.0 / (float)(v34 - v33);
        v52 = v48 - v47;
        v53 = v33 / v46;
        v54 = (float)((float)-v32 / (float)(v32 - v31)) - (float)(v31 / (float)(v32 - v31));
        v69.n64_u64[0] = v49;
        v71.n64_f32[1] = 2.0 / (float)(v32 - v31);
        v74.n64_f32[0] = v51;
        v70.n64_f32[1] = v52;
        v72.n64_f32[1] = v54;
        v74.n64_f32[1] = (float)(v50 / v46) - v53;
        if ( a3 == 2 && FIELD_U8(a1, 1376) )
        {
          v55 = v35 * 0.5;
          v56 = (float)(v36 * 0.5) * v52;
          v57 = (int)(float)(v55 * v54);
          v58 = v57;
          v59 = (int)v56;
          if ( (float)v57 != (float)(v55 * v54) )
            v58 = v57 - 1;
          if ( (float)(v55 * v54) >= 0.0 )
            v58 = (int)(float)(v55 * v54);
          if ( (float)(int)v56 != v56 )
            --v59;
          if ( v56 >= 0.0 )
            v59 = (int)v56;
          v70.n64_f32[1] = (float)v59 / (float)(v36 * 0.5);
          v72.n64_f32[1] = (float)v58 / v55;
        }
        v76.n64_u32[1] = 1065353216;
        v60 = vmlaq_lane_f32(
                vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v77, v71.n64_f32[0]), v78, v71, 1), v79, v72, 0),
                v80,
                v72,
                1);
        v61 = vmlaq_lane_f32(
                vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v77, v73.n64_f32[0]), v78, v73, 1), v79, v74, 0),
                v80,
                v74,
                1);
        v62 = vmlaq_lane_f32(
                vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v77, v75.n64_f32[0]), v78, v75, 1), v79, v76, 0),
                v80,
                v76,
                1);
        v77 = vmlaq_lane_f32(
                vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v77, v69.n64_f32[0]), v78, v69, 1), v79, v70, 0),
                v80,
                v70,
                1);
        v78 = v60;
        v79 = v61;
        v80 = v62;
        v60.n128_u64[1] = v15[1];
        FIELD_U64(a1, 532) = *v15;
        FIELD_U64(a1, 540) = v60.n128_u64[1];
        v60.n128_u64[1] = FIELD_U64(a1, 268);
        FIELD_U64(a1, 548) = FIELD_U64(a1, 260);
        FIELD_U64(a1, 556) = v60.n128_u64[1];
        v60.n128_u64[1] = FIELD_U64(a1, 284);
        FIELD_U64(a1, 564) = FIELD_U64(a1, 276);
        FIELD_U64(a1, 572) = v60.n128_u64[1];
        v60.n128_u64[1] = v77.n128_u64[1];
        FIELD_U64(a1, 580) = v77.n128_u64[0];
        FIELD_U64(a1, 588) = v60.n128_u64[1];
        v60.n128_u64[1] = v78.n128_u64[1];
        FIELD_U64(a1, 596) = v78.n128_u64[0];
        FIELD_U64(a1, 604) = v60.n128_u64[1];
        v60.n128_u64[1] = v79.n128_u64[1];
        FIELD_U64(a1, 612) = v79.n128_u64[0];
        FIELD_U64(a1, 620) = v60.n128_u64[1];
        v60.n128_u64[1] = v80.n128_u64[1];
        FIELD_U64(a1, 628) = v80.n128_u64[0];
        FIELD_U64(a1, 636) = v60.n128_u64[1];
        return a1 + 628;
      }
    }
  }
  return result;
}
