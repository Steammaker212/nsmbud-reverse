/* sub_60889A70
 * address: 0x60889A70   size: 2356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60889A70(int a1, float *a2, float32x4_t *a3)
{
  int v5; // r2
  int v6; // r5
  _DWORD *v7; // r1
  __int64 *v8; // r0
  __int64 v9; // d17
  unsigned __int64 v10; // d1
  float v11; // s4
  unsigned __int64 v12; // d0
  unsigned __int64 v13; // d1
  unsigned __int32 v14; // r10
  _DWORD *v15; // r1
  int v16; // r0
  int v17; // r7
  __int64 *v18; // r2
  __int64 v19; // d17
  __int64 *v20; // r0
  __int64 v21; // d17
  float32x4_t *v22; // r0
  int v23; // r6
  int v24; // r1
  __int64 v26; // d2
  int v27; // r0
  float32x4_t v28; // q8
  unsigned __int32 *v29; // r2
  unsigned __int32 *v30; // r1
  unsigned int *v31; // r3
  float32x4_t v32; // q2
  float32x4_t v33; // q4
  float32x4_t v34; // q3
  float32x4_t v35; // q5
  float32x4_t v36; // q2
  float32x4_t v37; // q5
  float32x4_t v38; // q4
  int8x16_t v39; // q9
  int8x16_t v40; // q9
  unsigned __int32 *v41; // r9
  int8x16_t v42; // q8
  int8x16_t v43; // q8
  unsigned __int64 *v44; // r7
  float32x4_t *v45; // r1
  float32x4_t v46; // q9
  float32x4_t v47; // q8
  unsigned __int32 v48; // r2
  unsigned int v49; // r3
  unsigned int v50; // r6
  float32x4_t v51; // q9
  float32x4_t v53; // q10
  float32x4_t v54; // q10
  float32x4_t v55; // q11
  int v61; // r2
  unsigned __int32 v62; // r0
  __int64 *v63; // r3
  __int64 v64; // d17
  __int64 *v65; // r2
  __int64 v66; // d17
  float32x4_t v67; // q8
  float32x4_t v69; // q10
  float32x4_t v70; // q10
  float32x4_t v71; // q11
  int64x2_t v73; // q9
  int v74; // r1
  int v75; // r2
  int v76; // r3
  int v77; // r7
  _DWORD *v78; // r0
  int v79; // r0
  float32x4_t *v80; // r0
  float32x4_t v81; // q8
  float32x4_t v82; // q9
  float32x2_t v83; // d18
  float32x4_t *v85; // r1
  float32x4_t v86; // q9
  float32x4_t v88; // q9
  int64x2_t v89; // q11
  unsigned __int32 v90; // r2
  unsigned __int32 v91; // r3
  unsigned __int32 v92; // r7
  unsigned __int32 v93; // r1
  int v94; // r6
  int v95; // r12
  int v96; // lr
  float32x4_t v98; // q9
  float32x4_t v100; // q9
  float32x4_t *v101; // r1
  float32x4_t v102; // q9
  float32x4_t v103; // q8
  float32x4_t v104; // q8
  float32x4_t v106; // q8
  int64x2_t v107; // q11
  unsigned __int32 v108; // r2
  unsigned __int32 v109; // r3
  unsigned __int32 v110; // r7
  unsigned __int32 v111; // r1
  unsigned __int32 v112; // r2
  unsigned __int32 v113; // r3
  unsigned __int32 v114; // r7
  float32x4_t *v115; // r0
  int v116; // r2
  float v117; // s1
  float v118; // s0
  int v119; // r1
  int v120; // r2
  int v121; // r1
  unsigned __int32 v122; // r3
  int v123; // r0
  int v124; // r1
  unsigned __int32 v125; // r6
  _DWORD *v126; // r1
  int v127; // r7
  float v128; // s0
  __int64 v129; // d2
  __int64 v130; // d3
  __int64 v131; // d16
  __int64 v132; // d17
  __int64 v133; // d18
  __int64 v134; // d19
  int v135; // s2
  float v136; // s2
  int v138; // [sp+14h] [bp-A4h]
  int v139; // [sp+18h] [bp-A0h]
  int v140; // [sp+1Ch] [bp-9Ch]
  char v141[8]; // [sp+20h] [bp-98h] BYREF
  float v142; // [sp+28h] [bp-90h]
  float32x4_t v143; // [sp+30h] [bp-88h] BYREF
  int8x16_t v144; // [sp+40h] [bp-78h] BYREF
  __int64 v145; // [sp+50h] [bp-68h]
  __int64 v146; // [sp+58h] [bp-60h]
  __int64 v147; // [sp+60h] [bp-58h] BYREF
  __int64 v148; // [sp+68h] [bp-50h]

  v5 = *((_DWORD *)a2 + 2);
  v6 = *(_DWORD *)(FIELD_U32(v5, 348) + 580);
  v138 = FIELD_U32(v5, 732);
  v140 = v5;
  v139 = sub_608966DC(v5 + 1376, FIELD_U32(v138, 48));
  a3[6].n128_f32[3] = a2[3];
  a3[7].n128_f32[0] = a2[4];
  a3[6].n128_u32[2] = 0;
  v7 = *((_DWORD **)a2 + 2);
  v8 = (__int64 *)(v7[77] + 16 * *((_DWORD *)a2 + 5));
  v9 = v8[1];
  v147 = *v8;
  v148 = v9;
  ((void (__fastcall *)(_DWORD, float32x4_t *, _DWORD, __int64 *, float, float))loc_60884A14)(
    v7[33],
    a3,
    v7[87],
    &v147,
    a2[4],
    a2[3]);
  ((void (__fastcall *)(_DWORD, float32x4_t *, _DWORD, __int64 *, float, float))loc_6088526C)(
    *(_DWORD *)(*((_DWORD *)a2 + 2) + 132),
    &a3[1],
    *(_DWORD *)(*((_DWORD *)a2 + 2) + 348),
    &v147,
    a2[4],
    a2[3]);
  v10 = FIELD_U64(a3, 0x0)[1];
  v11 = *(float *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)a2 + 2) + 348) + 16) + 864);
  *(float *)&v12 = v11 * FIELD_F32(a3, 0x0)[0];
  *((float *)&v12 + 1) = v11 * FIELD_F32(a3, 0x0)[1];
  *(float *)&v10 = v11 * *(float *)&v10;
  FIELD_U64(a3, 0x0)[0] = v12;
  FIELD_U64(a3, 0x0)[1] = v10;
  v13 = a3[1].n128_u64[1];
  *(float *)&v12 = v11 * a3[1].n128_f32[0];
  *((float *)&v12 + 1) = v11 * a3[1].n128_f32[1];
  *(float *)&v13 = v11 * *(float *)&v13;
  a3[1].n128_u64[0] = v12;
  a3[1].n128_u64[1] = v13;
  v14 = a3[5].n128_u32[1];
  a3[5].n128_u32[1] = FIELD_U32(v14, 52);
  v15 = *((_DWORD **)a2 + 2);
  v16 = *((_DWORD *)a2 + 5);
  v17 = FIELD_U32(v6, 4);
  v18 = (__int64 *)(v15[77] + 16 * v16);
  v19 = v18[1];
  v147 = *v18;
  v148 = v19;
  v20 = (__int64 *)(v15[76] + 16 * v16);
  v21 = v20[1];
  v145 = *v20;
  v146 = v21;
  ((void (__fastcall *)(_DWORD, int8x16_t *, _DWORD, float, float))loc_608840C8)(v15[33], &v144, v15[87], a2[4], a2[3]);
  v22 = *((float32x4_t **)a2 + 2);
  v144 = vmulq_f32(v144, *(float32x4_t *)(v22[7].n128_u32[1] + 304));
  v23 = *((_DWORD *)a2 + 5);
  v24 = v22[18].n128_u32[1] + 16 * v23;
  _Q0.n128_u64[0] = *(_QWORD *)v24;
  v26 = FIELD_U32(v24, 8);
  if ( v17 )
  {
    _Q0.n128_u64[1] = (unsigned int)v26;
    v27 = v22[18].n128_u32[2] + 16 * v23;
    v28.n128_u64[0] = *(_QWORD *)v27;
    v28.n128_u64[1] = FIELD_U32(v27, 8);
  }
  else
  {
    v29 = (unsigned __int32 *)(v22[20].n128_u32[2] + 16 * v23);
    v30 = (unsigned __int32 *)(v22[20].n128_u32[1] + 16 * v23);
    v31 = (unsigned int *)(v22[20].n128_u32[3] + 16 * v23);
    if ( *(_BYTE *)(v22[8].n128_u32[2] + 1875) == 2 )
    {
      v32 = v22[37];
      v35.n128_u32[1] = *v29;
      v34.n128_u32[1] = v29[1];
      v33.n128_u32[1] = v29[2];
      v32.n128_u32[3] = 0;
      v35.n128_u32[0] = *v30;
      v34.n128_u32[0] = v30[1];
      v33.n128_u32[0] = v30[2];
      v35.n128_u64[1] = *v31;
      v33.n128_u64[1] = v31[2];
      v34.n128_u64[1] = v31[1];
    }
    else if ( *(_BYTE *)(v22[8].n128_u32[2] + 1875) )
    {
      v35.n128_u64[1] = *v31;
      v34.n128_u32[1] = v29[1];
      v33.n128_u32[1] = v29[2];
      v32.n128_u32[1] = v29[3];
      v35.n128_u32[1] = *v29;
      v34.n128_u32[0] = v30[1];
      v33.n128_u32[0] = v30[2];
      v32.n128_u32[0] = v30[3];
      v35.n128_u32[0] = *v30;
      v32.n128_u64[1] = v31[3];
      v33.n128_u64[1] = v31[2];
      v34.n128_u64[1] = v31[1];
    }
    else
    {
      v32 = v22[37];
      v33 = v22[36];
      v34 = v22[35];
      v35 = v22[34];
    }
    _Q0 = vaddq_f32(
            v32,
            vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_lane_f32(v34, (float32x2_t)_Q0.n128_u64[0], 1), v35, (float32x2_t)_Q0.n128_u64[0], 0),
              v33,
              (float32x2_t)(unsigned int)v26,
              0));
    if ( *(_BYTE *)(v22[8].n128_u32[2] + 1875) )
    {
      v38.n128_u64[1] = *v31;
      v37.n128_u32[1] = v29[1];
      v36.n128_u32[1] = v29[2];
      v38.n128_u32[1] = *v29;
      v37.n128_u32[0] = v30[1];
      v36.n128_u32[0] = v30[2];
      v38.n128_u32[0] = *v30;
      v36.n128_u64[1] = v31[2];
      v37.n128_u64[1] = v31[1];
    }
    else
    {
      v36 = v22[36];
      v37 = v22[35];
      v38 = v22[34];
    }
    v28 = vaddq_f32(
            vmlaq_lane_f32(
              vmlaq_lane_f32(
                vmulq_lane_f32(v37, *(float32x2_t *)(v22[18].n128_u32[2] + 16 * v23), 1),
                v38,
                *(float32x2_t *)(v22[18].n128_u32[2] + 16 * v23),
                0),
              v36,
              (float32x2_t)*(unsigned int *)(v22[18].n128_u32[2] + 16 * v23 + 8),
              0),
            (float32x4_t)0);
  }
  a3[4] = _Q0;
  v39 = vextq_s8(*(int8x16_t *)v14, _Q0, 0xCu);
  v40 = vextq_s8(v39, v39, 4u);
  *(int8x16_t *)v14 = v40;
  *(int8x16_t *)v14 = vextq_s8(vextq_s8(v40, v40, 0xCu), v144, 4u);
  v41 = (unsigned __int32 *)(v14 + 16);
  *(float32x4_t *)(v14 + 16) = v28;
  if ( FIELD_U32(v6, 4) )
  {
    v42 = (int8x16_t)0x3F80000000000000uLL;
  }
  else
  {
    v43 = vextq_s8((int8x16_t)0, *(int8x16_t *)(*((_DWORD *)a2 + 2) + 560), 0xCu);
    v42 = vextq_s8(v43, v43, 4u);
  }
  v44 = (unsigned __int64 *)(v14 + 32);
  *(int8x16_t *)(v14 + 32) = v42;
  if ( (unsigned int)(*(_DWORD *)v6 - 1) <= 1 )
  {
    v45 = *((float32x4_t **)a2 + 2);
    if ( *(_BYTE *)(v45[8].n128_u32[2] + 2226) )
    {
      memset(&v143, 0, sizeof(v143));
      if ( a3[6].n128_i32[0] < 1 )
      {
        v48 = FIELD_U32(v14, 20);
        v49 = FIELD_U32(v14, 24);
        v50 = FIELD_U32(v14, 28);
        v143.n128_u32[0] = *v41;
        v143.n128_u32[1] = v48;
        v143.n128_u64[1] = __PAIR64__(v50, v49);
        v47.n128_u64[0] = v143.n128_u64[0];
        v47.n128_u64[1] = __PAIR64__(v50, v49);
      }
      else
      {
        _Q0.n128_f32[0] = 1.0 / v45[4].n128_f32[2];
        v46 = vsubq_f32(*(float32x4_t *)v14, *(float32x4_t *)FIELD_U32(v14, 48));
        v46.n128_u32[3] = 0;
        v47 = vmlaq_f32((float32x4_t)0, v46, vdupq_lane_s32((int32x2_t)_Q0.n128_u64[0], 0));
        v143 = v47;
      }
      v51 = vmulq_f32(v47, v47);
      v51.n128_u64[0] = vadd_f32(*(float32x2_t *)&v51.n128_i8[8], (float32x2_t)v51.n128_u64[0]).n64_u64[0];
      if ( vpadd_f32((float32x2_t)v51.n128_u64[0], (float32x2_t)v51.n128_u64[0]).n64_f32[0] < 0.00001 )
      {
        v47 = v45[36];
        v143 = v47;
      }
      _Q9 = vmulq_f32(v47, v47);
      _Q9.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q9.n128_i8[8], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
      _Q9.n128_u64[0] = vpadd_f32((float32x2_t)_Q9.n128_u64[0], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
      _Q9.n128_u64[1] = _Q9.n128_u64[0];
      v53 = vrsqrteq_f32(_Q9);
      v54 = vmulq_f32(v53, vrsqrtsq_f32(v53, vmulq_f32(v53, _Q9)));
      v55 = vmulq_f32(_Q9, v54);
      __asm { VCEQ.F32        Q9, Q9, #0.0 }
      v143 = vbslq_s64(_Q9, (int64x2_t)0, vmulq_f32(v47, vmulq_f32(v54, vrsqrtsq_f32(v54, v55))));
      v61 = *((_DWORD *)a2 + 5);
      v62 = v45[8].n128_u32[1];
      v63 = (__int64 *)(v45[19].n128_u32[2] + 16 * v61);
      v64 = v63[1];
      v147 = *v63;
      v148 = v64;
      v65 = (__int64 *)(v45[19].n128_u32[1] + 16 * v61);
      v66 = v65[1];
      v145 = *v65;
      v146 = v66;
      ((void (__fastcall *)(unsigned __int32, char *, unsigned __int32, float))loc_60885664)(
        v62,
        v141,
        v45[21].n128_u32[3],
        a2[3]);
      ((void (__fastcall *)(unsigned __int32, unsigned __int32, float32x4_t *, float))loc_608824F4)(
        v14 + 32,
        v14 + 32,
        &v143,
        v142);
      v67.n128_u64[0] = *v44;
      v67.n128_u64[1] = FIELD_U64(v14, 40);
      _Q9 = vmulq_f32(v67, v67);
      _Q9.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q9.n128_i8[8], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
      _Q9.n128_u64[0] = vpadd_f32((float32x2_t)_Q9.n128_u64[0], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
      _Q9.n128_u64[1] = _Q9.n128_u64[0];
      v69 = vrsqrteq_f32(_Q9);
      v70 = vmulq_f32(v69, vrsqrtsq_f32(v69, vmulq_f32(v69, _Q9)));
      v71 = vmulq_f32(_Q9, v70);
      __asm { VCEQ.F32        Q9, Q9, #0.0 }
      v73 = vbslq_s64(_Q9, (int64x2_t)0, vmulq_f32(v67, vmulq_f32(v70, vrsqrtsq_f32(v70, v71))));
      *v44 = v73.n128_u64[0];
      FIELD_U64(v14, 40) = v73.n128_u64[1];
      if ( a3[6].n128_u32[0] == 1 )
      {
        v74 = *(_DWORD *)v44;
        v75 = FIELD_U32(v14, 36);
        v76 = FIELD_U32(v14, 40);
        v77 = FIELD_U32(v14, 44);
        v78 = (_DWORD *)(FIELD_U32(v14, 48) + 32);
        *v78 = v74;
        v78[1] = v75;
        v78[2] = v76;
        v78[3] = v77;
      }
    }
  }
  v79 = a3[6].n128_i32[0];
  if ( (float)v79 < FIELD_F32(v6, 20) )
    a3[6].n128_u32[0] = ++v79;
  if ( v79 >= 2 )
  {
    v80 = *(float32x4_t **)(v14 + 48);
    _Q0.n128_u32[0] = FIELD_U32(v6, 40);
    v81 = vsubq_f32(*(float32x4_t *)v14, *v80);
    v81.n128_u32[3] = 0;
    if ( _Q0.n128_f32[0] <= 0.0 )
    {
      *(_QWORD *)v41 = v81.n128_u64[0];
      FIELD_U64(v14, 24) = v81.n128_u64[1];
    }
    else
    {
      v82 = vmulq_f32(v81, v81);
      v83.n64_u64[0] = vadd_f32(*(float32x2_t *)&v82.n128_i8[8], (float32x2_t)v82.n128_u64[0]).n64_u64[0];
      if ( a3[6].n128_f32[3] >= 2.0 )
      {
        _Q1.n128_u64[0] = vpadd_f32(v83, v83).n64_u64[0];
        if ( _Q1.n128_f32[0] > 0.0 )
        {
          _Q1.n128_u64[1] = _Q1.n128_u64[0];
          v98 = vrsqrteq_f32(_Q1);
          __asm { VCEQ.F32        Q11, Q1, #0.0 }
          v100 = vmulq_f32(v98, vrsqrtsq_f32(v98, vmulq_f32(_Q1, v98)));
          v81 = vbslq_s64(_Q11, (int64x2_t)0, vmulq_f32(v81, vmulq_f32(v100, vrsqrtsq_f32(v100, vmulq_f32(_Q1, v100)))));
        }
        v101 = a3 + 3;
        v102 = vmlaq_f32(a3[3], vsubq_f32(v81, a3[3]), vdupq_lane_s32((int32x2_t)_Q0.n128_u64[0], 0));
        a3[3] = v102;
        v103 = vmulq_f32(v102, v102);
        v94 = v140;
        v95 = v139;
        v96 = v138;
        v103.n128_u64[0] = vadd_f32(*(float32x2_t *)&v103.n128_i8[8], (float32x2_t)v103.n128_u64[0]).n64_u64[0];
        _Q0.n128_u64[0] = vpadd_f32((float32x2_t)v103.n128_u64[0], (float32x2_t)v103.n128_u64[0]).n64_u64[0];
        if ( _Q0.n128_f32[0] > 0.0 )
        {
          _Q0.n128_u64[1] = _Q0.n128_u64[0];
          v104 = vrsqrteq_f32(_Q0);
          __asm { VCEQ.F32        Q11, Q0, #0.0 }
          v106 = vmulq_f32(v104, vrsqrtsq_f32(v104, vmulq_f32(_Q0, v104)));
          v107 = vbslq_s64(
                   _Q11,
                   (int64x2_t)0,
                   vmulq_f32(v102, vmulq_f32(v106, vrsqrtsq_f32(v106, vmulq_f32(_Q0, v106)))));
          FIELD_U64(v101, 0x0)[0] = v107.n128_u64[0];
          a3[3].n128_u64[1] = v107.n128_u64[1];
        }
        v108 = FIELD_U32(v101, 0x0)[0];
        v109 = a3[3].n128_u32[1];
        v110 = a3[3].n128_u32[2];
        v111 = a3[3].n128_u32[3];
        *v41 = v108;
        FIELD_U32(v14, 20) = v109;
        FIELD_U32(v14, 24) = v110;
        FIELD_U32(v14, 28) = v111;
        goto LABEL_39;
      }
      _Q0.n128_u64[0] = vpadd_f32(v83, v83).n64_u64[0];
      v85 = a3 + 3;
      a3[3] = v81;
      if ( _Q0.n128_f32[0] > 0.0 )
      {
        _Q0.n128_u64[1] = _Q0.n128_u64[0];
        v86 = vrsqrteq_f32(_Q0);
        __asm { VCEQ.F32        Q11, Q0, #0.0 }
        v88 = vmulq_f32(v86, vrsqrtsq_f32(v86, vmulq_f32(_Q0, v86)));
        v89 = vbslq_s64(_Q11, (int64x2_t)0, vmulq_f32(v81, vmulq_f32(v88, vrsqrtsq_f32(v88, vmulq_f32(_Q0, v88)))));
        FIELD_U64(v85, 0x0)[0] = v89.n128_u64[0];
        a3[3].n128_u64[1] = v89.n128_u64[1];
      }
      v90 = FIELD_U32(v85, 0x0)[0];
      v91 = a3[3].n128_u32[1];
      v92 = a3[3].n128_u32[2];
      v93 = a3[3].n128_u32[3];
      *v41 = v90;
      FIELD_U32(v14, 20) = v91;
      FIELD_U32(v14, 24) = v92;
      FIELD_U32(v14, 28) = v93;
    }
    v94 = v140;
    v95 = v139;
    v96 = v138;
LABEL_39:
    if ( a3[6].n128_u32[0] == 2 )
    {
      v112 = FIELD_U32(v14, 20);
      v113 = FIELD_U32(v14, 24);
      v114 = FIELD_U32(v14, 28);
      v115 = v80 + 1;
      FIELD_U32(v115, 0x0)[0] = *v41;
      FIELD_U32(v115, 0x0)[1] = v112;
      FIELD_U32(v115, 0x0)[2] = v113;
      FIELD_U32(v115, 0x0)[3] = v114;
    }
    v116 = FIELD_U32(v6, 12);
    v117 = 1.0;
    if ( v116 == 1 )
    {
      v118 = FIELD_F32(v6, 20);
    }
    else
    {
      v118 = 1.0;
      if ( !v116 )
        v118 = (float)a3[6].n128_i32[0];
    }
    v119 = *(_DWORD *)(FIELD_U32(v94, 348) + 12);
    v120 = FIELD_U8(v119, 1884);
    v121 = FIELD_U8(v119, 1878);
    if ( v120 )
      v117 = FIELD_F32(v94, 112);
    if ( v121 )
      v117 = v117 * FIELD_F32(v94, 108);
    v122 = v95 + 80 * FIELD_U32(v96, 24) * a3[6].n128_u32[1];
    if ( FIELD_F32(v6, 16) == 0.0 )
    {
      v123 = a3[6].n128_i32[0];
      v124 = 0;
      if ( v123 >= 3 )
      {
        v125 = a3[5].n128_u32[1];
        v126 = (_DWORD *)(v122 + 128);
        v127 = 0;
        v128 = 1.0 / (float)(v118 + -1.0);
        do
        {
          v125 = FIELD_U32(v125, 48);
          v129 = *(_QWORD *)v125;
          v130 = FIELD_U64(v125, 8);
          v131 = FIELD_U64(v125, 32);
          v132 = FIELD_U64(v125, 40);
          v133 = FIELD_U64(v125, 16);
          v134 = FIELD_U64(v125, 24);
          *((_QWORD *)v126 - 16) = *(_QWORD *)v125;
          *(v126 - 30) = v130;
          *((float *)v126 - 29) = v117 * *((float *)&v130 + 1);
          v135 = v127;
          *((_QWORD *)v126 - 14) = v133;
          ++v127;
          v136 = (float)v135;
          *(v126 - 26) = v134;
          *((float *)v126 - 25) = v128 * v136;
          *((_QWORD *)v126 - 12) = v131;
          *(v126 - 22) = v132;
          *((float *)v126 - 21) = v136;
          *(v126 - 13) = 0;
          *(v126 - 14) = 0;
          *(v126 - 15) = 0;
          *(v126 - 16) = 0;
          *(v126 - 17) = 0;
          *(v126 - 18) = 0;
          *(v126 - 19) = 0;
          *(v126 - 20) = 0;
          *((_QWORD *)v126 - 6) = v129;
          *(v126 - 10) = v130;
          *((float *)v126 - 9) = -(float)(v117 * *((float *)&v130 + 1));
          *((_QWORD *)v126 - 4) = v133;
          *(v126 - 6) = v134;
          *((float *)v126 - 5) = v128 * v136;
          *((_QWORD *)v126 - 2) = v131;
          *(v126 - 2) = v132;
          *((float *)v126 - 1) = v136;
          *v126 = 0;
          v126[1] = 0;
          v126[2] = 0;
          v126[3] = 0;
          v126[4] = 0;
          v126[5] = 0;
          v126[6] = 0;
          v126[7] = 0;
          v126 += 40;
        }
        while ( v123 != v127 );
        v124 = 2 * v123;
      }
      a3[6].n128_u32[2] = v124;
    }
    else
    {
      ((void (__fastcall *)(unsigned __int32, float32x4_t *, int, unsigned __int32, float, float))loc_6088946C)(
        5 * FIELD_U32(v96, 24) * a3[6].n128_u32[1],
        a3,
        v6,
        v122,
        v118,
        v117);
    }
  }
  return nullsub_99(*((_DWORD *)a2 + 2) + 1376);
}
