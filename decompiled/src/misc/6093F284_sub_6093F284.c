/* sub_6093F284
 * address: 0x6093F284   size: 972   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6093F284(int a1, int a2, int a3, float *a4, float *a5, float *a6)
{
  unsigned int v9; // r7
  int v10; // r10
  int v11; // r0
  signed int v12; // r6
  unsigned int v13; // r4
  int v14; // r5
  int v15; // r0
  signed int v16; // r1
  int v17; // r10
  _DWORD *v18; // r0
  float v19; // s20
  float v20; // s22
  float v21; // s24
  float v22; // s26
  int v23; // r8
  float v24; // s16
  float v25; // s18
  float v26; // s28
  float v27; // s30
  unsigned int v28; // r4
  unsigned int v29; // r6
  int v30; // r0
  float v31; // s17
  float v32; // s19
  unsigned int v33; // r9
  signed int v34; // r7
  int v35; // r10
  int v36; // r0
  signed int v37; // r1
  float32x2_t *v38; // r0
  float32x2_t v39; // d4
  int32x2_t v40; // d5
  float32x2_t v41; // d2
  int32x2_t v42; // d3
  float32x2_t *v43; // r2
  int32x4_t v44; // q12
  int32x4_t v45; // q14
  float32x4_t v46; // q8
  int32x2_t v47; // d1
  float32x4_t v48; // q13
  int32x4_t v49; // q2
  int8x16_t v50; // q12
  int8x16_t v51; // q14
  float32x4_t v52; // q15
  float32x4_t v53; // q12
  int8x16_t v54; // q1
  float32x4_t v55; // q13
  float32x4_t v56; // q15
  int32x4_t v57; // q11
  float32x4_t v58; // q9
  int8x16_t v59; // q10
  _DWORD *v60; // r0
  int v61; // r7
  int v62; // r4
  int v63; // r8
  int v64; // r6
  __int64 v65; // r0
  int v66; // [sp+10h] [bp-190h]
  _OWORD v68[4]; // [sp+1Ch] [bp-184h] BYREF
  float32x4_t v69; // [sp+5Ch] [bp-144h]
  float32x4_t v70; // [sp+6Ch] [bp-134h]
  unsigned int v71; // [sp+7Ch] [bp-124h]
  int v72; // [sp+80h] [bp-120h]
  __int64 v73; // [sp+84h] [bp-11Ch]
  float v74[69]; // [sp+8Ch] [bp-114h] BYREF

  v9 = FIELD_U16(a3, 40);
  v10 = a3 + 16;
  if ( v9 <= 1 )
    v9 = 1;
  v11 = sub_609200A0(a3 + 16);
  v12 = FIELD_U16(a3, 42);
  v13 = FIELD_U16(a3, 40);
  v14 = v11;
  v66 = v10;
  v15 = sub_609200A0(v10);
  v16 = FIELD_U16(a3, 42);
  v74[0] = (float)v9;
  v17 = a3;
  if ( v13 <= 1 )
    v13 = 1;
  if ( v14 > v12 )
    v12 = v14;
  if ( v15 > v16 )
    v16 = v15;
  v74[1] = (float)(unsigned int)v12;
  v74[2] = 1.0 / (float)v13;
  v74[3] = 1.0 / (float)(unsigned int)v16;
  v18 = *(_DWORD **)(a2 + 612);
  if ( FIELD_U32(a2, 608) > 1u )
    v18 += 3;
  if ( *v18 != -1 )
    sub_6091B890(v18, a1, 4, (int)v74);
  sub_6090C7F8((int)v74, (int)a4, 0.0, 1.0);
  v19 = a4[1];
  v20 = a4[2];
  v21 = a4[3];
  v22 = a4[4];
  v23 = a3;
  v24 = *a6;
  v25 = a6[1];
  v26 = *a5;
  v27 = a5[1];
  v28 = 1;
  v29 = FIELD_U16(a3, 40);
  if ( v29 <= 1 )
    v29 = 1;
  v30 = sub_609200A0(v66);
  v31 = *a5;
  v32 = a5[1];
  v33 = FIELD_U16(a3, 40);
  v34 = FIELD_U16(v17, 42);
  v35 = v30;
  v36 = sub_609200A0(v66);
  v37 = FIELD_U16(v23, 42);
  v69.n128_f32[0] = v26 * (float)v29;
  if ( v35 > v34 )
    v34 = v35;
  v70.n128_u32[0] = 0;
  if ( v33 > 1 )
    v28 = v33;
  v71 = 0;
  v69.n128_u32[1] = 0;
  if ( v36 > v37 )
    v37 = v36;
  v70.n128_f32[1] = v27 * (float)(unsigned int)v34;
  v72 = 0;
  v69.n128_u32[2] = 0;
  v70.n128_u32[2] = 0;
  v73 = 0;
  v69.n128_f32[3] = (float)(v24 - (float)((float)((float)(v19 + v21) * 0.5) - v19))
                  + (float)((float)(v31 * (float)v28) * 0.5);
  v70.n128_f32[3] = -(float)((float)(v25 - (float)((float)((float)(v20 + v22) * 0.5) - v20))
                           + (float)((float)(v32 * (float)(unsigned int)v37) * 0.5));
  v38 = (float32x2_t *)sub_6090BDE0((int)v74);
  v39.n64_u64[0] = FIELD_U64(v38, 0x0)[0];
  v40.n64_u64[0] = v38[1].n64_u64[0];
  v41.n64_u64[0] = v38[2].n64_u64[0];
  v42.n64_u64[0] = v38[3].n64_u64[0];
  v43 = v38 + 4;
  v38 += 6;
  v44 = vdupq_lane_s32(v40, 1);
  v45 = vdupq_lane_s32(v42, 1);
  v46.n128_u64[0] = v71;
  v46.n128_u64[1] = 0;
  v47.n64_u64[0] = v43[1].n64_u64[0];
  v48 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v69, v39.n64_f32[0]), v70, v39, 1), v46, v40, 0);
  v49 = vdupq_lane_s32(v47, 1);
  v50 = vextq_s8((int8x16_t)vzipq_s32(v44, v44).val, (int8x16_t)0, 0xCu);
  v51 = vextq_s8((int8x16_t)vzipq_s32(v45, v45).val, (int8x16_t)0, 0xCu);
  v52 = vextq_s8(v50, v50, 4u);
  v53 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v69, v41.n64_f32[0]), v70, v41, 1), v46, v42, 0);
  v54 = vextq_s8((int8x16_t)vzipq_s32(v49, v49).val, (int8x16_t)0, 0xCu);
  *(float32x2_t *)&v49.n128_i8[8] = v38[1];
  v55 = vaddq_f32(v52, v48);
  v56 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(v69, FIELD_F32(v43, 0x0)[0]), v70, (float32x2_t)FIELD_U64(v43, 0x0)[0], 1),
          v46,
          v47,
          0);
  v57 = vdupq_lane_s32(*(int32x2_t *)&v49.n128_i8[8], 1);
  v58 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(v69, FIELD_F32(v38, 0x0)[0]), v70, (float32x2_t)FIELD_U64(v38, 0x0)[0], 1),
          v46,
          *(float32x2_t *)&v49.n128_i8[8],
          0);
  v68[0] = v55;
  v59 = vextq_s8((int8x16_t)vzipq_s32(v57, v57).val, (int8x16_t)0, 0xCu);
  v68[1] = vaddq_f32(vextq_s8(v51, v51, 4u), v53);
  v68[2] = vaddq_f32(vextq_s8(v54, v54, 4u), v56);
  v68[3] = vaddq_f32(vextq_s8(v59, v59, 4u), v58);
  sub_6091D95C(a2);
  sub_60920FDC((int *)v23, a1, *(char **)(a2 + 636));
  v60 = *(_DWORD **)(a2 + 612);
  if ( *v60 != -1 )
    sub_6091B890(v60, a1, 16, (int)v68);
  sub_60922278(dword_60CD0A28 + 2376, a1);
  v61 = dword_60CD0A0C;
  v62 = FIELD_U32(dword_60CD0A0C, 400);
  if ( v62 )
  {
    v63 = FIELD_U32(a1, 192);
    v64 = FIELD_U32(dword_60CD0A0C, 384);
    v65 = dword_60CC746C(dword_60CD0A0C + 408);
    dword_60CC7874(v63, v64, FIELD_U32(v61, 380), v62, v65, HIDWORD(v65));
  }
  nullsub_113();
}
