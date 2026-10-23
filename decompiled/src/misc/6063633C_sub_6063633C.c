/* sub_6063633C
 * address: 0x6063633C   size: 2220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6063633C(int a1, int a2, int a3, int a4, float a5, int a6)
{
  int v7; // r5
  char v12; // r9
  float v13; // s24
  float v14; // s20
  float v15; // s26
  int v16; // r11
  float v17; // s18
  float v18; // s0
  float *v19; // r4
  float *v20; // r1
  int v21; // r0
  float v22; // s0
  unsigned int v23; // r4
  unsigned int v24; // r6
  int v25; // r0
  int v26; // r1
  unsigned int v27; // r6
  float v28; // s22
  float v29; // s0
  int v30; // r7
  unsigned int v31; // r4
  float *v32; // r0
  float v33; // r1
  float *v34; // r0
  float v35; // r2
  int v36; // r0
  unsigned int v37; // r6
  int v38; // r0
  int v39; // r2
  bool v40; // cc
  unsigned int v41; // r0
  int v42; // r7
  int v43; // r0
  unsigned int v44; // r4
  unsigned int v45; // r6
  int v46; // r0
  unsigned int v47; // r0
  int v48; // r7
  int v49; // r0
  unsigned int v50; // r4
  unsigned int v51; // r6
  int v52; // r0
  float v53; // s0
  unsigned int v54; // r0
  int v55; // r7
  unsigned int v56; // r4
  float *v57; // r0
  float v58; // r1
  float *v59; // r0
  float v60; // r2
  int v61; // r0
  unsigned int v62; // r6
  int v63; // r0
  unsigned int v64; // r0
  int v65; // r4
  unsigned int v66; // r5
  float v67; // s0
  unsigned int v68; // r0
  int v69; // r7
  float *v70; // r2
  unsigned int v71; // r4
  float *v72; // r0
  float v73; // r1
  int v74; // r0
  unsigned int v75; // r6
  int v76; // r0
  float v77; // s0
  unsigned int v78; // r0
  int v79; // r4
  int v81; // [sp+18h] [bp-A0h]
  unsigned int v82; // [sp+1Ch] [bp-9Ch]
  unsigned int v83; // [sp+1Ch] [bp-9Ch]
  unsigned int v84; // [sp+1Ch] [bp-9Ch]
  int v85; // [sp+20h] [bp-98h]
  float v86; // [sp+30h] [bp-88h] BYREF
  float v87; // [sp+34h] [bp-84h]
  int v88; // [sp+38h] [bp-80h]
  float v89; // [sp+40h] [bp-78h] BYREF
  float v90[2]; // [sp+44h] [bp-74h] BYREF
  float v91; // [sp+4Ch] [bp-6Ch] BYREF
  float v92; // [sp+50h] [bp-68h]
  int v93; // [sp+54h] [bp-64h]
  float v94[24]; // [sp+58h] [bp-60h] BYREF

  v7 = a6;
  v12 = FIELD_U8(a6, 332);
  v91 = 8.0;
  v92 = -8.0;
  v93 = 0;
  v89 = *(float *)&dword_60CB44C4;
  LODWORD(v90[0]) = dword_60CB44C8;
  LODWORD(v90[1]) = dword_60CB44CC;
  lift_zen_kanaami_ref(a1, a2, a6, &v91, a5, &dword_60CB44C4, 0);
  v85 = a3;
  v81 = a4;
  v13 = (float)(a4 - 2);
  v14 = (float)(a3 - 2);
  if ( **(_BYTE **)(a6 + 12) )
    sub_60638F44(a1, a2, a6 + 8, a5);
  v15 = 8.0;
  v16 = 1;
  v17 = (float)(v14 * 8.0) + 8.0;
  v18 = v17 + v91;
  v91 = v17 + v91;
  if ( a3 >= 3 )
  {
    v19 = &v89;
    v89 = (float)(a3 - 2);
    lift_zen_kanaami_ref(a1 + 16, a2, a6 + 36, &v91, v18, &v89, 0);
    if ( **(_BYTE **)(a6 + 48) )
      sub_60638F44(a1 + 16, a2, a6 + 44, a5);
    v20 = v90;
    if ( (v12 & 1) != 0 )
    {
      v20 = &v89;
      v19 = v90;
    }
    v21 = FIELD_U8(a6, 68);
    v22 = *v19;
    v23 = FIELD_U32(a6, 52);
    v87 = *v20;
    v86 = v22;
    v86 = v22 * FIELD_F32(a6, 64);
    if ( v21 )
    {
      v24 = v23 + 8 * v21;
      do
      {
        v25 = v12 & 8;
        if ( (v12 & 8) != 0 )
          v25 = 1;
        sub_60638F7C(a1 + 16, v23, &v86, a6 + 56, v25);
        v23 += 8;
      }
      while ( v23 < v24 );
    }
    v18 = v91;
    v7 = a6;
    v16 = 2;
  }
  v91 = v17 + v18;
  lift_zen_kanaami_ref(a1 + 16 * v16, a2, v7 + 72, &v91, v17 + v18, &dword_60CB44C4, 0);
  if ( **(_BYTE **)(v7 + 84) )
    sub_60638F44(a1 + 16 * v16, a2, v7 + 80, a5);
  v26 = v12 & 4;
  v27 = v16 + 1;
  v90[0] = v13;
  v91 = 8.0;
  v28 = (float)(v13 * 8.0) + 8.0;
  v29 = v92 - v28;
  v92 = v92 - v28;
  if ( v81 >= 3 )
  {
    v30 = a1 + 16 * v27;
    v89 = 1.0;
    lift_zen_kanaami_ref(v30, a2, v7 + 108, &v91, v29, &v89, 0);
    if ( **(_BYTE **)(v7 + 120) )
      sub_60638F44(a1 + 16 * v27, a2, v7 + 116, a5);
    v31 = FIELD_U32(v7, 124);
    v32 = &v89;
    if ( (v12 & 2) != 0 )
      v32 = v90;
    v33 = *v32;
    v34 = v90;
    if ( (v12 & 2) != 0 )
      v34 = &v89;
    v35 = *v34;
    v36 = FIELD_U8(v7, 140);
    v87 = v35;
    v86 = v33;
    v86 = v33 * FIELD_F32(v7, 136);
    if ( v36 )
    {
      v37 = v31 + 8 * v36;
      do
      {
        v38 = v12 & 8;
        if ( (v12 & 8) != 0 )
          v38 = 1;
        sub_60638F7C(v30, v31, &v86, a6 + 128, v38);
        v31 += 8;
      }
      while ( v31 < v37 );
    }
    v15 = v91;
    v7 = a6;
    v26 = v12 & 4;
    v27 = v16 + 2;
  }
  v39 = v7 + 144;
  v91 = v17 + v15;
  if ( v26 )
  {
    v82 = v27;
    v86 = v14 + 1.0;
    v87 = v13 + 1.0;
    v88 = dword_60CB44CC;
    v47 = 0;
    if ( v27 < 9 )
      v47 = v27;
    v48 = a1 + 16 * v47;
    lift_zen_kanaami_ref(v48, a2, v39, &v91, v13 + 1.0, &v86, 0);
    if ( **(_BYTE **)(v7 + 156) )
      sub_60638F44(v48, a2, v7 + 152, a5);
    v49 = FIELD_U8(v7, 176);
    v50 = FIELD_U32(v7, 160);
    v94[1] = v87;
    v94[0] = v86;
    v94[0] = v86 * FIELD_F32(v7, 172);
    if ( v49 )
    {
      v51 = v50 + 8 * v49;
      do
      {
        v52 = v12 & 8;
        if ( (v12 & 8) != 0 )
          v52 = 1;
        sub_60638F7C(v48, v50, v94, a6 + 164, v52);
        v50 += 8;
      }
      while ( v50 < v51 );
    }
    goto LABEL_52;
  }
  v40 = v85 < 3;
  if ( v85 >= 3 )
    v40 = v81 < 3;
  if ( !v40 )
  {
    v41 = 0;
    v89 = v14;
    v82 = v27;
    if ( v27 < 9 )
      v41 = v27;
    v42 = a1 + 16 * v41;
    lift_zen_kanaami_ref(v42, a2, v39, &v91, v17 + v15, &v89, 0);
    if ( **(_BYTE **)(v7 + 156) )
      sub_60638F44(v42, a2, v7 + 152, a5);
    v43 = FIELD_U8(v7, 176);
    v44 = FIELD_U32(v7, 160);
    v87 = v90[0];
    v86 = v89;
    v86 = v89 * FIELD_F32(v7, 172);
    if ( v43 )
    {
      v45 = v44 + 8 * v43;
      do
      {
        v46 = v12 & 8;
        if ( (v12 & 8) != 0 )
          v46 = 1;
        sub_60638F7C(v42, v44, &v86, a6 + 164, v46);
        v44 += 8;
      }
      while ( v44 < v45 );
    }
LABEL_52:
    v7 = a6;
    v27 = v82 + 1;
  }
  v53 = v17 + v91;
  v91 = v17 + v91;
  if ( v81 >= 3 )
  {
    v83 = v27;
    v89 = 1.0;
    v54 = 0;
    if ( v27 < 9 )
      v54 = v27;
    v55 = a1 + 16 * v54;
    lift_zen_kanaami_ref(v55, a2, v7 + 180, &v91, v53, &v89, 0);
    if ( **(_BYTE **)(v7 + 192) )
      sub_60638F44(v55, a2, v7 + 188, a5);
    v56 = FIELD_U32(v7, 196);
    v57 = &v89;
    if ( (v12 & 2) != 0 )
      v57 = v90;
    v58 = *v57;
    v59 = v90;
    if ( (v12 & 2) != 0 )
      v59 = &v89;
    v60 = *v59;
    v61 = FIELD_U8(v7, 212);
    v87 = v60;
    v86 = v58;
    v86 = v58 * FIELD_F32(v7, 208);
    if ( v61 )
    {
      v62 = v56 + 8 * v61;
      do
      {
        v63 = v12 & 8;
        if ( (v12 & 8) != 0 )
          v63 = 1;
        sub_60638F7C(v55, v56, &v86, a6 + 200, v63);
        v56 += 8;
      }
      while ( v56 < v62 );
    }
    v7 = a6;
    v27 = v83 + 1;
  }
  v91 = 8.0;
  v64 = 0;
  if ( v27 < 9 )
    v64 = v27;
  v65 = a1 + 16 * v64;
  v92 = v92 - v28;
  lift_zen_kanaami_ref(v65, a2, v7 + 216, &v91, v92, &dword_60CB44C4, 0);
  if ( **(_BYTE **)(v7 + 228) )
    sub_60638F44(v65, a2, v7 + 224, a5);
  v66 = v27 + 1;
  v67 = v17 + v91;
  v91 = v17 + v91;
  if ( v85 >= 3 )
  {
    v89 = v14;
    v84 = v27;
    v90[0] = 1.0;
    v68 = 0;
    if ( v66 < 9 )
      v68 = v27 + 1;
    v69 = a1 + 16 * v68;
    lift_zen_kanaami_ref(v69, a2, a6 + 252, &v91, v67, &v89, 0);
    if ( **(_BYTE **)(a6 + 264) )
      sub_60638F44(v69, a2, a6 + 260, a5);
    v70 = v90;
    v71 = FIELD_U32(a6, 268);
    v72 = &v89;
    if ( (v12 & 1) != 0 )
    {
      v72 = v90;
      v70 = &v89;
    }
    v73 = *v72;
    v74 = FIELD_U8(a6, 284);
    v87 = *v70;
    v86 = v73;
    v86 = v73 * FIELD_F32(a6, 280);
    if ( v74 )
    {
      v75 = v71 + 8 * v74;
      do
      {
        v76 = v12 & 8;
        if ( (v12 & 8) != 0 )
          v76 = 1;
        sub_60638F7C(v69, v71, &v86, a6 + 272, v76);
        v71 += 8;
      }
      while ( v71 < v75 );
    }
    v67 = v91;
    v66 = v84 + 2;
  }
  v77 = v17 + v67;
  v78 = 0;
  if ( v66 < 9 )
    v78 = v66;
  v79 = a1 + 16 * v78;
  v91 = v77;
  lift_zen_kanaami_ref(v79, a2, a6 + 288, &v91, v77, &dword_60CB44C4, 0);
  if ( **(_BYTE **)(a6 + 300) )
    sub_60638F44(v79, a2, a6 + 296, a5);
  FIELD_U8(a1, 144) = v66 + 1;
  return v66 + 1;
}
