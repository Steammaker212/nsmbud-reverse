/* sub_6093C9EC
 * address: 0x6093C9EC   size: 1604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093C9EC(int a1, int a2, int a3, float *a4, int a5, float32x2_t *a6)
{
  int v10; // r0
  int v11; // r1
  int *v12; // r2
  int v13; // r10
  float32x4_t v14; // q10
  int32x2_t v15; // d5
  int32x2_t v16; // d1
  int32x4_t v17; // q11
  int32x4_t v18; // q15
  int32x2_t v19; // d3
  int8x16_t v20; // q11
  float32x4_t v21; // q13
  int8x16_t v22; // q14
  int32x4_t v23; // q15
  float32x4_t v24; // q11
  int32x2_t v25; // d5
  float32x4_t v26; // q3
  int8x16_t v27; // q15
  float32x4_t v28; // q10
  int32x4_t v29; // q12
  int8x16_t v30; // q12
  float32x4_t v31; // q10
  float32x4_t v32; // q9
  int32x4_t v33; // q14
  int32x4_t v34; // q15
  int8x16_t v35; // q14
  int8x16_t v36; // q15
  int32x4_t v37; // q2
  int8x16_t v38; // q2
  int32x4_t v39; // q12
  int8x16_t v40; // q8
  _DWORD *v41; // r0
  int v42; // r0
  unsigned int *v43; // r1
  unsigned int v44; // r2
  unsigned int v45; // r4
  int v46; // r0
  int v47; // r1
  unsigned int v48; // s16
  int v49; // r5
  int v50; // r0
  int v51; // r1
  _DWORD *v52; // r0
  unsigned int v53; // r1
  _DWORD *v54; // r0
  unsigned __int8 *v55; // r0
  int v56; // r10
  float v57; // r5
  unsigned int v58; // r1
  _DWORD *v59; // r0
  int v60; // r8
  int v61; // r7
  int v62; // r6
  int v63; // r11
  __int64 v64; // r0
  float v65; // r5
  unsigned int v66; // r1
  _DWORD *v67; // r0
  int v68; // r8
  int v69; // r7
  int v70; // r11
  int v71; // r6
  __int64 v72; // r0
  int v74; // [sp+0h] [bp-2D0h]
  int v75; // [sp+4h] [bp-2CCh]
  int v76; // [sp+24h] [bp-2ACh]
  int v77; // [sp+28h] [bp-2A8h]
  int v78; // [sp+2Ch] [bp-2A4h]
  float v79; // [sp+30h] [bp-2A0h] BYREF
  float v80; // [sp+34h] [bp-29Ch]
  float v81; // [sp+38h] [bp-298h]
  float v82; // [sp+3Ch] [bp-294h]
  char v83; // [sp+89h] [bp-247h]
  int v84[10]; // [sp+98h] [bp-238h] BYREF
  unsigned __int16 v85; // [sp+C0h] [bp-210h]
  unsigned __int16 v86; // [sp+C2h] [bp-20Eh]
  _BYTE v87[264]; // [sp+E8h] [bp-1E8h] BYREF
  float32x4_t v88; // [sp+1F0h] [bp-E0h] BYREF
  float32x4_t v89; // [sp+200h] [bp-D0h]
  float32x4_t v90; // [sp+210h] [bp-C0h]
  float32x4_t v91; // [sp+220h] [bp-B0h]
  float32x4_t v92; // [sp+230h] [bp-A0h] BYREF
  float32x4_t v93; // [sp+240h] [bp-90h]
  float32x4_t v94; // [sp+250h] [bp-80h]
  float32x4_t v95; // [sp+260h] [bp-70h]
  float32x4_t v96; // [sp+270h] [bp-60h] BYREF
  float32x4_t v97; // [sp+280h] [bp-50h]
  float32x4_t v98; // [sp+290h] [bp-40h]
  float32x4_t v99; // 0:q9.16
  float32x4_t v100; // 0:q12.16

  v10 = FIELD_U16(a2, 34);
  v11 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 416) + 4);
  v12 = (int *)(v11 + 12);
  if ( v10 == 4 )
    v12 = (int *)(v11 + 20);
  v13 = *v12;
  sub_6091DD8C(*v12, a1);
  v96.n128_f32[0] = 1.0 + 1.0;
  memset(&v96.n128_u8[4], 0, 12);
  v97.n128_u32[0] = 0;
  v97.n128_f32[1] = 1.0 + 1.0;
  v97.n128_u64[1] = 0;
  v98.n128_u64[0] = 0;
  v98.n128_f32[2] = 1.0 + 1.0;
  v98.n128_u32[3] = 0;
  sub_6042E898((float *)&v92, a4);
  v14.n128_u64[0] = *(_QWORD *)a5;
  v14.n128_u64[1] = FIELD_U64(a5, 8);
  v15.n64_u64[0] = FIELD_U64(a6 + (1) * 8, 0x0)[0];
  v16.n64_u64[0] = FIELD_U64(a6 + (7) * 8, 0x0)[0];
  v17 = vdupq_lane_s32(v15, 1);
  v18 = vdupq_lane_s32(v16, 1);
  v100 = *(float32x4_t *)(a5 + 16);
  v99 = *(float32x4_t *)(a5 + 32);
  v19.n64_u64[0] = FIELD_U64(a6 + (5) * 8, 0x0)[0];
  v20 = vextq_s8((int8x16_t)vzipq_s32(v17, v17).val, (int8x16_t)0, 0xCu);
  v21 = vaddq_f32(
          vextq_s8(v20, v20, 4u),
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v14, FIELD_F32(a6, 0x0)[0]), v100, (float32x2_t)FIELD_U64(a6, 0x0)[0], 1),
            v99,
            v15,
            0));
  v22 = vextq_s8((int8x16_t)vzipq_s32(v18, v18).val, (int8x16_t)0, 0xCu);
  v23 = vdupq_lane_s32(v19, 1);
  v24 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v14, FIELD_F32(a6 + (4) * 8, 0x0)[0]), v100, a6[4], 1), v99, v19, 0);
  v25.n64_u64[0] = FIELD_U64(a6 + (3) * 8, 0x0)[0];
  v26 = vmlaq_lane_f32(vmulq_n_f32(v14, FIELD_F32(a6 + (2) * 8, 0x0)[0]), v100, a6[2], 1);
  v27 = vextq_s8((int8x16_t)vzipq_s32(v23, v23).val, (int8x16_t)0, 0xCu);
  v28 = vmlaq_lane_f32(vmulq_n_f32(v14, FIELD_F32(a6 + (6) * 8, 0x0)[0]), v100, a6[6], 1);
  v29 = vdupq_lane_s32(v25, 1);
  v30 = vextq_s8((int8x16_t)vzipq_s32(v29, v29).val, (int8x16_t)0, 0xCu);
  v31 = vaddq_f32(vextq_s8(v22, v22, 4u), vmlaq_lane_f32(v28, v99, v16, 0));
  v89 = vaddq_f32(vextq_s8(v30, v30, 4u), vmlaq_lane_f32(v26, v99, v25, 0));
  v90 = vaddq_f32(vextq_s8(v27, v27, 4u), v24);
  v32 = vmlaq_lane_f32(
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v92, v89.n128_f32[0]), v93, (float32x2_t)v89.n128_u64[0], 1),
            v94,
            *(float32x2_t *)&v89.n128_i8[8],
            0),
          v95,
          *(float32x2_t *)&v89.n128_i8[8],
          1);
  v88 = vmlaq_lane_f32(
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v92, v21.n128_f32[0]), v93, (float32x2_t)v21.n128_u64[0], 1),
            v94,
            *(float32x2_t *)&v21.n128_i8[8],
            0),
          v95,
          *(float32x2_t *)&v21.n128_i8[8],
          1);
  v90 = vmlaq_lane_f32(
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v92, v90.n128_f32[0]), v93, (float32x2_t)v90.n128_u64[0], 1),
            v94,
            *(float32x2_t *)&v90.n128_i8[8],
            0),
          v95,
          *(float32x2_t *)&v90.n128_i8[8],
          1);
  v91 = vmlaq_lane_f32(
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v92, v31.n128_f32[0]), v93, (float32x2_t)v31.n128_u64[0], 1),
            v94,
            *(float32x2_t *)&v31.n128_i8[8],
            0),
          v95,
          *(float32x2_t *)&v31.n128_i8[8],
          1);
  v33 = vdupq_lane_s32(*(int32x2_t *)&v32.n128_i8[8], 1);
  v34 = vdupq_lane_s32(*(int32x2_t *)&v90.n128_i8[8], 1);
  v35 = vextq_s8((int8x16_t)vzipq_s32(v33, v33).val, (int8x16_t)0, 0xCu);
  v36 = vextq_s8((int8x16_t)vzipq_s32(v34, v34).val, (int8x16_t)0, 0xCu);
  v37 = vdupq_lane_s32(*(int32x2_t *)&v88.n128_i8[8], 1);
  v38 = vextq_s8((int8x16_t)vzipq_s32(v37, v37).val, (int8x16_t)0, 0xCu);
  v39 = vdupq_lane_s32(*(int32x2_t *)&v91.n128_i8[8], 1);
  v88 = vaddq_f32(
          vextq_s8(v38, v38, 4u),
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v96, v88.n128_f32[0]), v97, (float32x2_t)v88.n128_u64[0], 1),
            v98,
            *(float32x2_t *)&v88.n128_i8[8],
            0));
  v89 = vaddq_f32(
          vextq_s8(v35, v35, 4u),
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v96, v32.n128_f32[0]), v97, (float32x2_t)v32.n128_u64[0], 1),
            v98,
            *(float32x2_t *)&v32.n128_i8[8],
            0));
  v78 = v13;
  v40 = vextq_s8((int8x16_t)vzipq_s32(v39, v39).val, (int8x16_t)0, 0xCu);
  v90 = vaddq_f32(
          vextq_s8(v36, v36, 4u),
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v96, v90.n128_f32[0]), v97, (float32x2_t)v90.n128_u64[0], 1),
            v98,
            *(float32x2_t *)&v90.n128_i8[8],
            0));
  v91 = vaddq_f32(
          vextq_s8(v40, v40, 4u),
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v96, v91.n128_f32[0]), v97, (float32x2_t)v91.n128_u64[0], 1),
            v98,
            *(float32x2_t *)&v91.n128_i8[8],
            0));
  v41 = *(_DWORD **)(v13 + 612);
  if ( *v41 != -1 )
    sub_6091B890(v41, a1, 16, (int)&v88);
  sub_60922278(dword_60CD0A28 + 360, a1);
  v42 = agl_TextureSampler_copy_ref((int)v84, a2);
  FIELD_U16(v42, 316) = 0;
  v87[238] = 1;
  v43 = (unsigned int *)(v42 + 328);
  do
    v44 = __ldrex(v43);
  while ( __strex(v44 | 4, v43) );
  v45 = v85;
  v46 = v42 + 16;
  v47 = v85;
  if ( v85 <= 1u )
    v47 = 1;
  v48 = v47;
  v76 = v47;
  v49 = v47 - 1;
  v50 = sub_609200A0(v46);
  v51 = v86;
  if ( v50 > v86 )
    v51 = v50;
  v77 = v51;
  v79 = 1.0 / (float)v48;
  v80 = 1.0 / (float)v51;
  v81 = 1.0 / (float)v49;
  v82 = 1.0 / (float)(v51 - 1);
  v52 = *(_DWORD **)(v13 + 612);
  if ( FIELD_U32(v13, 608) > 2u )
    v52 += 6;
  if ( *v52 != -1 )
    sub_6091B890(v52, a1, 4, (int)&v79);
  sub_60920FDC(v84, a1, *(char **)(v13 + 636));
  v53 = FIELD_U32(v13, 608);
  v54 = *(_DWORD **)(v13 + 612);
  v79 = *(float *)&a3;
  if ( v53 > 3 )
    v54 += 9;
  if ( *v54 != -1 )
    sub_6091B890(v54, a1, 1, (int)&v79);
  v55 = (unsigned __int8 *)sub_6090B350((int)&v79);
  v83 = 2;
  LODWORD(v80) &= ~1u;
  BYTE2(v79) = 0;
  sub_6090B4B0(v55, a1);
  if ( v77 >= 1 )
  {
    v56 = a1;
    if ( v45 <= 1 )
    {
      v65 = 0.0;
      do
      {
        v66 = FIELD_U32(v78, 608);
        v67 = *(_DWORD **)(v78 + 612);
        v79 = v65;
        if ( v66 > 4 )
          v67 += 12;
        if ( *v67 != -1 )
          sub_6091B890(v67, a1, 1, (int)&v79);
        v68 = dword_60CD0A0C;
        v69 = FIELD_U32(dword_60CD0A0C, 1440);
        if ( v69 )
        {
          v70 = FIELD_U32(v56, 192);
          v71 = FIELD_U32(dword_60CD0A0C, 1424);
          v72 = dword_60CC746C(dword_60CD0A0C + 1448);
          v74 = v72;
          LODWORD(v72) = v70;
          a1 = v56;
          dword_60CC7874(v72, v71, FIELD_U32(v68, 1420), v69, v74, HIDWORD(v72));
        }
        ++LODWORD(v65);
      }
      while ( SLODWORD(v65) < v77 );
    }
    else
    {
      v57 = 0.0;
      do
      {
        v58 = FIELD_U32(v78, 608);
        v59 = *(_DWORD **)(v78 + 612);
        v79 = v57;
        if ( v58 > 4 )
          v59 += 12;
        if ( *v59 != -1 )
          sub_6091B890(v59, a1, 1, (int)&v79);
        v60 = dword_60CD0A0C;
        v61 = FIELD_U32(dword_60CD0A0C, 1440);
        if ( v61 )
        {
          v62 = FIELD_U32(a1, 192);
          v63 = FIELD_U32(dword_60CD0A0C, 1424);
          v64 = dword_60CC746C(dword_60CD0A0C + 1448);
          v75 = HIDWORD(v64);
          HIDWORD(v64) = v63;
          a1 = v56;
          dword_60CC7880(v62, HIDWORD(v64), FIELD_U32(v60, 1420), v61, v64, v75, 0, 0, v76);
        }
        ++LODWORD(v57);
      }
      while ( SLODWORD(v57) < v77 );
    }
  }
  sub_609175E4((int)v87);
  return sub_60917AE4((int)v84);
}
