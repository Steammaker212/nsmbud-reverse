/* sub_60239458
 * address: 0x60239458   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60239458(int a1, int a2, int a3, int a4, float a5, float a6, float a7, __int64 *a8)
{
  __int64 v11; // d16
  int v12; // r0
  int32x4_t v13; // q4
  int TlsValue; // r0
  int CurrentCoreNumber; // r0
  int32x4_t v19[4]; // [sp+10h] [bp-198h] BYREF
  int32x4x2_t v20[2]; // [sp+50h] [bp-158h]
  int32x4_t v21; // [sp+90h] [bp-118h]
  int32x4_t v22; // [sp+A0h] [bp-108h]
  int32x4_t v23; // [sp+B0h] [bp-F8h]
  float32x4_t v24; // [sp+C0h] [bp-E8h]
  unsigned __int64 v25; // [sp+D0h] [bp-D8h]
  __int64 v26; // [sp+D8h] [bp-D0h]
  unsigned __int64 v27; // [sp+E0h] [bp-C8h]
  __int64 v28; // [sp+E8h] [bp-C0h]
  unsigned __int64 v29; // [sp+F0h] [bp-B8h]
  __int64 v30; // [sp+F8h] [bp-B0h]
  int v31; // [sp+100h] [bp-A8h]
  int v32; // [sp+104h] [bp-A4h]
  int v33; // [sp+108h] [bp-A0h]
  int v34; // [sp+10Ch] [bp-9Ch]
  unsigned __int32 v35; // [sp+110h] [bp-98h]
  unsigned __int32 v36; // [sp+114h] [bp-94h]
  unsigned __int32 v37; // [sp+118h] [bp-90h]
  int v38; // [sp+11Ch] [bp-8Ch]
  __int64 v39; // [sp+120h] [bp-88h]
  int v40; // [sp+128h] [bp-80h]
  int v41; // [sp+12Ch] [bp-7Ch]
  float v42; // [sp+130h] [bp-78h]
  float v43; // [sp+134h] [bp-74h]
  float v44; // [sp+138h] [bp-70h]
  float v45; // [sp+13Ch] [bp-6Ch]
  int v46; // [sp+140h] [bp-68h]
  float v47; // [sp+144h] [bp-64h]
  int v48; // [sp+148h] [bp-60h]
  int v49; // [sp+14Ch] [bp-5Ch]
  int32x4_t v50; // 0:q0.16
  int32x4_t v51; // 0:q2.16
  int32x4_t v52; // 0:q3.16
  int32x4_t v53; // 0:q5.16
  int32x4_t v54; // 0:q6.16
  int32x4_t v55; // 0:q9.16
  int32x4_t v56; // 0:q10.16
  int32x4x2_t v57; // 0:kr00_32.32
  int32x4x2_t v58; // 0:kr20_32.32
  int32x4x2_t v59; // 0:kr40_32.32
  int32x4x2_t v60; // 0:q10.16,16:q9.16
  int32x4x2_t v61; // 0:q11.16,16:q13.16
  int32x4x2_t v62; // 0:q11.16,16:q13.16
  int32x4x2_t v63; // 0:q14.16,16:q12.16
  int32x4x2_t v64; // 0:q14.16,16:q12.16

  v54 = *(int32x4_t *)a3;
  v52 = *(int32x4_t *)(a3 + 32);
  v56 = *(int32x4_t *)a4;
  v51 = *(int32x4_t *)(a3 + 48);
  v50 = *(int32x4_t *)(a4 + 32);
  v53 = *(int32x4_t *)(a3 + 16);
  v55 = *(int32x4_t *)(a4 + 16);
  v11 = *a8;
  v12 = *((_DWORD *)a8 + 2);
  v46 = 1070134723;
  v61 = vzipq_s32(v54, v53);
  v47 = a7;
  v62 = vzipq_s32(v61.val[0], v61.val[1]);
  v48 = 1008981770;
  v63 = vzipq_s32(v52, v51);
  v49 = 0;
  v64 = vzipq_s32(v63.val[0], v63.val[1]);
  v20[0] = vzipq_s32(v62.val[0], v62.val[1]);
  v13.n128_u32[2] = 0;
  v20[1] = vzipq_s32(v64.val[0], v64.val[1]);
  v13.n128_u32[3] = 1.0;
  v13.n128_u64[0] = __PAIR64__(v50.n128_u32[3], v50.n128_u32[1]);
  v57 = vzipq_s32(
          vzipq_s32(
            vextq_s8((int8x16_t)0, vzipq_s32((int32x4_t)0, vdupq_lane_s32((int32x2_t)v50.n128_u64[0], 0)).val[1], 0xCu),
            vextq_s8((int8x16_t)0, vzipq_s32((int32x4_t)0, v50).val[1], 0xCu)).val[1],
          v13);
  v60 = vzipq_s32(v56, v55);
  v58 = vzipq_s32(v60.val[0], v60.val[1]);
  v59 = vzipq_s32(v58.val[0], v58.val[1]);
  v19[0] = v59.val[0];
  v19[1] = v59.val[1];
  v19[2] = v57.val[0];
  v19[3] = v57.val[1];
  v21 = vmlaq_lane_f32(
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v59.val[0], v54.n128_f32[0]), v59.val[1], (float32x2_t)v54.n128_u64[0], 1),
            v57.val[0],
            *(float32x2_t *)&v54.n128_i8[8],
            0),
          v57.val[1],
          *(float32x2_t *)&v54.n128_i8[8],
          1);
  v64.val[0] = vmlaq_lane_f32(
                 vmlaq_lane_f32(
                   vmlaq_lane_f32(vmulq_n_f32(v59.val[0], v53.n128_f32[0]), v59.val[1], (float32x2_t)v53.n128_u64[0], 1),
                   v57.val[0],
                   *(float32x2_t *)&v53.n128_i8[8],
                   0),
                 v57.val[1],
                 *(float32x2_t *)&v53.n128_i8[8],
                 1);
  v53.n128_u32[2] = vdup_lane_s32((int32x2_t)v50.n128_u64[0], 1).n64_u32[0];
  v22 = v64.val[0];
  v23 = vmlaq_lane_f32(
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v59.val[0], v52.n128_f32[0]), v59.val[1], (float32x2_t)v52.n128_u64[0], 1),
            v57.val[0],
            *(float32x2_t *)&v52.n128_i8[8],
            0),
          v57.val[1],
          *(float32x2_t *)&v52.n128_i8[8],
          1);
  v24 = vmlaq_lane_f32(
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v59.val[0], v51.n128_f32[0]), v59.val[1], (float32x2_t)v51.n128_u64[0], 1),
            v57.val[0],
            *(float32x2_t *)&v51.n128_i8[8],
            0),
          v57.val[1],
          *(float32x2_t *)&v51.n128_i8[8],
          1);
  v25 = v60.val[0].n128_u64[0];
  v26 = v50.n128_u32[0];
  v27 = v60.val[0].n128_u64[1];
  v28 = v53.n128_u32[2];
  v29 = v60.val[1].n128_u64[0];
  v30 = v50.n128_u32[2];
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 1065353216;
  v35 = v50.n128_u32[0];
  v36 = v53.n128_u32[2];
  v37 = v50.n128_u32[2];
  v38 = 0;
  v39 = v11;
  v40 = v12;
  v41 = 0;
  v42 = a5;
  v43 = a6;
  v44 = a5 * a6;
  v45 = a6 - a5;
  TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
  if ( TlsValue )
    CurrentCoreNumber = TlsValue - 1;
  else
    CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
  return sub_60890694(a1, CurrentCoreNumber, a2, v19);
}
