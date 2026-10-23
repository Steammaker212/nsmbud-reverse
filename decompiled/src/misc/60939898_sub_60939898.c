/* sub_60939898
 * address: 0x60939898   size: 3676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60939898(int a1, int32x2_t *a2, float *a3, int a4, float a5, int a6, int a7, int a8)
{
  int v8; // r0
  int32x2_t *v9; // r3
  int v10; // r11
  int32x2_t *v11; // r1
  float32x2_t v12; // d4
  int32x2_t v13; // d5
  int32x2_t v14; // d3
  int32x2_t v15; // d1
  int32x4_t v16; // q9
  int32x4_t v17; // q15
  float32x4_t v18; // q13
  float32x4_t v19; // q11
  float32x4_t v20; // q14
  float32x4_t v21; // q8
  int8x16_t v22; // q9
  int32x4_t v23; // q2
  int8x16_t v24; // q15
  int8x16_t v25; // q10
  float v26; // r2
  float v27; // r3
  int v28; // r4
  int v29; // r1
  float v30; // s0
  float v31; // s2
  int v32; // r6
  _DWORD *v33; // r10
  int v34; // r7
  int v35; // r9
  int v36; // r11
  __int64 v37; // r0
  _DWORD *v38; // r4
  int v39; // r7
  int v40; // r9
  int v41; // r11
  __int64 v42; // r0
  int v43; // r4
  _DWORD *v44; // r11
  int i; // r10
  int v46; // r5
  int v47; // r7
  int v48; // r4
  int v49; // r0
  float v50; // s18
  float v51; // s20
  float v52; // s24
  float v53; // s26
  float v54; // s16
  unsigned __int64 v55; // kr00_8
  float v56; // s22
  float v57; // s17
  float v58; // r5
  float v59; // r10
  float v60; // r8
  float v61; // s18
  float v62; // s22
  float v63; // s20
  __int64 v65; // [sp+0h] [bp-240h]
  int v66; // [sp+0h] [bp-240h]
  int v67; // [sp+0h] [bp-240h]
  int v68; // [sp+0h] [bp-240h]
  int v69; // [sp+0h] [bp-240h]
  int v70; // [sp+0h] [bp-240h]
  int v71; // [sp+4h] [bp-23Ch]
  int v72; // [sp+4h] [bp-23Ch]
  int v73; // [sp+4h] [bp-23Ch]
  int v74; // [sp+4h] [bp-23Ch]
  int v75; // [sp+4h] [bp-23Ch]
  int v76; // [sp+4h] [bp-23Ch]
  int v77; // [sp+8h] [bp-238h]
  int v78; // [sp+8h] [bp-238h]
  int v79; // [sp+8h] [bp-238h]
  int v80; // [sp+8h] [bp-238h]
  int v81; // [sp+8h] [bp-238h]
  int v83; // [sp+18h] [bp-228h]
  int v84; // [sp+1Ch] [bp-224h]
  int *v85; // [sp+20h] [bp-220h]
  float v88; // [sp+140h] [bp-100h] BYREF
  float v89; // [sp+144h] [bp-FCh]
  float v90; // [sp+148h] [bp-F8h]
  int v91; // [sp+14Ch] [bp-F4h]
  _DWORD v92[3]; // [sp+150h] [bp-F0h] BYREF
  float32x4_t v93; // [sp+15Ch] [bp-E4h]
  float32x4_t v94; // [sp+16Ch] [bp-D4h]
  float32x4_t v95; // [sp+17Ch] [bp-C4h]
  float v96; // [sp+18Ch] [bp-B4h] BYREF
  float v97; // [sp+190h] [bp-B0h]
  float v98; // [sp+194h] [bp-ACh]
  int v99; // [sp+198h] [bp-A8h] BYREF
  int v100; // [sp+19Ch] [bp-A4h]
  int v101; // [sp+1A0h] [bp-A0h]
  int v102; // [sp+1A4h] [bp-9Ch]
  int v103; // [sp+1A8h] [bp-98h] BYREF
  int v104; // [sp+1ACh] [bp-94h]
  int v105; // [sp+1B0h] [bp-90h]
  int v106; // [sp+1B4h] [bp-8Ch]
  int v107; // [sp+1B8h] [bp-88h] BYREF
  int v108; // [sp+1BCh] [bp-84h]
  int v109; // [sp+1C0h] [bp-80h]
  int v110; // [sp+1C4h] [bp-7Ch]
  float v111; // [sp+1CCh] [bp-74h] BYREF
  float v112; // [sp+1D0h] [bp-70h]
  float v113; // [sp+1D4h] [bp-6Ch]

  v8 = 0;
  v93.n128_u64[0] = LODWORD(a5);
  v9 = a2 + 4;
  v10 = a7;
  v93.n128_u64[1] = 0;
  v94.n128_u32[0] = 0;
  v94.n128_f32[1] = a5;
  v94.n128_u64[1] = 0;
  v95.n128_u64[0] = 0;
  v95.n128_u64[1] = LODWORD(a5);
  v12.n64_u64[0] = FIELD_U64(a2, 0x0)[0];
  v13.n64_u64[0] = a2[1].n64_u64[0];
  v11 = a2 + 2;
  v14.n64_u64[0] = v9[1].n64_u64[0];
  v15.n64_u64[0] = v11[1].n64_u64[0];
  v16 = vdupq_lane_s32(v13, 1);
  v17 = vdupq_lane_s32(v15, 1);
  v18.n128_u64[0] = 0;
  v18.n128_u64[1] = LODWORD(a5);
  v19 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32((float32x4_t)LODWORD(a5), v12.n64_f32[0]), (float32x4_t)v94.n128_u64[0], v12, 1),
          v18,
          v13,
          0);
  v20 = vmlaq_lane_f32(
          vmlaq_lane_f32(
            vmulq_n_f32((float32x4_t)LODWORD(a5), FIELD_F32(v11, 0x0)[0]),
            (float32x4_t)v94.n128_u64[0],
            (float32x2_t)FIELD_U64(v11, 0x0)[0],
            1),
          v18,
          v15,
          0);
  v21 = vmlaq_lane_f32(
          vmlaq_lane_f32(
            vmulq_n_f32((float32x4_t)LODWORD(a5), FIELD_F32(v9, 0x0)[0]),
            (float32x4_t)v94.n128_u64[0],
            (float32x2_t)FIELD_U64(v9, 0x0)[0],
            1),
          v18,
          v14,
          0);
  v22 = vextq_s8((int8x16_t)vzipq_s32(v16, v16).val, (int8x16_t)0, 0xCu);
  v23 = vdupq_lane_s32(v14, 1);
  v24 = vextq_s8((int8x16_t)vzipq_s32(v17, v17).val, (int8x16_t)0, 0xCu);
  v93 = vaddq_f32(vextq_s8(v22, v22, 4u), v19);
  v25 = vextq_s8((int8x16_t)vzipq_s32(v23, v23).val, (int8x16_t)0, 0xCu);
  v94 = vaddq_f32(vextq_s8(v24, v24, 4u), v20);
  v95 = vaddq_f32(vextq_s8(v25, v25, 4u), v21);
  if ( FIELD_U32(dword_60CD0B60, 20) )
    v8 = **(_DWORD **)(dword_60CD0B60 + 28);
  v83 = dword_60CD0A0C;
  v84 = dword_60CD0A28;
  v92[0] = -1082130432;
  v92[1] = -1082130432;
  v92[2] = -1082130432;
  if ( a7 == 1 )
  {
    v26 = FIELD_F32(a8, 4);
    v27 = FIELD_F32(a8, 8);
    v28 = FIELD_U32(a8, 12);
    v88 = *(float *)a8;
    v89 = v26;
    v90 = v27;
    v91 = v28;
  }
  else
  {
    v29 = FIELD_U32(a8, 12);
    v30 = FIELD_F32(a8, 4) * 0.5;
    v31 = FIELD_F32(a8, 8) * 0.5;
    v88 = *(float *)a8 * 0.5;
    v89 = v30;
    v90 = v31;
    v91 = v29;
  }
  v32 = a1;
  sub_6091DD8C(v8, a1);
  sub_6093AE84(a1);
  sub_60922278(v84 + 360, a1);
  v33 = (_DWORD *)(v83 + 1416);
  if ( a7 )
    v33 = (_DWORD *)(v83 + 1496);
  v34 = v33[6];
  if ( v34 )
  {
    v35 = FIELD_U32(a1, 192);
    v36 = v33[2];
    v37 = dword_60CC746C(v33 + 8);
    v71 = HIDWORD(v37);
    HIDWORD(v37) = v36;
    v10 = a7;
    dword_60CC7874(v35, HIDWORD(v37), v33[1], v34, v37, v71);
  }
  sub_6093AE84(a1);
  sub_60922278(v84 + 696, a1);
  v38 = (_DWORD *)(v83 + 8288);
  if ( v10 )
    v38 = (_DWORD *)(v83 + 8528);
  v39 = v38[26];
  if ( v39 )
  {
    v40 = FIELD_U32(a1, 192);
    v85 = (int *)(a1 + 192);
    v41 = v38[22];
    v42 = dword_60CC746C(v38 + 28);
    dword_60CC7874(v40, v41, v38[21], v39, v42, HIDWORD(v42));
  }
  else
  {
    v85 = (int *)(a1 + 192);
  }
  sub_60922278(v84 + 1032, a1);
  v43 = a8;
  v44 = (_DWORD *)(v83 + 6384);
  if ( a7 )
    v44 = (_DWORD *)(v83 + 6624);
  for ( i = 0; i != 2; ++i )
  {
    LODWORD(v65) = &v88;
    HIDWORD(v65) = v43;
    sub_6093AE84(v32);
    v46 = v44[26];
    if ( v46 )
    {
      v47 = v44[22];
      v48 = *v85;
      v65 = dword_60CC746C(v44 + 28);
      v49 = v48;
      v43 = a8;
      ((void (__fastcall *)(int, int, _DWORD, int))dword_60CC7874)(v49, v47, v44[21], v46);
      v32 = a1;
    }
  }
  v50 = v95.n128_f32[2];
  v51 = v94.n128_f32[2];
  v52 = v95.n128_f32[1];
  v53 = v94.n128_f32[1];
  v54 = v95.n128_f32[0];
  v55 = v93.n128_u64[0];
  v56 = v93.n128_f32[2];
  v57 = v94.n128_f32[0];
  v58 = *a3;
  v59 = a3[1];
  v60 = a3[2];
  sub_6093AC5C(v32, a4, a6);
  v111 = v58;
  v112 = v59;
  v113 = v60;
  v107 = 1065353216;
  v108 = 0;
  v109 = 0;
  v103 = 0;
  v104 = 1065353216;
  v105 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 1065353216;
  v96 = *(float *)&v55 + v58;
  v97 = v57 + v59;
  v102 = 1065353216;
  v106 = 1065353216;
  v110 = 1065353216;
  v98 = v54 + v60;
  sub_6093AD38(v32, &v111, &v96, &v107, v65, HIDWORD(v65), v92);
  v96 = *((float *)&v55 + 1) + v58;
  v97 = v53 + v59;
  v98 = v52 + v60;
  sub_6093AD38(v32, &v111, &v96, &v103, v66, v72, v77);
  v96 = v56 + v58;
  v97 = v51 + v59;
  v98 = v50 + v60;
  sub_6093AD38(v32, &v111, &v96, &v99, v67, v73, v78);
  v111 = v93.n128_f32[3];
  v112 = v94.n128_f32[3];
  v113 = v95.n128_f32[3];
  v61 = v93.n128_f32[3];
  v62 = v95.n128_f32[3];
  v63 = v94.n128_f32[3];
  v109 = 0;
  v108 = 0;
  v107 = 1065353216;
  v103 = 0;
  v104 = 1065353216;
  v105 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 1065353216;
  v102 = 1065353216;
  v106 = 1065353216;
  v110 = 1065353216;
  v96 = v93.n128_f32[3] + v93.n128_f32[0];
  v97 = v94.n128_f32[3] + v94.n128_f32[0];
  v98 = v95.n128_f32[3] + v95.n128_f32[0];
  sub_6093AD38(v32, &v111, &v96, &v107, v68, v74, v79);
  v96 = v61 + v93.n128_f32[1];
  v97 = v63 + v94.n128_f32[1];
  v98 = v62 + v95.n128_f32[1];
  sub_6093AD38(v32, &v111, &v96, &v103, v69, v75, v80);
  v96 = v61 + v93.n128_f32[2];
  v97 = v63 + v94.n128_f32[2];
  v98 = v62 + v95.n128_f32[2];
  return sub_6093AD38(v32, &v111, &v96, &v99, v70, v76, v81);
}
