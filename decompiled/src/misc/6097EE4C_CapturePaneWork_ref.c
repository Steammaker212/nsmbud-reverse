/* CapturePaneWork_ref
 * address: 0x6097EE4C   size: 1580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CapturePaneWork_ref(int a1, _DWORD *a2, char *a3, int a4, int a5, int a6, int a7, int a8)
{
  char v8; // r5
  _DWORD *v9; // r7
  float v10; // s0
  float v11; // s2
  int v12; // r0
  float v13; // s4
  unsigned int v14; // s0
  unsigned int v15; // r2
  unsigned int v16; // r4
  int v17; // r3
  int v18; // r1
  int v19; // r3
  int v20; // r8
  int v21; // r6
  _WORD *v22; // r9
  int v23; // r10
  int v24; // r3
  int v25; // r4
  int v26; // r5
  int v27; // r7
  int v28; // r3
  int v29; // r4
  int v30; // r5
  int v31; // r7
  int v32; // r3
  int v33; // r4
  int v34; // r5
  int v35; // r7
  __int16 v36; // r2
  unsigned int *v37; // r0
  unsigned int v38; // r1
  unsigned int v39; // r1
  unsigned int v40; // r1
  int v41; // r1
  int v42; // r0
  int v43; // r8
  _DWORD *v44; // r9
  int v45; // r8
  char v46; // r0
  unsigned int v47; // r1
  unsigned int v48; // r1
  unsigned int v49; // r1
  unsigned int v50; // r1
  unsigned __int8 *v51; // r0
  float *v52; // r0
  float v53; // s2
  float v54; // s4
  float v55; // s0
  float v56; // s8
  float v57; // s10
  float v58; // s6
  float v59; // s1
  float v60; // s3
  float v61; // s14
  float v62; // s12
  float v63; // s5
  int v64; // r0
  float v65; // s16
  float v66; // s18
  float v67; // s8
  float v68; // s0
  unsigned int v69; // r4
  int v70; // r0
  signed int v71; // r1
  int v72; // r3
  int v73; // r5
  int v74; // r6
  int v75; // r7
  int v76; // r3
  int v77; // r5
  int v78; // r6
  int v79; // r7
  int v80; // r3
  int v81; // r4
  int v82; // r5
  int v83; // r6
  int v84; // r7
  int v85; // r0
  __int64 *v86; // r1
  __int64 *v87; // r2
  __int64 *v88; // r0
  __int64 v89; // d16
  __int64 v90; // d17
  __int64 v91; // d20
  __int64 v92; // d21
  __int64 v93; // d18
  __int64 v94; // d19
  __int64 v95; // d22
  __int64 v96; // d23
  int v97; // r4
  unsigned int v102; // [sp+2Ch] [bp-26Ch]
  unsigned int v103; // [sp+30h] [bp-268h]
  int v104; // [sp+34h] [bp-264h]
  int v105; // [sp+38h] [bp-260h]
  _QWORD v107[9]; // [sp+40h] [bp-258h] BYREF
  float v108[2]; // [sp+88h] [bp-210h] BYREF
  int v109; // [sp+90h] [bp-208h] BYREF
  int v110; // [sp+94h] [bp-204h]
  int v111; // [sp+98h] [bp-200h]
  int v112; // [sp+9Ch] [bp-1FCh]
  int v113; // [sp+A0h] [bp-1F8h]
  int v114; // [sp+A4h] [bp-1F4h]
  int v115; // [sp+A8h] [bp-1F0h]
  int v116; // [sp+ACh] [bp-1ECh]
  int v117; // [sp+B0h] [bp-1E8h]
  int v118; // [sp+B4h] [bp-1E4h]
  int v119; // [sp+B8h] [bp-1E0h]
  int v120; // [sp+BCh] [bp-1DCh]
  int v121; // [sp+C0h] [bp-1D8h]
  int v122; // [sp+C4h] [bp-1D4h]
  int v123; // [sp+C8h] [bp-1D0h]
  int v124; // [sp+CCh] [bp-1CCh]
  _DWORD v125[20]; // [sp+F8h] [bp-1A0h] BYREF
  _WORD v126[119]; // [sp+148h] [bp-150h] BYREF
  char v127; // [sp+236h] [bp-62h]
  char v128; // [sp+237h] [bp-61h]
  char v129; // [sp+238h] [bp-60h]
  char v130; // [sp+239h] [bp-5Fh]
  char v131; // [sp+23Ch] [bp-5Ch]
  char v132; // [sp+23Dh] [bp-5Bh]
  char v133; // [sp+23Eh] [bp-5Ah]
  char v134; // [sp+23Fh] [bp-59h]
  unsigned int v135; // [sp+240h] [bp-58h] BYREF
  char v136; // [sp+244h] [bp-54h]
  _BYTE v137[72]; // [sp+250h] [bp-48h] BYREF

  v8 = *a3;
  v9 = (_DWORD *)a2[56];
  if ( (*a3 & 0x10) != 0 )
  {
    v17 = a2[47];
    v11 = (float)((float)(*(float *)(*v9 + 24) - *(float *)(*v9 + 16)) * FIELD_F32(a1, 60)) / FIELD_F32(v17, 24);
    v10 = (float)((float)(*(float *)(*v9 + 20) - *(float *)(*v9 + 12)) * FIELD_F32(a1, 56)) / FIELD_F32(v17, 20);
    goto LABEL_9;
  }
  v10 = FIELD_F32(a1, 56);
  v11 = FIELD_F32(a1, 60);
  if ( (*a3 & 0x20) == 0 )
  {
LABEL_9:
    v15 = (unsigned int)v11;
    v16 = (unsigned int)v10;
    goto LABEL_10;
  }
  v12 = a2[47];
  v13 = (float)((float)(*(float *)(*v9 + 20) - *(float *)(*v9 + 12)) * v10) / FIELD_F32(v12, 20);
  v14 = (unsigned int)v10;
  v15 = (unsigned int)(float)((float)((float)(*(float *)(*v9 + 24) - *(float *)(*v9 + 16)) * v11) / FIELD_F32(v12, 24));
  v16 = (unsigned int)v13;
  if ( (unsigned int)v11 > v15 )
    v15 = (unsigned int)v11;
  if ( v14 > v16 )
    v16 = v14;
LABEL_10:
  v105 = a2[56];
  v18 = v9[4];
  v102 = v16;
  v103 = v15;
  v125[0] = &sead__SafeStringBase__vtable;
  v125[1] = "CapturePaneWork";
  v19 = 29;
  if ( (v8 & 4) != 0 )
    v19 = 34;
  v20 = sub_6093E338(dword_60CD09F8, v18, (int)v125, v19, v16, v15, 1, 0);
  v22 = (_WORD *)(a6 + 276);
  v21 = FIELD_U16(a6, 276);
  v23 = FIELD_U8(a6, 278);
  v24 = FIELD_U32(v20, 4);
  v25 = FIELD_U32(v20, 8);
  v26 = FIELD_U32(v20, 12);
  v27 = FIELD_U32(v20, 16);
  *(_DWORD *)a6 = *(_DWORD *)v20;
  FIELD_U32(a6, 4) = v24;
  FIELD_U32(a6, 8) = v25;
  FIELD_U32(a6, 12) = v26;
  FIELD_U32(a6, 16) = v27;
  v28 = FIELD_U32(v20, 24);
  v29 = FIELD_U32(v20, 28);
  v30 = FIELD_U32(v20, 32);
  v31 = FIELD_U32(v20, 36);
  FIELD_U32(a6, 20) = FIELD_U32(v20, 20);
  FIELD_U32(a6, 24) = v28;
  FIELD_U32(a6, 28) = v29;
  FIELD_U32(a6, 32) = v30;
  FIELD_U32(a6, 36) = v31;
  v32 = FIELD_U32(v20, 44);
  v33 = FIELD_U32(v20, 48);
  v34 = FIELD_U32(v20, 52);
  v35 = FIELD_U32(v20, 56);
  FIELD_U32(a6, 40) = FIELD_U32(v20, 40);
  FIELD_U32(a6, 44) = v32;
  FIELD_U32(a6, 48) = v33;
  FIELD_U32(a6, 52) = v34;
  FIELD_U32(a6, 56) = v35;
  v36 = FIELD_U16(v20, 60);
  FIELD_U8(a6, 62) = FIELD_U8(v20, 62);
  FIELD_U16(a6, 60) = v36;
  sub_60917754(a6 + 64, v20 + 64);
  v104 = v20;
  FIELD_U32(a6, 264) = FIELD_U32(v20, 264);
  v37 = (unsigned int *)(a6 + 272);
  do
    v38 = __ldrex(v37);
  while ( __strex(v38 | 4, v37) );
  if ( (unsigned __int16)*v22 != v21 )
  {
    do
      v39 = __ldrex(v37);
    while ( __strex(v39 | 2, v37) );
    *v22 = v21;
  }
  if ( FIELD_U8(a6, 278) != v23 )
  {
    do
      v40 = __ldrex(v37);
    while ( __strex(v40 | 1, v37) );
    FIELD_U8(a6, 278) = v23;
  }
  sub_6091AC94(a6);
  FIELD_U32(a5, 12) = 0;
  FIELD_U32(a5, 16) = 0;
  FIELD_F32(a5, 20) = (float)v102;
  FIELD_F32(a5, 24) = (float)v103;
  v41 = FIELD_U32(a1, 60);
  FIELD_U32(a5, 4) = FIELD_U32(a1, 56);
  FIELD_U32(a5, 8) = v41;
  sub_6090B260(a5);
  v42 = ((int (__fastcall *)(_BYTE *, int))loc_6090E438)(v137, a5);
  if ( a7 )
  {
    sub_6091A804(a5, FIELD_U32(v105, 16), 0, 1u, 0.0, a7, 0, v42);
    v43 = a4;
    v44 = a2;
  }
  else
  {
    sub_6090E560((int)v137, FIELD_U32(v105, 16), (float *)a5);
    v45 = *(_DWORD *)(*(_DWORD *)v105 + 28);
    sub_6091ADF4(v45, FIELD_U32(v105, 16));
    agl_TextureSampler_copy_ref((int)v125, v45);
    v46 = *a3;
    v131 = 2;
    v132 = 3;
    v133 = 4;
    if ( (v46 & 2) != 0 )
    {
      v134 = 1;
      v136 |= 2u;
      do
        v48 = __ldrex(&v135);
      while ( __strex(v48 | 1, &v135) );
    }
    else
    {
      v134 = 0;
      v136 |= 2u;
      do
        v47 = __ldrex(&v135);
      while ( __strex(v47 | 1, &v135) );
    }
    v126[118] = 257;
    v127 = 1;
    do
      v49 = __ldrex(&v135);
    while ( __strex(v49 | 4, &v135) );
    v128 = 5;
    v129 = 5;
    v130 = 5;
    do
      v50 = __ldrex(&v135);
    while ( __strex(v50 | 2, &v135) );
    v51 = (unsigned __int8 *)sub_6090B350((int)&v109);
    v110 &= ~1u;
    LOBYTE(v109) = 0;
    sub_6090B4B0(v51, FIELD_U32(v105, 16));
    v52 = *(float **)(a1 + 12);
    v53 = FIELD_F32(a1, 28);
    v54 = FIELD_F32(a1, 32);
    v55 = FIELD_F32(a1, 24);
    v44 = a2;
    v56 = v52[21];
    v57 = v52[22];
    v58 = v52[20];
    v59 = v52[25];
    v60 = v52[26];
    v61 = v52[24];
    v62 = v52[23];
    v63 = v52[27];
    v64 = a2[47];
    v65 = FIELD_F32(v64, 20);
    v66 = FIELD_F32(v64, 24);
    v67 = (float)(v62 + (float)((float)((float)(v56 * v53) + (float)(v57 * v54)) + (float)(v58 * v55)))
        - (float)(FIELD_F32(a1, 56) * 0.5);
    v68 = (float)((float)(v63 + (float)((float)((float)(v53 * v59) + (float)(v54 * v60)) + (float)(v55 * v61)))
                + (float)(FIELD_F32(a1, 60) * 0.5))
        - (float)(v66 * 0.5);
    *(float *)v107 = (float)-v67 - (float)(v65 * 0.5);
    *((float *)v107 + 1) = v68;
    v69 = FIELD_U16(v45, 24);
    if ( v69 <= 1 )
      v69 = 1;
    v70 = sub_609200A0(v45);
    v71 = FIELD_U16(v45, 26);
    if ( v70 > v71 )
      v71 = v70;
    v108[0] = v65 / (float)v69;
    v108[1] = v66 / (float)(unsigned int)v71;
    sub_6093F214(FIELD_U32(v105, 16), (int)v125, (int)v137, (int)v108, (int)v107);
    sub_609175E4((int)v126);
    sub_60917AE4((int)v125);
    v43 = a4;
  }
  sub_6090B4B0(*(unsigned __int8 **)(v105 + 4), FIELD_U32(v105, 16));
  sub_60853FF8((int)v44);
  v72 = v44[5];
  v73 = v44[6];
  v74 = v44[7];
  v75 = v44[8];
  v109 = v44[4];
  v110 = v72;
  v111 = v73;
  v112 = v74;
  v113 = v75;
  v76 = v44[10];
  v77 = v44[11];
  v78 = v44[12];
  v79 = v44[13];
  v114 = v44[9];
  v115 = v76;
  v116 = v77;
  v117 = v78;
  v118 = v79;
  v80 = v44[15];
  v81 = v44[16];
  v82 = v44[17];
  v83 = v44[18];
  v84 = v44[19];
  v119 = v44[14];
  v120 = v80;
  v121 = v81;
  v122 = v82;
  v123 = v83;
  v124 = v84;
  v85 = sub_6090C7F8((int)v125, (int)v137, 0.0, 300.0);
  v86 = (__int64 *)sub_6090BE54(v85);
  v87 = v86 + 4;
  v88 = v86 + 6;
  v89 = *v86;
  v90 = v86[1];
  v86 += 2;
  v91 = *v87;
  v92 = v87[1];
  v93 = *v88;
  v94 = v88[1];
  v95 = *v86;
  v96 = v86[1];
  v107[0] = v89;
  v107[1] = v90;
  v107[2] = v95;
  v107[3] = v96;
  v107[4] = v91;
  v107[5] = v92;
  v107[6] = v93;
  v107[7] = v94;
  sub_6085402C((int)v44, (int *)v107);
  sub_60859508(a1, (int)v44, a8);
  sub_6085402C((int)v44, &v109);
  nullsub_113();
  sub_6091ADF4(a6, FIELD_U32(v105, 16));
  v97 = v104;
  if ( v43 && (sub_609A70D0(v43, FIELD_U32(v105, 16), v104), FIELD_U32(v43, 868)) )
  {
    sub_6093EA98(dword_60CD09F8, v104);
    return FIELD_U32(v43, 868);
  }
  else
  {
    nullsub_118();
  }
  return v97;
}
