/* gaussian_ref
 * address: 0x60417808   size: 1952   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall gaussian_ref(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // r11
  int v6; // r5
  int v7; // r0
  int *v8; // r5
  int v9; // t1
  int **v10; // r7
  int *v11; // r3
  int *v12; // r6
  float v13; // s0
  _DWORD *v14; // r0
  float v15; // s2
  float v16; // s0
  int v17; // r2
  _DWORD *v18; // r10
  int (__fastcall ***v19)(_DWORD, int *); // r6
  char v20; // r12
  int v21; // r4
  int v22; // r0
  int v23; // r5
  float *v24; // r5
  int v25; // t1
  int v26; // r0
  float v27; // s2
  float v28; // s0
  float v29; // s4
  float v30; // s2
  float v31; // s6
  unsigned int *v32; // r0
  unsigned int v33; // r1
  int v34; // r6
  _DWORD *v35; // r2
  unsigned int v36; // r7
  int v37; // r1
  int v38; // r9
  unsigned int v39; // r6
  int v40; // r0
  signed int v41; // r1
  float v42; // r2
  float v43; // s0
  float v44; // r0
  int v45; // r8
  _WORD *v46; // r11
  int v47; // r3
  int v48; // r4
  int v49; // r6
  int v50; // r7
  int v51; // r3
  int v52; // r4
  int v53; // r6
  int v54; // r7
  int v55; // r3
  int v56; // r4
  int v57; // r6
  int v58; // r7
  __int16 v59; // r2
  unsigned int *v60; // r0
  unsigned int v61; // r1
  unsigned int v62; // r1
  unsigned int v63; // r1
  int v64; // r5
  int *v65; // r8
  int v66; // r9
  _WORD *v67; // r10
  int v68; // r11
  int *v69; // r0
  int v70; // r2
  int v71; // r3
  int v72; // r4
  int v73; // r6
  int v74; // r7
  int v75; // r2
  int v76; // r3
  int v77; // r4
  int v78; // r6
  int v79; // r7
  int v80; // r2
  int v81; // r3
  int v82; // r4
  int v83; // r6
  int v84; // r7
  unsigned int *v85; // r0
  unsigned int v86; // r1
  unsigned int v87; // r1
  unsigned int v88; // r1
  int v89; // r0
  int v91; // r0
  int v92; // [sp+24h] [bp-1E4h]
  _DWORD *v93; // [sp+28h] [bp-1E0h]
  int v94; // [sp+2Ch] [bp-1DCh]
  float *v95; // [sp+2Ch] [bp-1DCh]
  int v96; // [sp+30h] [bp-1D8h]
  int v97; // [sp+34h] [bp-1D4h]
  int **v98; // [sp+38h] [bp-1D0h]
  _DWORD *v99; // [sp+38h] [bp-1D0h]
  _DWORD *v100; // [sp+3Ch] [bp-1CCh]
  _DWORD *v101; // [sp+3Ch] [bp-1CCh]
  _DWORD v102[6]; // [sp+40h] [bp-1C8h] BYREF
  _BYTE v103[48]; // [sp+58h] [bp-1B0h] BYREF
  char v104; // [sp+88h] [bp-180h]
  _BYTE v105[268]; // [sp+A8h] [bp-160h] BYREF
  float v106[2]; // [sp+1B4h] [bp-54h] BYREF
  float v107; // [sp+1BCh] [bp-4Ch] BYREF
  float v108; // [sp+1C0h] [bp-48h]
  float v109[2]; // [sp+1C4h] [bp-44h] BYREF
  char v110[4]; // [sp+1CCh] [bp-3Ch] BYREF
  float v111; // [sp+1D0h] [bp-38h]
  float v112; // [sp+1D4h] [bp-34h]
  float v113; // [sp+1D8h] [bp-30h]
  float v114; // [sp+1DCh] [bp-2Ch]

  v3 = a2;
  if ( a2 >= 5 )
    v3 = 0;
  v6 = a1 + 52 * v3;
  v9 = FIELD_U32(v6, 56);
  v8 = (int *)(v6 + 56);
  v7 = v9;
  v10 = (int **)(v8 - 10);
  if ( a2 == 2 || v7 )
  {
    v18 = (_DWORD *)(a3 + 40);
  }
  else
  {
    v11 = dword_604179D4;
    v12 = dword_604179DC;
    v13 = FIELD_F32(dword_60C9BB38, 696);
    v14 = (_DWORD *)(a1 + 52 * v3);
    if ( FIELD_U32(dword_60C9BB38, 684) == 1 )
    {
      v11 = &dword_604179D4[1];
      v12 = &dword_604179DC[1];
    }
    v15 = v13 * *(float *)v11;
    v16 = v13 * *(float *)v12;
    v14[6] = (unsigned int)v15;
    v14[7] = (unsigned int)v16;
    v17 = v14[8];
    FIELD_U32(v17, 12) = 0;
    FIELD_U32(v17, 16) = 0;
    FIELD_F32(v17, 20) = (float)(unsigned int)v15;
    FIELD_F32(v17, 24) = (float)(unsigned int)v16;
    v10 = (int **)(v8 - 10);
    v18 = (_DWORD *)(a3 + 40);
    *(v8 - 10) = sub_6093E338(
                   dword_60CD09F8,
                   FIELD_U32(a3, 40),
                   &dword_60C9BAB0[2 * a2],
                   v14[5],
                   v14[6],
                   v14[7],
                   1,
                   0,
                   v14[16],
                   1,
                   0);
    v7 = *v8;
  }
  *v8 = v7 + 1;
  v19 = (int (__fastcall ***)(_DWORD, int *))sub_60958564(a3);
  if ( ((unsigned int)&dword_60C9BADC & ~(1614903656 << v20) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BADC) )
  {
    dword_60C9BAD8 = (int)&off_60BF9D20;
    _cxa_guard_release(&dword_60C9BADC);
  }
  if ( v19 )
  {
    v21 = (**v19)(v19, &dword_60C9BAD8);
    if ( v21 )
      v21 = (int)v19;
  }
  else
  {
    v21 = 0;
  }
  v22 = FIELD_U32(v21, 28);
  if ( FIELD_U8(v22, 32) )
  {
    nullsub_119(v22, *v18);
    v22 = FIELD_U32(v21, 28);
  }
  sub_6091ADF4(v22, *v18);
  v23 = a1 + 52 * v3;
  v25 = FIELD_U32(v23, 32);
  v24 = (float *)(v23 + 32);
  v26 = ((int (__fastcall *)(char *, int))loc_6090E438)(v110, v25);
  sub_6090E560(v26, *v18, *(_DWORD *)v24);
  sub_6090B4B0(a1 + 276, *v18);
  v27 = (float)(v114 - v112) / (float)(FIELD_F32(v21, 24) - FIELD_F32(v21, 16));
  v109[0] = (float)(v113 - v111) / (float)(FIELD_F32(v21, 20) - FIELD_F32(v21, 12));
  v109[1] = v27;
  v28 = v24[2];
  v29 = v24[4];
  v30 = v24[3];
  v31 = v24[5];
  v107 = (float)(v29 - v28) / 1280.0;
  v108 = (float)(v31 - v30) / 720.0;
  v106[0] = (float)((float)((float)((float)(v28 + v29) * 0.5) / 1280.0) + -0.5) / v107;
  v106[1] = (float)-(float)((float)((float)((float)(v30 + v31) * 0.5) / 720.0) + -0.5) / v108;
  v32 = (unsigned int *)(agl_TextureSampler_copy_ref(v103, FIELD_U32(v21, 28)) + 328);
  v105[239] = 7;
  v105[240] = 7;
  v105[241] = 7;
  do
    v33 = __ldrex(v32);
  while ( __strex(v33 | 2, v32) );
  v34 = 0;
  v35 = (_DWORD *)(a1 + 52 * v3);
  v97 = v21;
  v93 = v35 + 15;
  if ( v35[15] == 1 && !v104 )
  {
    v100 = (_DWORD *)(a1 + 52 * v3);
    v98 = v10;
    v36 = 1;
    v37 = *v18;
    v102[0] = &sead__SafeStringBase__vtable;
    v102[1] = "gaussian";
    v38 = sub_6093E338(dword_60CD09F8, v37, v102, v100[5], v100[6], v100[7], 1, 0, 0, 1, 0);
    v39 = FIELD_U16(v38, 24);
    v40 = sub_609200A0(v38);
    v41 = FIELD_U16(v38, 26);
    v42 = *v24;
    if ( v39 > 1 )
      v36 = v39;
    v43 = (float)v36;
    if ( v40 > v41 )
      v41 = v40;
    *(float *)(LODWORD(v42) + 4) = v43;
    *(float *)(LODWORD(v42) + 8) = (float)(unsigned int)v41;
    v44 = *v24;
    *(_DWORD *)(LODWORD(v44) + 12) = 0;
    *(_DWORD *)(LODWORD(v44) + 16) = 0;
    *(float *)(LODWORD(v44) + 20) = v43;
    *(float *)(LODWORD(v44) + 24) = (float)(unsigned int)v41;
    v45 = v100[9];
    v46 = (_WORD *)(v45 + 276);
    v92 = FIELD_U16(v45, 276);
    v94 = FIELD_U8(v45, 278);
    v47 = FIELD_U32(v38, 4);
    v48 = FIELD_U32(v38, 8);
    v49 = FIELD_U32(v38, 12);
    v50 = FIELD_U32(v38, 16);
    *(_DWORD *)v45 = *(_DWORD *)v38;
    FIELD_U32(v45, 4) = v47;
    FIELD_U32(v45, 8) = v48;
    FIELD_U32(v45, 12) = v49;
    FIELD_U32(v45, 16) = v50;
    v51 = FIELD_U32(v38, 24);
    v52 = FIELD_U32(v38, 28);
    v53 = FIELD_U32(v38, 32);
    v54 = FIELD_U32(v38, 36);
    FIELD_U32(v45, 20) = FIELD_U32(v38, 20);
    FIELD_U32(v45, 24) = v51;
    FIELD_U32(v45, 28) = v52;
    FIELD_U32(v45, 32) = v53;
    FIELD_U32(v45, 36) = v54;
    v55 = FIELD_U32(v38, 44);
    v56 = FIELD_U32(v38, 48);
    v57 = FIELD_U32(v38, 52);
    v58 = FIELD_U32(v38, 56);
    FIELD_U32(v45, 40) = FIELD_U32(v38, 40);
    FIELD_U32(v45, 44) = v55;
    FIELD_U32(v45, 48) = v56;
    FIELD_U32(v45, 52) = v57;
    FIELD_U32(v45, 56) = v58;
    v59 = FIELD_U16(v38, 60);
    FIELD_U8(v45, 62) = FIELD_U8(v38, 62);
    FIELD_U16(v45, 60) = v59;
    sub_60917754(v45 + 64, v38 + 64);
    v34 = v38;
    FIELD_U32(v45, 264) = FIELD_U32(v38, 264);
    v60 = (unsigned int *)(v45 + 272);
    do
      v61 = __ldrex(v60);
    while ( __strex(v61 | 4, v60) );
    v10 = v98;
    if ( (unsigned __int16)*v46 != v92 )
    {
      do
        v62 = __ldrex(v60);
      while ( __strex(v62 | 2, v60) );
      *v46 = v92;
    }
    if ( FIELD_U8(v45, 278) != v94 )
    {
      do
        v63 = __ldrex(v60);
      while ( __strex(v63 | 1, v60) );
      FIELD_U8(v45, 278) = v94;
    }
    sub_6091AC94(v45);
    *(_DWORD *)(*(_DWORD *)v24 + 28) = v100[9];
    sub_6090B260(*(_DWORD *)v24, *v18);
    sub_6093FB68(*v18, v103, v110, 5, 1, 1, &dword_60B3B944);
    sub_6091ADF4(*(_DWORD *)(*(_DWORD *)v24 + 28), *v18);
    sub_60920EC8(v103, v38);
    v35 = v100;
  }
  v96 = v34;
  v95 = v24;
  v99 = v18;
  v64 = v35[9];
  v101 = v35 + 9;
  v65 = *v10;
  v66 = FIELD_U8(v64, 278);
  v67 = (_WORD *)(v64 + 276);
  v68 = FIELD_U16(v64, 276);
  v69 = *v10;
  v70 = **v10;
  v71 = (*v10)[1];
  v72 = (*v10)[2];
  v73 = (*v10)[3];
  v74 = (*v10)[4];
  v69 += 5;
  *(_DWORD *)v64 = v70;
  FIELD_U32(v64, 4) = v71;
  FIELD_U32(v64, 8) = v72;
  FIELD_U32(v64, 12) = v73;
  FIELD_U32(v64, 16) = v74;
  v75 = *v69;
  v76 = v69[1];
  v77 = v69[2];
  v78 = v69[3];
  v79 = v69[4];
  v69 += 5;
  FIELD_U32(v64, 20) = v75;
  FIELD_U32(v64, 24) = v76;
  FIELD_U32(v64, 28) = v77;
  FIELD_U32(v64, 32) = v78;
  FIELD_U32(v64, 36) = v79;
  v80 = *v69;
  v81 = v69[1];
  v82 = v69[2];
  v83 = v69[3];
  v84 = v69[4];
  v69 += 5;
  FIELD_U32(v64, 40) = v80;
  FIELD_U32(v64, 44) = v81;
  FIELD_U32(v64, 48) = v82;
  FIELD_U32(v64, 52) = v83;
  FIELD_U32(v64, 56) = v84;
  LOWORD(v80) = *(_WORD *)v69;
  FIELD_U8(v64, 62) = *((_BYTE *)v69 + 2);
  FIELD_U16(v64, 60) = v80;
  sub_60917754(v64 + 64, v65 + 16);
  FIELD_U32(v64, 264) = v65[66];
  v85 = (unsigned int *)(v64 + 272);
  do
    v86 = __ldrex(v85);
  while ( __strex(v86 | 4, v85) );
  if ( (unsigned __int16)*v67 != v68 )
  {
    do
      v87 = __ldrex(v85);
    while ( __strex(v87 | 2, v85) );
    *v67 = v68;
  }
  if ( FIELD_U8(v64, 278) != v66 )
  {
    do
      v88 = __ldrex(v85);
    while ( __strex(v88 | 1, v85) );
    FIELD_U8(v64, 278) = v66;
  }
  sub_6091AC94(v64);
  *(_DWORD *)(*(_DWORD *)v95 + 28) = *v101;
  sub_6090B260(*(_DWORD *)v95, *v99);
  if ( v104 )
  {
    sub_6093FA14(*v99, v103, v110, v109, &dword_60B3B944);
    if ( !v96 )
      goto LABEL_50;
    goto LABEL_49;
  }
  if ( v96 )
  {
    sub_6093FB68(*v99, v103, v110, 4, 0, 1, &dword_60B3B944);
LABEL_49:
    sub_6093EA98(dword_60CD09F8, v96);
    goto LABEL_50;
  }
  v91 = *v99;
  if ( *v93 == 2 )
    sub_6093FC18(v91, v103, v110, &v107, 0.0, v106, v109, &dword_60B3B944);
  else
    sub_6093F8F4(v91, v103, v110, &v107, 0.0, v106, v109, &dword_60B3B944);
LABEL_50:
  sub_6091ADF4(*(_DWORD *)(*(_DWORD *)v95 + 28), *v99);
  v89 = ((int (__fastcall *)(_DWORD *, int))loc_6090E438)(v102, v97);
  sub_6090E560(v89, *v99, v97);
  sub_6090B260(v97, *v99);
  sub_609175E4(v105);
  return sub_60917AE4(v103);
}
