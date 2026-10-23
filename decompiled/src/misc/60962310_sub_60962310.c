/* sub_60962310
 * address: 0x60962310   size: 1412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60962310(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  int v9; // r4
  unsigned __int8 *v10; // r0
  int v11; // s0
  int v12; // s2
  int v13; // s8
  int v14; // s4
  int v15; // s10
  int v16; // s6
  float v17; // s0
  float v18; // s2
  float v19; // s4
  float v20; // s6
  float v21; // s8
  float v22; // s10
  float v23; // s12
  float v24; // s14
  unsigned __int64 v25; // kr00_8
  unsigned __int64 v26; // kr08_8
  int v27; // r0
  float *v28; // r1
  float v29; // s11
  float v30; // s13
  float v31; // s15
  float v32; // s16
  float v33; // s11
  int32x2_t v34; // d5
  int32x2_t v35; // d1
  int32x4_t v36; // q13
  int32x4_t v37; // q14
  int32x2_t v38; // d3
  int8x16_t v39; // q13
  float32x4_t v40; // q11
  float32x4_t v41; // q15
  int32x4_t v42; // q0
  int8x16_t v43; // q14
  int32x2_t v44; // d5
  float32x4_t v45; // q13
  float32x4_t v46; // q15
  float32x4_t v47; // q8
  int32x4_t v48; // q12
  int8x16_t v49; // q0
  int8x16_t v50; // q9
  float v51; // s0
  float v52; // s2
  float v53; // s4
  float v54; // s6
  float v55; // s8
  float v56; // s10
  float v57; // s12
  float v58; // s14
  unsigned __int64 v59; // kr10_8
  unsigned __int64 v60; // kr18_8
  float v61; // s9
  float v62; // s11
  float v63; // s13
  float v64; // s15
  int v65; // r0
  float *v66; // r1
  float v67; // s18
  float v68; // s20
  float v69; // s22
  float v70; // s26
  float v71; // s24
  float v72; // s18
  int v73; // [sp+0h] [bp-198h]
  int v74; // [sp+0h] [bp-198h]
  int v75; // [sp+0h] [bp-198h]
  int v76; // [sp+0h] [bp-198h]
  int v77; // [sp+0h] [bp-198h]
  int v78; // [sp+0h] [bp-198h]
  int v79; // [sp+0h] [bp-198h]
  int v80; // [sp+0h] [bp-198h]
  int v81; // [sp+0h] [bp-198h]
  int v82; // [sp+0h] [bp-198h]
  int v83; // [sp+0h] [bp-198h]
  int v84; // [sp+0h] [bp-198h]
  int v85; // [sp+4h] [bp-194h]
  int v86; // [sp+4h] [bp-194h]
  int v87; // [sp+4h] [bp-194h]
  int v88; // [sp+4h] [bp-194h]
  int v89; // [sp+4h] [bp-194h]
  int v90; // [sp+4h] [bp-194h]
  int v91; // [sp+4h] [bp-194h]
  int v92; // [sp+4h] [bp-194h]
  int v93; // [sp+4h] [bp-194h]
  int v94; // [sp+4h] [bp-194h]
  int v95; // [sp+4h] [bp-194h]
  int v96; // [sp+4h] [bp-194h]
  int v97; // [sp+8h] [bp-190h]
  int v98; // [sp+8h] [bp-190h]
  int v99; // [sp+8h] [bp-190h]
  int v100; // [sp+8h] [bp-190h]
  int v101; // [sp+8h] [bp-190h]
  int v102; // [sp+8h] [bp-190h]
  int v103; // [sp+8h] [bp-190h]
  int v104; // [sp+8h] [bp-190h]
  int v105; // [sp+8h] [bp-190h]
  int v106; // [sp+8h] [bp-190h]
  int v107; // [sp+8h] [bp-190h]
  int v108; // [sp+8h] [bp-190h]
  float32x4_t v109; // [sp+28h] [bp-170h] BYREF
  float32x4_t v110; // [sp+38h] [bp-160h]
  float32x4_t v111; // [sp+48h] [bp-150h]
  float32x4_t v112; // [sp+58h] [bp-140h]
  _DWORD v113[3]; // [sp+68h] [bp-130h] BYREF
  int v114[3]; // [sp+74h] [bp-124h] BYREF
  int v115[3]; // [sp+80h] [bp-118h] BYREF
  int v116[3]; // [sp+8Ch] [bp-10Ch] BYREF
  int v117[3]; // [sp+98h] [bp-100h] BYREF
  int v118[3]; // [sp+A4h] [bp-F4h] BYREF
  int v119[3]; // [sp+B0h] [bp-E8h] BYREF
  int v120[3]; // [sp+BCh] [bp-DCh] BYREF
  __int16 v121; // [sp+C8h] [bp-D0h] BYREF
  char v122; // [sp+CAh] [bp-CEh]
  int v123; // [sp+CCh] [bp-CCh]
  char v124; // [sp+121h] [bp-77h]
  float32x4_t v125; // 0:q8.16
  float32x4_t v126; // 0:q10.16
  float32x4_t v127; // 0:q12.16

  result = FIELD_U8(a1, 64);
  if ( result )
  {
    v9 = a5;
    v10 = (unsigned __int8 *)sub_6090B350((int)&v121);
    v124 = 2;
    v123 &= ~1u;
    v122 = 0;
    v121 = 256;
    sub_6090B4B0(v10, a2);
    if ( !FIELD_U8(a1, 1376) )
      sub_60967650(a2, a1 + 244, a1 + 292, a4, a5, &dword_60B45CFC);
    sub_60967650(a2, a1 + 532, a1 + 580, a4, a5, &dword_60B45CCC);
    v11 = FIELD_S32(a1, 964);
    v12 = FIELD_S32(a1, 976);
    if ( *(float *)&v11 <= *(float *)&v12 )
    {
      v13 = FIELD_S32(a1, 968);
      v14 = FIELD_S32(a1, 980);
      if ( *(float *)&v13 <= *(float *)&v14 )
      {
        v15 = FIELD_S32(a1, 972);
        v16 = FIELD_S32(a1, 984);
        if ( *(float *)&v15 <= *(float *)&v16 )
        {
          v113[0] = FIELD_U32(a1, 964);
          v113[1] = v13;
          v113[2] = v15;
          v114[0] = v12;
          v114[1] = v13;
          v114[2] = v15;
          v115[0] = v12;
          v115[1] = v13;
          v115[2] = v16;
          v116[0] = v11;
          v116[1] = v13;
          v116[2] = v16;
          v117[0] = v11;
          v117[1] = v14;
          v117[2] = v15;
          v118[0] = v12;
          v118[1] = v14;
          v118[2] = v15;
          v119[0] = v12;
          v119[1] = v14;
          v119[2] = v16;
          v120[0] = v11;
          v120[1] = v14;
          v120[2] = v16;
          if ( FIELD_U8(a1, 1376) )
          {
            sub_601B59CC((float *)&v109, (float *)(a1 + 244));
            v17 = v111.n128_f32[3];
            v18 = v111.n128_f32[2];
            v19 = v111.n128_f32[1];
            v20 = v111.n128_f32[0];
            v21 = v110.n128_f32[3];
            v22 = v110.n128_f32[2];
            v23 = v110.n128_f32[1];
            v24 = v110.n128_f32[0];
            v25 = v109.n128_u64[0];
            v26 = v109.n128_u64[1];
            v27 = 0;
            do
            {
              v28 = (float *)&v113[v27];
              v27 += 3;
              v29 = v28[1];
              v30 = v28[2];
              v31 = (float)((float)(v29 * *((float *)&v25 + 1)) + (float)(*v28 * *(float *)&v25))
                  + (float)(v30 * *(float *)&v26);
              v32 = (float)((float)(v29 * v23) + (float)(*v28 * v24)) + (float)(v30 * v22);
              v33 = (float)((float)(v29 * v19) + (float)(*v28 * v20)) + (float)(v30 * v18);
              *v28 = *((float *)&v26 + 1) + v31;
              v28[1] = v21 + v32;
              v28[2] = v17 + v33;
            }
            while ( v27 != 24 );
          }
          else
          {
            v34.n64_u64[0] = *(unsigned __int64 *)(a1 + 300);
            v35.n64_u64[0] = *(unsigned __int64 *)(a1 + 316);
            v125 = *(float32x4_t *)(a1 + 244);
            v127 = *(float32x4_t *)(a1 + 260);
            v36 = vdupq_lane_s32(v34, 1);
            v37 = vdupq_lane_s32(v35, 1);
            v126 = *(float32x4_t *)(a1 + 276);
            v38.n64_u64[0] = *(unsigned __int64 *)(a1 + 332);
            v39 = vextq_s8((int8x16_t)vzipq_s32(v36, v36).val, (int8x16_t)0, 0xCu);
            v40 = vmlaq_lane_f32(
                    vmlaq_lane_f32(vmulq_n_f32(v125, FIELD_F32(a1, 308)), v127, *(float32x2_t *)(a1 + 308), 1),
                    v126,
                    v35,
                    0);
            v41 = vmlaq_lane_f32(
                    vmlaq_lane_f32(vmulq_n_f32(v125, FIELD_F32(a1, 292)), v127, *(float32x2_t *)(a1 + 292), 1),
                    v126,
                    v34,
                    0);
            v42 = vdupq_lane_s32(v38, 1);
            v43 = vextq_s8((int8x16_t)vzipq_s32(v37, v37).val, (int8x16_t)0, 0xCu);
            v44.n64_u64[0] = *(unsigned __int64 *)(a1 + 348);
            v45 = vaddq_f32(vextq_s8(v39, v39, 4u), v41);
            v46 = vmlaq_lane_f32(vmulq_n_f32(v125, FIELD_F32(a1, 324)), v127, *(float32x2_t *)(a1 + 324), 1);
            v47 = vmlaq_lane_f32(vmulq_n_f32(v125, FIELD_F32(a1, 340)), v127, *(float32x2_t *)(a1 + 340), 1);
            v48 = vdupq_lane_s32(v44, 1);
            v49 = vextq_s8((int8x16_t)vzipq_s32(v42, v42).val, (int8x16_t)0, 0xCu);
            v109 = v45;
            v110 = vaddq_f32(vextq_s8(v43, v43, 4u), v40);
            v50 = vextq_s8((int8x16_t)vzipq_s32(v48, v48).val, (int8x16_t)0, 0xCu);
            v111 = vaddq_f32(vextq_s8(v49, v49, 4u), vmlaq_lane_f32(v46, v126, v38, 0));
            v112 = vaddq_f32(vextq_s8(v50, v50, 4u), vmlaq_lane_f32(v47, v126, v44, 0));
            sub_6042E898((float *)&v109, (float *)&v109);
            v51 = v111.n128_f32[3];
            v52 = v111.n128_f32[2];
            v53 = v111.n128_f32[1];
            v54 = v111.n128_f32[0];
            v55 = v110.n128_f32[3];
            v56 = v110.n128_f32[2];
            v57 = v110.n128_f32[1];
            v58 = v110.n128_f32[0];
            v59 = v109.n128_u64[0];
            v60 = v109.n128_u64[1];
            v61 = v112.n128_f32[3];
            v62 = v112.n128_f32[2];
            v63 = v112.n128_f32[1];
            v64 = v112.n128_f32[0];
            v65 = 0;
            do
            {
              v66 = (float *)&v113[v65];
              v65 += 3;
              v67 = v66[1];
              v68 = v66[2];
              v69 = v61 + (float)((float)((float)(v67 * v63) + (float)(*v66 * v64)) + (float)(v68 * v62));
              v70 = (float)(v67 * (float)(v57 / v69)) + (float)(*v66 * (float)(v58 / v69));
              v71 = (float)((float)(v67 * (float)(*((float *)&v59 + 1) / v69))
                          + (float)(*v66 * (float)(*(float *)&v59 / v69)))
                  + (float)(v68 * (float)(*(float *)&v60 / v69));
              v72 = (float)(v67 * (float)(v53 / v69)) + (float)(*v66 * (float)(v54 / v69));
              *v66 = (float)(*((float *)&v60 + 1) / v69) + v71;
              v66[1] = (float)(v55 / v69) + (float)(v70 + (float)(v68 * (float)(v56 / v69)));
              v66[2] = (float)(v51 / v69) + (float)(v72 + (float)(v68 * (float)(v52 / v69)));
            }
            while ( v65 != 24 );
          }
          sub_6093AD38(a2, v113, v114, (int)&dword_60B45CEC, v73, v85, v97);
          sub_6093AD38(a2, v117, v118, (int)&dword_60B45CEC, v74, v86, v98);
          sub_6093AD38(a2, v113, v117, (int)&dword_60B45CEC, v75, v87, v99);
          sub_6093AD38(a2, v114, v118, (int)&dword_60B45CEC, v76, v88, v100);
          sub_6093AD38(a2, v115, v116, (int)&dword_60B45CEC, v77, v89, v101);
          sub_6093AD38(a2, v119, v120, (int)&dword_60B45CEC, v78, v90, v102);
          sub_6093AD38(a2, v115, v119, (int)&dword_60B45CEC, v79, v91, v103);
          sub_6093AD38(a2, v116, v120, (int)&dword_60B45CEC, v80, v92, v104);
          sub_6093AD38(a2, v113, v116, (int)&dword_60B45CEC, v81, v93, v105);
          sub_6093AD38(a2, v114, v115, (int)&dword_60B45CEC, v82, v94, v106);
          sub_6093AD38(a2, v117, v120, (int)&dword_60B45CEC, v83, v95, v107);
          sub_6093AD38(a2, v118, v119, (int)&dword_60B45CEC, v84, v96, v108);
          v9 = a5;
        }
      }
    }
    return sub_60964804(a1 + 68, a2, a4, v9, &dword_60B45D1C);
  }
  return result;
}
