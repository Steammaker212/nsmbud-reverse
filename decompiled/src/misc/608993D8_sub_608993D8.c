/* sub_608993D8
 * address: 0x608993D8   size: 2648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608993D8(int a1, unsigned __int8 *a2, int a3, int a4, float a5, int a6, unsigned int a7)
{
  int v11; // r11
  float v12; // s18
  float *v13; // r10
  unsigned int v14; // r5
  int v15; // r6
  int v16; // r0
  void (__fastcall *v17)(unsigned __int8 **); // r1
  double v18; // d1
  float v19; // s20
  double v20; // d0
  float v21; // s22
  int v22; // r6
  int v23; // r0
  int v24; // r6
  int v25; // r5
  bool v27; // zf
  bool v28; // zf
  int v29; // r1
  int v30; // r0
  int v31; // r12
  int v32; // r5
  unsigned __int8 *v33; // r7
  _BYTE *v34; // r2
  bool v35; // zf
  _BYTE *v36; // r1
  bool v37; // zf
  _BYTE *v38; // r1
  bool v39; // zf
  int v40; // s0
  int v41; // r0
  int v42; // r2
  float32x4_t v43; // q8
  float32x4_t v44; // q14
  float32x4_t v45; // q15
  float32x4_t v46; // q0
  float32x4_t v47; // q8
  float32x4_t v49; // q0
  float32x4_t v50; // q1
  float32x4_t v51; // q2
  float32x4_t v52; // q3
  float32x4_t v53; // q6
  float32x4_t v58; // q10
  __int128 v59; // q0
  float32x4_t v60; // q1
  int64x2_t v61; // q10
  float32x4_t v62; // q14
  float32x4_t v63; // q9
  float v64; // s2
  int v65; // r0
  float v66; // s2
  bool v67; // zf
  int v68; // r6
  int v69; // r0
  float v70; // s0
  float *v72; // r11
  int v73; // r10
  int v74; // r0
  unsigned int v75; // s4
  int v76; // r1
  float v77; // s2
  float v78; // s0
  float v79; // s4
  int v80; // r8
  int v81; // r9
  float v82; // s24
  float v83; // s0
  int v84; // r0
  bool v85; // cc
  int v86; // r0
  int v87; // r1
  int v88; // r3
  unsigned int v89; // r1
  _BOOL4 v90; // r0
  bool v91; // zf
  int v92; // r0
  int v93; // r6
  int v94; // r5
  bool v95; // zf
  bool v96; // zf
  bool v97; // zf
  int v98; // r0
  __int64 v99; // d17
  float v100; // s16
  int v101; // r0
  int v102; // r0
  int v103; // [sp+10h] [bp-68h]
  int v104; // [sp+14h] [bp-64h]
  unsigned __int8 *v105; // [sp+18h] [bp-60h] BYREF
  _DWORD v106[23]; // [sp+1Ch] [bp-5Ch] BYREF
  float32x4_t v107; // 0:q11.16
  int32x4x2_t v108; // 0:kr00_32.32
  int8x8x2_t v109; // 0:d24.8,8:d25.8
  int8x8x2_t v110; // 0:d26.8,8:d27.8
  int32x4x2_t v111; // 0:q11.16,16:q13.16
  int32x4x2_t v112; // 0:q12.16,16:q15.16

  v11 = *((_DWORD *)a2 + 34);
  v12 = *((float *)a2 + 17);
  v13 = *((float **)a2 + 29);
  v14 = FIELD_U32(v11, 2036);
  v15 = FIELD_U32(v11, 2044);
  v16 = sub_60880930((int)a2, a3);
  v17 = (void (__fastcall *)(unsigned __int8 **))(v15 + v14);
  LODWORD(v18) = v15 + v14;
  v19 = (float)v14;
  *(float *)&v20 = a5;
  v21 = (float)(v15 + v14);
  if ( !v16 )
    *(float *)&v20 = *((float *)a2 + 19) + a5;
  *((_DWORD *)a2 + 19) = LODWORD(v20);
  v22 = 0;
  if ( a2[7] )
    return v22;
  v105 = a2;
  v23 = *((_DWORD *)a2 + 178);
  v24 = *((_DWORD *)a2 + 176);
  v25 = *((_DWORD *)a2 + 177);
  _ZF = v23 == 0;
  if ( v23 )
  {
    v17 = *(void (__fastcall **)(unsigned __int8 **))(v23 + 8);
    _ZF = v17 == 0;
  }
  if ( !_ZF )
    v17(&v105);
  v27 = v24 == 0;
  if ( v24 )
  {
    v17 = *(void (__fastcall **)(unsigned __int8 **))(v24 + 8);
    v27 = v17 == 0;
  }
  if ( !v27 )
    v17(&v105);
  v28 = v25 == 0;
  if ( v25 )
  {
    v17 = *(void (__fastcall **)(unsigned __int8 **))(v25 + 8);
    v28 = v17 == 0;
  }
  if ( !v28 )
    v17(&v105);
  *((float *)a2 + 18) = a5;
  v29 = *a2;
  if ( *a2 )
  {
    if ( *(_BYTE *)(*((_DWORD *)a2 + 34) + 2020) )
    {
      LODWORD(v18) = 1120403456;
      v21 = *((float *)a2 + 229);
      *(float *)&v20 = (float)FIELD_U32(v11, 2040) / 100.0;
      v19 = v21 * *(float *)&v20;
      if ( FIELD_U8(v11, 2032) )
      {
        *(float *)&v20 = (float)FIELD_U32(v11, 2044);
        v21 = v19 + *(float *)&v20;
      }
    }
  }
  *((_DWORD *)a2 + 3) = 0;
  v30 = *((_DWORD *)a2 + 87);
  if ( FIELD_U8(v30, 1) && (!v29 || *(_BYTE *)(*((_DWORD *)a2 + 34) + 2020)) )
  {
    v31 = 0;
    v32 = 0;
    v33 = a2 + 1064;
    do
    {
      v34 = *(_BYTE **)(v30 + 4 * v32 + 488);
      v35 = v34 == 0;
      if ( v34 )
        v35 = *v34 == 0;
      if ( !v35 && (!a2[v32 + 1232] || v34[1]) )
      {
        sub_608A3FAC(v33, *((float *)a2 + 17));
        v31 = *((_DWORD *)a2 + 3) + 1;
        *((_DWORD *)a2 + 3) = v31;
        v30 = *((_DWORD *)a2 + 87);
      }
      ++v32;
      v33 += 12;
    }
    while ( v32 != 14 );
    v36 = *(_BYTE **)(v30 + 524);
    v37 = v36 == 0;
    if ( v36 )
      v37 = *v36 == 0;
    if ( !v37 && (!a2[1241] || v36[1]) )
    {
      LODWORD(v18) = *((_DWORD *)a2 + 293);
      *(float *)&v20 = v13[107] * *(float *)&v18;
      *((_DWORD *)a2 + 293) = LODWORD(v20);
    }
    v38 = *(_BYTE **)(v30 + 536);
    v39 = v38 == 0;
    if ( v38 )
      v39 = *v38 == 0;
    if ( !v39 && (!a2[1244] || v38[1]) )
    {
      *((float *)a2 + 302) = *((float *)a2 + 302) * v13[52];
      *((float *)a2 + 303) = *((float *)a2 + 303) * v13[53];
      LODWORD(v18) = *((_DWORD *)a2 + 304);
      *(float *)&v20 = *(float *)&v18 * v13[54];
      *((_DWORD *)a2 + 304) = LODWORD(v20);
    }
    if ( v31 >= 1 )
    {
      v40 = *(_DWORD *)(FIELD_U32(v30, 12) + 2232);
      v30 = (int)(a2 + 1136);
      LODWORD(v18) = *((_DWORD *)a2 + 284);
      *(float *)&v20 = (float)v40;
      if ( *(float *)&v18 > *(float *)&v20 )
        *(_DWORD *)v30 = LODWORD(v20);
    }
  }
  else
  {
    *((float *)a2 + 293) = *(float *)(FIELD_U32(v30, 12) + 2404) * v13[107];
    v41 = FIELD_U32(v30, 12);
    *((float *)a2 + 302) = FIELD_F32(v41, 2152) * v13[52];
    *((float *)a2 + 303) = FIELD_F32(v41, 2156) * v13[53];
    LODWORD(v18) = FIELD_U32(v41, 2160);
    v30 = (int)(a2 + 1216);
    *(float *)&v20 = *(float *)&v18 * v13[54];
    *((_DWORD *)a2 + 304) = LODWORD(v20);
  }
  sub_60898D38(v20, v18, v30, (float32x2_t *)a2);
  if ( *((float *)a2 + 17) != 0.0 )
  {
    v109 = *((int8x8x2_t *)a2 + 35);
    v110 = *((int8x8x2_t *)a2 + 36);
    *(int8x8_t *)&v43.n128_i8[8] = vtbl2_s8(v109, (int8x8_t)0xF0E0D0C03020100LL);
    v43.n128_u64[0] = vtbl2_s8(v109, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    v107 = *((float32x4_t *)a2 + 34);
    *(int8x8_t *)&v44.n128_i8[8] = vtbl2_s8(v109, (int8x8_t)0xF0E0D0C07060504LL);
    v44.n128_u64[0] = vtbl2_s8(v109, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    *(int8x8_t *)&v45.n128_i8[8] = vtbl2_s8(v110, (int8x8_t)0xF0E0D0C07060504LL);
    v45.n128_u64[0] = vtbl2_s8(v110, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    *(int8x8_t *)&v46.n128_i8[8] = vtbl2_s8(v110, (int8x8_t)0xF0E0D0C03020100LL);
    v46.n128_u64[0] = vtbl2_s8(v110, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    v47 = vmlsq_f32(vmulq_f32(vmulq_f32(v107, v43), v45), vmulq_f32(v107, v44), v46);
    v112 = vzipq_s32((int32x4_t)v109, (int32x4_t)0);
    v111 = vzipq_s32(v107, (int32x4_t)v110);
    v108 = vzipq_s32(v111.val[0], v112.val[0]);
    v111.val[1] = vzipq_s32(v111.val[1], v112.val[1]).val[0];
    v46.n128_u64[0] = vpadd_f32((float32x2_t)v47.n128_u64[0], *(float32x2_t *)&v47.n128_i8[8]).n64_u64[0];
    v46.n128_f32[0] = v46.n128_f32[0] + v46.n128_f32[1];
    _Q14 = vdupq_lane_s32((int32x2_t)v46.n128_u64[0], 0);
    v49 = vrecpeq_f32(_Q14);
    v112.val[1] = vmulq_f32(v49, vrecpsq_f32(v49, _Q14));
    *(int8x8_t *)&v50.n128_i8[8] = vtbl2_s8((int8x8x2_t)v108.val[1], (int8x8_t)0xF0E0D0C07060504LL);
    v50.n128_u64[0] = vtbl2_s8((int8x8x2_t)v108.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    v112.val[1] = vmulq_f32(v112.val[1], vrecpsq_f32(v112.val[1], _Q14));
    *(int8x8_t *)&v49.n128_i8[8] = vtbl2_s8((int8x8x2_t)v111.val[1], (int8x8_t)0xF0E0D0C03020100LL);
    v49.n128_u64[0] = vtbl2_s8((int8x8x2_t)v111.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    *(int8x8_t *)&v51.n128_i8[8] = vtbl2_s8((int8x8x2_t)v111.val[1], (int8x8_t)0xF0E0D0C07060504LL);
    v51.n128_u64[0] = vtbl2_s8((int8x8x2_t)v111.val[1], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    *(int8x8_t *)&v111.val[1].n128_i8[8] = vtbl2_s8((int8x8x2_t)v108.val[1], (int8x8_t)0xF0E0D0C03020100LL);
    v111.val[1].n128_u64[0] = vtbl2_s8((int8x8x2_t)v108.val[1], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    *(int8x8_t *)&v52.n128_i8[8] = vtbl2_s8((int8x8x2_t)v108.val[0], (int8x8_t)0xF0E0D0C03020100LL);
    v112.val[0] = vmlsq_f32(vmulq_f32(v111.val[1], v51), v49, v50);
    v52.n128_u64[0] = vtbl2_s8((int8x8x2_t)v108.val[0], (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    *(int8x8_t *)&v53.n128_i8[8] = vtbl2_s8((int8x8x2_t)v108.val[0], (int8x8_t)0xF0E0D0C07060504LL);
    __asm { VCEQ.F32        Q9, Q14, #0.0 }
    v53.n128_u64[0] = vtbl2_s8((int8x8x2_t)v108.val[0], (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    v58 = vmlsq_f32(vmulq_f32(v49, v53), v51, v52);
    v59 = *((_OWORD *)a2 + 37);
    v60 = vmlsq_f32(vmulq_f32(v50, v52), v111.val[1], v53);
    v112.val[0] = vmulq_f32(v112.val[1], v112.val[0]);
    v111.val[0] = vmulq_n_f32(v112.val[0], *(float *)&v59);
    v111.val[1] = vbslq_s64(_Q9, (int64x2_t)0, v112.val[0]);
    v61 = vmulq_f32(v112.val[1], v58);
    v112.val[0] = vmulq_f32(v112.val[1], v60);
    v62 = vbslq_s64(_Q9, (int64x2_t)0, v61);
    v112.val[1] = vbslq_s64(_Q9, (int64x2_t)0, v112.val[0]);
    v63 = vbslq_s64(
            _Q9,
            (int64x2_t)0,
            vmlsq_lane_f32(
              vmlsq_lane_f32(vnegq_f32(v111.val[0]), v61, *(float32x2_t *)&v59, 1),
              v112.val[0],
              *((float32x2_t *)&v59 + 1),
              0));
    *((float32x4_t *)a2 + 43) = vsubq_f32(
                                  vaddq_f32(
                                    v63,
                                    vmlaq_lane_f32(
                                      vmlaq_lane_f32(
                                        vmulq_n_f32(v111.val[1], *(float *)&v59),
                                        v62,
                                        *(float32x2_t *)&v59,
                                        1),
                                      v112.val[1],
                                      *((float32x2_t *)&v59 + 1),
                                      0)),
                                  vaddq_f32(
                                    v63,
                                    vmlaq_lane_f32(
                                      vmlaq_lane_f32(
                                        vmulq_n_f32(v111.val[1], *((float *)a2 + 168)),
                                        v62,
                                        *((float32x2_t *)a2 + 84),
                                        1),
                                      v112.val[1],
                                      *((float32x2_t *)a2 + 85),
                                      0)));
  }
  if ( FIELD_U8(v11, 1883) || FIELD_U8(v11, 1884) )
  {
    v64 = *((float *)a2 + 28);
    if ( v64 < 1.0 )
    {
      v65 = FIELD_U32(v11, 1900);
      if ( v65 < 1 || (v66 = v64 + (float)(a5 / (float)v65), *((float *)a2 + 28) = v66, v66 > 1.0) )
        *((_DWORD *)a2 + 28) = 1065353216;
    }
  }
  v67 = a4 == 0;
  v68 = a6;
  if ( !a4 )
    v67 = a2[1060] == 0;
  if ( !v67 )
  {
    v42 = FIELD_U8(v11, 1876) == 0;
    v68 = v42 & a6;
    if ( FIELD_U8(v11, 1877) || FIELD_U8(v11, 1878) )
    {
      v69 = FIELD_U32(v11, 1896);
      if ( v69 <= 0 || (v70 = *((float *)a2 + 27) - (float)(a5 / (float)v69), *((float *)a2 + 27) = v70, v70 < 0.0) )
      {
        v22 = 0;
        *((_DWORD *)a2 + 27) = 0;
        return v22;
      }
    }
  }
  v103 = v11;
  v104 = a4;
  v72 = v13;
  v73 = a1;
  a2[1252] = 0;
  if ( !*a2 )
  {
    if ( *((_BYTE *)v72 + 10) )
    {
      if ( *((int *)v72 + 134) >= 1 )
      {
        *((_DWORD *)a2 + 25) = *((_DWORD *)a2 + 17);
        v74 = *((_DWORD *)a2 + 34);
        v75 = *((_DWORD *)a2 + 36);
        v76 = 1103515245 * v75 + 12345;
        v42 = v74 + 2048;
        v77 = (float)FIELD_S32(v74, 2052);
        v78 = FIELD_F32(v74, 2048);
        v79 = (float)v75;
        *((_DWORD *)a2 + 36) = v76;
        if ( *((int *)v72 + 134) >= 1 )
        {
          v80 = 1;
          v81 = 0;
          v82 = (float)(v78 * (float)(v77 / 100.0)) * (float)(v79 * 2.3283e-10);
          while ( 1 )
          {
            LODWORD(v83) = (int)(float)((float)((float)(FIELD_F32(v74, 2048) - v82) * *((float *)a2 + 23))
                                      * *(float *)(*((_DWORD *)v72 + 132) + v81 + 84));
            sub_6089DB2C(v73, a2 + 1, a2, LODWORD(v83), v83, 0, *((_DWORD *)v72 + 132) + v81);
            if ( v80 >= *((_DWORD *)v72 + 134) )
              break;
            v74 = *((_DWORD *)a2 + 34);
            ++v80;
            v81 += 96;
          }
        }
      }
    }
  }
  if ( v68 == 1 && a2[3] )
  {
    v42 = *a2;
    if ( *a2 )
    {
      if ( v19 > v12 || !*(_BYTE *)(*((_DWORD *)a2 + 34) + 2020) )
        goto LABEL_87;
    }
    else if ( v19 > v12 )
    {
      goto LABEL_87;
    }
    if ( FIELD_U8(v103, 2032) )
    {
      if ( v21 > v12 )
      {
LABEL_86:
        ((void (__fastcall *)(int, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, float, unsigned __int8 *, unsigned __int8 *, _DWORD))loc_60898898)(
          v73,
          a2 + 80,
          a2 + 84,
          a2 + 88,
          a5,
          a2 + 1,
          a2,
          0);
        goto LABEL_87;
      }
    }
    else if ( v21 > v12 || !*a2 )
    {
      goto LABEL_86;
    }
    if ( a2[1] )
      goto LABEL_87;
    goto LABEL_86;
  }
LABEL_87:
  v84 = *(_DWORD *)(*((_DWORD *)a2 + 87) + 84);
  v85 = v84 < 1;
  if ( v84 >= 1 )
  {
    v42 = *((_DWORD *)a2 + 10);
    v85 = v42 < 1;
  }
  if ( !v85 )
  {
    v86 = 0;
    v87 = 64;
    v88 = 0;
    do
    {
      if ( *(_DWORD *)(*((_DWORD *)a2 + 37) + v86) )
      {
        *(float *)(*((_DWORD *)a2 + 38) + v87) = *(float *)(*((_DWORD *)a2 + 38) + v87) + a5;
        v42 = *((_DWORD *)a2 + 10);
      }
      ++v88;
      v87 += 280;
      v86 += 24;
    }
    while ( v88 < v42 );
  }
  v89 = FIELD_U8(v103, 1874);
  v90 = v89 == 2;
  v91 = v89 == 0;
  if ( FIELD_U8(v103, 1874) )
  {
    v89 = a7;
    v91 = (v90 & a7) == 1;
  }
  if ( v91 )
    sub_60899E38(*((_DWORD *)a2 + 33), (float32x4_t *)a2);
  else
    *((_DWORD *)a2 + 11) = *((_DWORD *)a2 + 10);
  v106[0] = a2;
  v92 = *((_DWORD *)a2 + 178);
  v93 = *((_DWORD *)a2 + 176);
  v94 = *((_DWORD *)a2 + 177);
  v95 = v92 == 0;
  if ( v92 )
  {
    v89 = FIELD_U32(v92, 16);
    v95 = v89 == 0;
  }
  if ( !v95 )
    ((void (__fastcall *)(_DWORD *))v89)(v106);
  v96 = v93 == 0;
  if ( v93 )
  {
    v89 = FIELD_U32(v93, 16);
    v96 = v89 == 0;
  }
  if ( !v96 )
    ((void (__fastcall *)(_DWORD *))v89)(v106);
  v97 = v94 == 0;
  if ( v94 )
  {
    v89 = FIELD_U32(v94, 16);
    v97 = v89 == 0;
  }
  if ( !v97 )
    ((void (__fastcall *)(_DWORD *))v89)(v106);
  v98 = *((_DWORD *)a2 + 10);
  if ( v98 > 0 || (v98 = *(_DWORD *)(*((_DWORD *)a2 + 87) + 580)) != 0 )
    sub_6089AB20(v98, a2, *((float *)a2 + 18), *((float *)a2 + 19));
  v99 = *((_QWORD *)a2 + 75);
  *((_QWORD *)a2 + 84) = *((_QWORD *)a2 + 74);
  *((_QWORD *)a2 + 85) = v99;
  *((float *)a2 + 17) = *((float *)a2 + 17) + a5;
  if ( *a2 && !*(_BYTE *)(*((_DWORD *)a2 + 34) + 2020) )
  {
    v22 = 1;
    if ( a2[5] == 1 )
      return v12 <= (float)((float)(v19 + *((float *)a2 + 25)) + (float)FIELD_S32(v103, 2232));
    return v22;
  }
  if ( FIELD_U8(v103, 2032) && !*((_BYTE *)v72 + 10) )
  {
    v22 = 1;
    if ( FIELD_U8(v103, 2216) == 1 )
      return v22;
    v100 = v21 + (float)FIELD_S32(v103, 2232);
    if ( FIELD_U8(v103, 1877) || FIELD_U8(v103, 1878) )
      v100 = v100 + (float)FIELD_U32(v103, 1896);
    v101 = *(_DWORD *)(*((_DWORD *)a2 + 87) + 576);
    if ( v101 >= 1 )
    {
      if ( v101 == 3 )
      {
        v102 = ((int (__fastcall *)(unsigned __int8 *))loc_6088E688)(a2);
        goto LABEL_136;
      }
      if ( v101 == 2 )
      {
        v102 = sub_60889A18((int)a2);
LABEL_136:
        v100 = v100 + (float)v102;
      }
    }
    return v12 <= v100;
  }
  if ( v104 || a2[1060] || *a2 != 0 )
  {
    v22 = 0;
    if ( v12 > (float)((float)(v19 + *((float *)a2 + 25)) + (float)FIELD_S32(v103, 2232)) )
      return v22;
  }
  v22 = 1;
  if ( !*((_BYTE *)v72 + 10) )
    return v22;
  return !sub_60880AE4((int)a2);
}
