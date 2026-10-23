/* sub_608654EC
 * address: 0x608654EC   size: 4312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608654EC(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r11
  int v8; // r9
  int v9; // r10
  __int16 v10; // r0
  _BYTE *v11; // r5
  int v12; // r0
  unsigned __int8 *v13; // r6
  _DWORD *v14; // r0
  unsigned __int8 *v15; // r2
  int v16; // r1
  int v17; // r3
  _DWORD *v18; // r0
  unsigned __int8 *v19; // r2
  int v20; // r1
  int v21; // r3
  int v22; // r0
  unsigned __int8 v23; // r2
  unsigned __int8 v24; // r3
  unsigned __int8 v25; // r1
  unsigned __int8 *v26; // r1
  unsigned __int8 v27; // r2
  unsigned __int8 v28; // r3
  int v29; // r0
  int v30; // r5
  int v31; // r1
  int i; // r2
  int v33; // r2
  int v34; // r6
  int v35; // r7
  bool v36; // zf
  unsigned int v37; // r4
  int v38; // r8
  int v39; // r7
  int v40; // r0
  int v41; // r9
  int v42; // r0
  int v43; // r12
  int v44; // r6
  int v45; // lr
  int v46; // r2
  int v47; // r1
  int v48; // r3
  int v49; // r5
  int v50; // r0
  int v51; // r4
  int v52; // r0
  int v53; // r10
  unsigned int v54; // r1
  unsigned int v55; // r5
  int v56; // r7
  _BYTE *v57; // r9
  _BYTE *v58; // r5
  int v59; // r7
  int v60; // r0
  _DWORD *v61; // r0
  _DWORD *v62; // r3
  unsigned int v63; // r7
  _DWORD *v64; // r1
  int v65; // r3
  int v66; // r2
  int v67; // r2
  int v68; // r2
  int v69; // r2
  int v70; // r2
  int v71; // r3
  int v72; // r2
  int v73; // r0
  unsigned int v74; // r6
  _DWORD *v75; // r1
  unsigned int v76; // r6
  int v77; // r5
  int v78; // r7
  int v79; // r2
  int v80; // lr
  unsigned int v81; // r0
  _DWORD *v82; // r1
  int v83; // r12
  int v84; // r4
  unsigned int v85; // r4
  unsigned int v86; // r6
  bool v87; // cc
  int v88; // r3
  int v89; // r6
  int v90; // r1
  unsigned int v91; // r0
  int v92; // r1
  unsigned int v93; // r2
  _BYTE *v94; // r3
  int v95; // r7
  int v96; // r2
  _BYTE *v97; // r5
  char v98; // r4
  char v99; // r0
  _BYTE *v100; // r6
  int v101; // r9
  int v102; // r6
  int v103; // r12
  int v104; // r8
  _BYTE *v105; // r5
  char v106; // r4
  char v107; // r0
  char v108; // r7
  int v109; // r2
  _BYTE *v110; // r2
  char v111; // r3
  char v112; // r4
  char v113; // r0
  char v114; // r3
  char v115; // r4
  char v116; // r0
  char v117; // t1
  char v118; // r3
  char v119; // r4
  int v120; // r7
  int v121; // r1
  int v122; // r3
  int v123; // r1
  int v124; // r0
  char v125; // r7
  char v126; // r6
  char v127; // r2
  _BYTE *v128; // r1
  int v129; // r1
  int v130; // r0
  char v131; // r7
  char v132; // r6
  char v133; // r2
  _BYTE *v134; // r1
  int v135; // r3
  int v136; // r6
  int v137; // r2
  int v138; // r1
  int v139; // r2
  int v140; // r10
  int *v141; // r0
  unsigned int v142; // r1
  int *v143; // r1
  int v144; // r2
  int v145; // r3
  int v146; // r7
  int v147; // r3
  int v148; // r6
  int v149; // r7
  unsigned int v150; // r5
  _DWORD *v151; // r2
  int v152; // r1
  int v153; // r3
  int v154; // r7
  int v155; // r1
  int v156; // r3
  int v157; // r7
  int v158; // r1
  int v159; // r3
  int v160; // r7
  int v161; // r1
  int v162; // r3
  int v163; // r7
  int v164; // r1
  int v165; // r3
  int v166; // r7
  int v167; // r1
  int v168; // r3
  int v169; // r7
  _DWORD *v170; // r2
  int v171; // r1
  int v172; // r3
  int v173; // r7
  unsigned int v174; // r1
  _DWORD *v175; // r0
  _DWORD *v176; // r5
  unsigned int v177; // r1
  int v178; // r1
  int v179; // r4
  int v180; // r5
  int v181; // r6
  int v182; // r7
  int v183; // r11
  int v184; // r1
  _DWORD *v185; // r9
  int v186; // r10
  int v187; // r2
  _DWORD *v188; // r4
  _DWORD *v189; // r3
  int v190; // r1
  int v191; // r8
  int v192; // r12
  int v193; // lr
  _DWORD *v194; // r0
  _DWORD *v195; // r1
  int v196; // r3
  int v197; // r4
  int v198; // r5
  int v199; // r6
  int v200; // r7
  int v201; // r12
  char v202; // r8
  char v203; // r10
  char v204; // r2
  char v205; // r9
  unsigned int v206; // r4
  int v207; // r7
  int v208; // r3
  char v209; // r5
  char v210; // r0
  _BYTE *v211; // r7
  unsigned int v212; // r0
  int v214; // [sp+8h] [bp-B0h]
  int v215; // [sp+20h] [bp-98h]
  int v216; // [sp+24h] [bp-94h]
  int v217; // [sp+28h] [bp-90h]
  int v218; // [sp+2Ch] [bp-8Ch]
  int v219; // [sp+30h] [bp-88h]
  int v220; // [sp+34h] [bp-84h]
  int v221; // [sp+38h] [bp-80h]
  int v222; // [sp+3Ch] [bp-7Ch]
  int v223; // [sp+40h] [bp-78h]
  int v224; // [sp+44h] [bp-74h]
  int v225; // [sp+48h] [bp-70h]
  int v226; // [sp+4Ch] [bp-6Ch]
  _DWORD *v227; // [sp+50h] [bp-68h]
  int v228; // [sp+54h] [bp-64h]
  int v229; // [sp+58h] [bp-60h]
  int v230; // [sp+5Ch] [bp-5Ch]
  int v231; // [sp+60h] [bp-58h]
  int v232; // [sp+60h] [bp-58h]
  int v233; // [sp+64h] [bp-54h]
  unsigned int v234; // [sp+64h] [bp-54h]
  int v235; // [sp+68h] [bp-50h]
  int v236; // [sp+6Ch] [bp-4Ch]
  int v237; // [sp+70h] [bp-48h]
  int v238; // [sp+70h] [bp-48h]
  int v239; // [sp+74h] [bp-44h]
  int v241; // [sp+7Ch] [bp-3Ch]
  int v242; // [sp+80h] [bp-38h]
  int v243; // [sp+84h] [bp-34h]
  int v244; // [sp+88h] [bp-30h]
  int v245; // [sp+88h] [bp-30h]
  int v246; // [sp+8Ch] [bp-2Ch]
  int v247; // [sp+90h] [bp-28h]
  unsigned int v248; // [sp+90h] [bp-28h]

  v6 = a1;
  v8 = a5;
  v9 = a4;
  *(_DWORD *)a1 = &off_60C5A674;
  FIELD_U32(a1, 12) &= 0xFFFC0000;
  FIELD_U32(a1, 16) &= 0xFFFC0000;
  FIELD_U8(a1, 5) = 0;
  FIELD_U8(a1, 4) = 0;
  FIELD_U8(a1, 7) = 0;
  FIELD_U8(a1, 6) = 0;
  FIELD_U8(a1, 8) = -1;
  FIELD_U8(a1, 11) = -1;
  FIELD_U8(a1, 10) = -1;
  FIELD_U8(a1, 9) = -1;
  FIELD_U32(a1, 28) = 0;
  FIELD_U8(a1, 50) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U8(a1, 49) = -1;
  FIELD_U8(a1, 51) = 0;
  FIELD_U8(a1, 48) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 32) = 0;
  if ( !a5 )
  {
LABEL_10:
    v12 = FIELD_U32(a6, 32);
    v8 = a4;
    v11 = (_BYTE *)a4;
    goto LABEL_11;
  }
  v10 = FIELD_U16(a6, 44);
  if ( !v10 )
  {
    if ( !FIELD_U16(a6, 40) )
    {
      v12 = FIELD_U32(a6, 36);
      v9 = a5;
      v11 = (_BYTE *)a5;
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v11 = (_BYTE *)a4;
  if ( (v10 & 1) != 0 )
    v11 = (_BYTE *)a5;
  if ( (v10 & 2) == 0 || (FIELD_U32(a4, 28) & 3) != (FIELD_U32(a5, 28) & 3) )
  {
    v242 = FIELD_U32(a6, 32);
    v8 = a4;
    goto LABEL_12;
  }
  v12 = FIELD_U32(a6, 36);
LABEL_11:
  v242 = v12;
LABEL_12:
  FIELD_U32(v6, 28) = v9;
  v13 = v11 + 32;
  if ( (v11[32] & 3) != 0 )
  {
    v14 = (_DWORD *)sub_60855BC8(32);
    FIELD_U32(v6, 4) = v14;
    FIELD_U8(v6, 50) |= 0x28u;
    v15 = &v13[(unsigned __int8)v11[34]];
    *v14 = *(_DWORD *)v15;
    v16 = *((_DWORD *)v15 + 1);
    v17 = *((_DWORD *)v15 + 2);
    v14[3] = *((_DWORD *)v15 + 3);
    v14[1] = v16;
    v14[2] = v17;
    FIELD_U8(v6, 50) |= 0x10u;
    v18 = *(_DWORD **)(v6 + 4);
    v19 = &v13[(unsigned __int8)v11[35]];
    v18[4] = *(_DWORD *)v19;
    v20 = *((_DWORD *)v19 + 1);
    v21 = *((_DWORD *)v19 + 2);
    v18[7] = *((_DWORD *)v19 + 3);
    v18[6] = v21;
    v18[5] = v20;
  }
  else
  {
    v22 = (unsigned __int8)v11[34];
    v23 = v13[v22 + 1];
    v24 = v13[v22 + 2];
    v25 = v13[v22 + 3];
    FIELD_U8(v6, 4) = v13[v22];
    FIELD_U8(v6, 7) = v25;
    FIELD_U8(v6, 6) = v24;
    FIELD_U8(v6, 5) = v23;
    v26 = &v13[(unsigned __int8)v11[35]];
    LOBYTE(v22) = *v26;
    v27 = v26[1];
    v28 = v26[2];
    LOBYTE(v26) = v26[3];
    FIELD_U8(v6, 9) = v27;
    FIELD_U8(v6, 8) = v22;
    FIELD_U8(v6, 11) = (_BYTE)v26;
    FIELD_U8(v6, 10) = v28;
  }
  v29 = (unsigned __int8)v11[33];
  v243 = a3;
  v30 = v29 + 2;
  if ( !v29 )
    goto LABEL_27;
  v31 = *v13;
  if ( (v29 & 1) == 0 )
  {
    i = 0;
    if ( v29 == 1 )
      goto LABEL_27;
    goto LABEL_22;
  }
  v33 = 4;
  if ( (v31 & 1) != 0 )
    v33 = 16;
  v30 += v33;
  for ( i = 1; i != v29; v30 += v35 + v34 )
  {
LABEL_22:
    v34 = 4;
    v35 = 4;
    if ( (v31 & (1 << (i + 1))) != 0 )
      v35 = 16;
    v36 = (v31 & (1 << i)) == 0;
    i += 2;
    if ( !v36 )
      v34 = 16;
  }
LABEL_27:
  v37 = FIELD_U32(v9, 28);
  v229 = v8;
  v38 = v37 & 3;
  v247 = FIELD_U32(v8, 28);
  FIELD_U8(v6, 50) = FIELD_U8(v6, 50) & 0xFB | BYTE2(v37) & 4;
  v233 = v37 & 0x1000;
  v39 = (v37 >> 10) & 1;
  v40 = v39;
  if ( (v37 & 0x1000) != 0 )
    v40 = 2;
  v214 = v40;
  v235 = (v37 >> 15) & 3;
  v41 = (v37 >> 6) & 7;
  v42 = v41;
  if ( v41 == 7 )
    v42 = 6;
  v244 = v42;
  v231 = (v37 >> 4) & 3;
  sub_608665C4(
    v6,
    v37 & 3,
    (v37 >> 2) & 3,
    v231,
    v42,
    (v37 >> 9) & 1,
    v214,
    (v37 >> 14) & 1,
    (v37 >> 15) & 3,
    (v37 >> 17) & 1,
    (v37 >> 19) & 1,
    (v37 >> 20) & 1);
  FIELD_U8(v6, 50) = FIELD_U8(v6, 50) & 0xFD | (FIELD_U32(v9, 28) >> 10) & 2;
  v236 = v37 & 0x30;
  v239 = v30;
  v230 = (v37 >> 2) & 3;
  v43 = (v37 >> 6) & 8;
  v241 = (4 * v247) & 0xC;
  v44 = v37 & 0x4000;
  v228 = v241 + v30 + 32;
  v237 = v230 | (4 * v230);
  v224 = v228 + 4 * v237 + v236 + 4 * v41;
  v225 = v224 + v43;
  v246 = v9;
  v248 = v37;
  v45 = v224 + v43 + 4 * v39 + 4 * ((v37 >> 12) & 1);
  v46 = v44;
  if ( (v37 & 0x4000) != 0 )
    v46 = 12;
  v226 = v224 + v43 + 4 * v39;
  v47 = v37 & 0x80000;
  v48 = v37 & 0x80000;
  v49 = v45 + v46;
  v50 = v37 & 0x80000;
  if ( (v37 & 0x80000) != 0 )
  {
    v48 = 28;
    v50 = v9 + v49 + 28;
  }
  v227 = (_DWORD *)v50;
  v51 = (int)(v37 << 12) >> 31;
  v52 = FIELD_U32(v6, 20);
  v53 = v243;
  if ( v52 )
  {
    v219 = v51;
    v220 = v44;
    v221 = v45;
    v222 = v47;
    v218 = v45 + v46;
    v223 = v49 + v48;
    v215 = v48;
    v216 = v46;
    v217 = v43;
    v54 = FIELD_U32(v6, 12);
    if ( (v54 & 3) != 0 )
    {
      sub_6085C2C0(v52);
      v54 = FIELD_U32(v6, 12);
      if ( (v54 & 2) >= 2 )
      {
        v55 = 1;
        v56 = 8;
        do
        {
          sub_6085C2C0(FIELD_U32(v6, 20) + v56);
          v54 = FIELD_U32(v6, 12);
          ++v55;
          v56 += 8;
        }
        while ( v55 < (v54 & 3) );
      }
    }
    FIELD_U32(v6, 16) = FIELD_U32(v6, 16) & 0xFFFFFFFC | v38;
    if ( v38 )
    {
      v57 = *(_BYTE **)(v6 + 20);
      v58 = (_BYTE *)(v229 + v239 + 35);
      v59 = *(_DWORD *)v242 + 12;
      do
      {
        v60 = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(v242 + 16) + 48))(
                FIELD_U32(v242, 16),
                v243,
                v59 + *(_DWORD *)(v59 + 4 * *(unsigned __int16 *)(v58 - 3)));
        sub_6085C2E8((int)v57, v60);
        sub_6085C304(v57, *(v58 - 1) & 3, *v58 & 3);
        sub_6085C320(v57, (*(v58 - 1) >> 2) & 3, (*v58 >> 2) & 3);
        --v38;
        v58 += 4;
        v57 += 8;
      }
      while ( v38 );
      v54 = FIELD_U32(v6, 12);
    }
    v61 = (_DWORD *)(FIELD_U32(v6, 20) + ((8 * v54) & 0x18));
    if ( (v54 & 0xC) != 0 )
    {
      v62 = (_DWORD *)(FIELD_U32(v6, 20) + ((8 * v54) & 0x18));
      v63 = 0;
      do
      {
        *v62 = 0;
        v62[1] = 0;
        v62[2] = 0;
        v62[3] = 0;
        v62[4] = 0;
        ++v63;
        v62 += 5;
        v54 = FIELD_U32(v6, 12);
      }
      while ( v63 < ((v54 >> 2) & 3) );
    }
    FIELD_U32(v6, 16) = FIELD_U32(v6, 16) & 0xFFFFFFF3 | (4 * v230);
    if ( v230 )
    {
      v64 = (_DWORD *)(v246 + v228);
      v65 = *(_DWORD *)(v246 + v228 + 4);
      *v61 = *(_DWORD *)(v246 + v228);
      v61[1] = v65;
      v61[2] = *(_DWORD *)(v246 + v228 + 8);
      v66 = *(_DWORD *)(v246 + v228 + 12);
      v61[4] = *(_DWORD *)(v246 + v228 + 16);
      v61[3] = v66;
      if ( v230 != 1 )
      {
        v67 = v64[5];
        v61[6] = v64[6];
        v61[5] = v67;
        v61[7] = v64[7];
        v68 = v64[8];
        v61[9] = v64[9];
        v61[8] = v68;
        if ( v230 != 2 )
        {
          v69 = v64[10];
          v61[11] = v64[11];
          v61[10] = v69;
          v61[12] = v64[12];
          v70 = v64[13];
          v61[14] = v64[14];
          v61[13] = v70;
        }
      }
      v54 = FIELD_U32(v6, 12);
    }
    v71 = 5 * ((v54 >> 2) & 3);
    v72 = FIELD_U32(v6, 20);
    v73 = (8 * v54) & 0x18;
    if ( (v54 & 0x30) != 0 )
    {
      v74 = 0;
      v75 = (_DWORD *)(v72 + 20 * ((v54 >> 2) & 3) + v73 + 8);
      do
      {
        *v75 = 0;
        v75[1] = 0;
        *(v75 - 2) = 0;
        ++v74;
        v75 += 4;
      }
      while ( v74 < ((FIELD_U32(v6, 12) >> 4) & 3u) );
    }
    v238 = 4 * v237;
    v76 = FIELD_U32(v6, 16) & 0xFFFFFFCF | (16 * v231);
    FIELD_U32(v6, 16) = v76;
    if ( v231 )
    {
      v77 = 0;
      v78 = 0;
      v79 = v72 + v73 + 4 * v71;
      v80 = v246 + v239 + v238 + v241 + 32;
      v81 = 0;
      do
      {
        *(_DWORD *)(v79 + v77) = *(_DWORD *)(v80 + v77);
        v82 = (_DWORD *)(v79 + v77);
        v83 = *(_DWORD *)(v80 + v77 + 8);
        v84 = *(_DWORD *)(v80 + v77 + 12);
        v82[1] = *(_DWORD *)(v80 + v77 + 4);
        v82[2] = v83;
        v82[3] = v84;
        v85 = *(unsigned __int8 *)(v79 + v77 + 1);
        v87 = v85 > 5;
        if ( v85 != 5 )
          v87 = v85 - 3 > 1;
        if ( v87 )
        {
          v89 = 0;
        }
        else
        {
          v88 = 5 * v78++;
          v86 = FIELD_U32(v6, 12);
          v89 = FIELD_U32(v6, 20)
              + ((8 * v86) & 0x18)
              + (v86 & 0x30)
              + ((v86 >> 6) & 8)
              + 4 * ((v86 >> 10) & 3)
              + 4 * ((v86 >> 6) & 7)
              + 4 * ((v86 >> 2) & 3 | (4 * ((v86 >> 2) & 3)))
              + (-((v86 >> 12) & 1) & 0xC)
              + 4 * v88;
        }
        v90 = v79 + v77;
        ++v81;
        v77 += 16;
        FIELD_U32(v90, 8) = v89;
        FIELD_U32(v90, 12) = 0;
        v76 = FIELD_U32(v6, 16);
      }
      while ( v81 < ((v76 >> 4) & 3) );
    }
    if ( v244 )
    {
      v91 = FIELD_U32(v6, 12);
      v92 = FIELD_U32(v6, 20)
          + ((8 * v91) & 0x18)
          + (v91 & 0x30)
          + ((v91 >> 6) & 8)
          + 4 * ((v91 >> 10) & 3)
          + 20 * ((v91 >> 2) & 3)
          + (-((v91 >> 12) & 1) & 0xC);
      if ( (v91 & 0x1C0) != 0 )
      {
        v93 = 0;
        do
        {
          *(_BYTE *)(v92 + 4 * v93) = 0;
          v94 = (_BYTE *)(v92 + 4 * v93++);
          v94[3] = 0;
          v94[2] = 0;
          v94[1] = 0;
        }
        while ( v93 < ((FIELD_U32(v6, 12) >> 6) & 7u) );
        v76 = FIELD_U32(v6, 16);
      }
      FIELD_U32(v6, 16) = v76 & 0xFFFFFE3F | (v244 << 6);
      if ( (v244 & 3) != 0 )
      {
        v95 = v246 + v239 + v238 + v236 + v241 + 32;
        v96 = 0;
        do
        {
          v97 = (_BYTE *)(v95 + 4 * v96);
          v98 = v97[1];
          v99 = v97[2];
          LOBYTE(v97) = v97[3];
          *(_BYTE *)(v92 + 4 * v96) = *(_BYTE *)(v95 + 4 * v96);
          v100 = (_BYTE *)(v92 + 4 * v96++);
          v100[3] = (_BYTE)v97;
          v100[2] = v99;
          v100[1] = v98;
        }
        while ( (v244 & 3) != v96 );
      }
      else
      {
        v96 = 0;
      }
      if ( (unsigned int)(v244 - 1) >= 3 )
      {
        v101 = 4 * v96;
        v102 = 0;
        v103 = v96 - v244;
        v104 = v246 + v239 + v238 + v236 + v241 + 4 * v96;
        do
        {
          v105 = (_BYTE *)(v104 - 4 * v102);
          v102 -= 4;
          v106 = v105[33];
          v107 = v105[34];
          v108 = v105[35];
          v109 = v92;
          v92 += 16;
          *(_BYTE *)(v109 + v101) = v105[32];
          v110 = (_BYTE *)(v109 + v101);
          v110[3] = v108;
          v110[2] = v107;
          v110[1] = v106;
          v111 = v105[36];
          v112 = v105[38];
          v113 = v105[39];
          v110[5] = v105[37];
          v110[4] = v111;
          v110[7] = v113;
          v110[6] = v112;
          v114 = v105[40];
          v115 = v105[42];
          v116 = v105[43];
          v110[9] = v105[41];
          v110[8] = v114;
          v110[11] = v116;
          v110[10] = v115;
          v117 = v105[44];
          v105 += 44;
          v118 = v105[1];
          v119 = v105[2];
          LOBYTE(v105) = v105[3];
          v110[13] = v118;
          v110 += 12;
          *v110 = v117;
          v110 += 2;
          v110[1] = (_BYTE)v105;
          *v110 = v119;
        }
        while ( v103 != v102 );
      }
    }
    if ( (v248 & 0x200) != 0 )
    {
      v120 = FIELD_U32(v6, 20);
      v121 = *(_DWORD *)(v246 + v224 + 4);
      v122 = ((8 * FIELD_U32(v6, 12)) & 0x18)
           + (FIELD_U32(v6, 12) & 0x30)
           + 4 * ((FIELD_U32(v6, 12) >> 2) & 3 | (4 * ((FIELD_U32(v6, 12) >> 2) & 3)));
      *(_DWORD *)(v120 + v122) = *(_DWORD *)(v246 + v224);
      *(_DWORD *)(v120 + v122 + 4) = v121;
    }
    if ( (v248 & 0x400) != 0 )
    {
      v123 = FIELD_U32(v6, 20);
      v124 = ((8 * FIELD_U32(v6, 12)) & 0x18)
           + (FIELD_U32(v6, 12) & 0x30)
           + ((FIELD_U32(v6, 12) >> 6) & 8)
           + 20 * ((FIELD_U32(v6, 12) >> 2) & 3);
      v125 = *(_BYTE *)(v246 + v225 + 1);
      v126 = *(_BYTE *)(v246 + v225 + 2);
      v127 = *(_BYTE *)(v246 + v225 + 3);
      *(_BYTE *)(v123 + v124) = *(_BYTE *)(v246 + v225);
      v128 = (_BYTE *)(v123 + v124);
      v128[3] = v127;
      v128[2] = v126;
      v128[1] = v125;
    }
    if ( v233 )
    {
      v129 = FIELD_U32(v6, 20);
      v130 = (FIELD_U32(v6, 12) & 0x30 | 4)
           + ((8 * FIELD_U32(v6, 12)) & 0x18)
           + ((FIELD_U32(v6, 12) >> 6) & 8)
           + 20 * ((FIELD_U32(v6, 12) >> 2) & 3);
      v131 = *(_BYTE *)(v246 + v226 + 1);
      v132 = *(_BYTE *)(v246 + v226 + 2);
      v133 = *(_BYTE *)(v246 + v226 + 3);
      *(_BYTE *)(v129 + v130) = *(_BYTE *)(v246 + v226);
      v134 = (_BYTE *)(v129 + v130);
      v134[3] = v133;
      v134[2] = v132;
      v134[1] = v131;
    }
    if ( v220 )
    {
      v135 = FIELD_U32(v6, 20);
      v136 = *(_DWORD *)(v246 + v221 + 4);
      v137 = ((8 * FIELD_U32(v6, 12)) & 0x18)
           + (FIELD_U32(v6, 12) & 0x30)
           + ((FIELD_U32(v6, 12) >> 6) & 8)
           + 4 * ((FIELD_U32(v6, 12) >> 10) & 3)
           + 20 * ((FIELD_U32(v6, 12) >> 2) & 3);
      v138 = *(_DWORD *)(v246 + v221 + 8);
      *(_DWORD *)(v135 + v137) = *(_DWORD *)(v246 + v221);
      v139 = v135 + v137;
      FIELD_U32(v139, 4) = v136;
      FIELD_U32(v139, 8) = v138;
    }
    v140 = v219 & (v248 >> 2) & 0x70;
    if ( v222 )
    {
      v141 = (int *)((v246 + v218) & ((int)(v248 << 12) >> 31));
      v142 = FIELD_U32(v6, 12);
      v143 = (int *)(FIELD_U32(v6, 20)
                   + ((8 * v142) & 0x18)
                   + (v142 & 0x30)
                   + ((v142 >> 6) & 8)
                   + 4 * ((v142 >> 10) & 3)
                   + 4 * ((v142 >> 6) & 7)
                   + ((v142 >> 12) & 8)
                   + (-((v142 >> 12) & 1) & 0xC)
                   + 20 * (((v142 >> 13) & 3) + ((v142 >> 2) & 3)));
      v144 = *v141;
      v145 = v141[1];
      v146 = v141[2];
      v141 += 3;
      *v143 = v144;
      v143[1] = v145;
      v143[2] = v146;
      v143 += 3;
      v147 = v141[1];
      v148 = v141[2];
      v149 = v141[3];
      *v143 = *v141;
      v143[1] = v147;
      v143[2] = v148;
      v143[3] = v149;
      if ( v244 )
      {
        v150 = FIELD_U32(v6, 12);
        v151 = (_DWORD *)(FIELD_U32(v6, 20)
                        + ((8 * v150) & 0x18)
                        + (v150 & 0x30)
                        + ((v150 >> 6) & 8)
                        + 4 * ((v150 >> 10) & 3)
                        + 4 * ((v150 >> 6) & 7)
                        + ((v150 >> 12) & 8)
                        + (-((v150 >> 12) & 1) & 0xC)
                        + (-(HIWORD(v150) & 1) & 0x1C)
                        + 20 * (((v150 >> 13) & 3) + ((v150 >> 2) & 3)));
        v152 = v227[1];
        v153 = v227[2];
        v154 = v227[3];
        *v151 = *v227;
        v151[1] = v152;
        v151[2] = v153;
        v151[3] = v154;
        if ( v244 != 1 )
        {
          v155 = v227[5];
          v156 = v227[6];
          v157 = v227[7];
          v151[4] = v227[4];
          v151[5] = v155;
          v151[6] = v156;
          v151[7] = v157;
          if ( v244 != 2 )
          {
            v158 = v227[9];
            v159 = v227[10];
            v160 = v227[11];
            v151[8] = v227[8];
            v151[9] = v158;
            v151[10] = v159;
            v151[11] = v160;
            if ( v244 != 3 )
            {
              v161 = v227[13];
              v162 = v227[14];
              v163 = v227[15];
              v151[12] = v227[12];
              v151[13] = v161;
              v151[14] = v162;
              v151[15] = v163;
              if ( v244 != 4 )
              {
                v164 = v227[17];
                v165 = v227[18];
                v166 = v227[19];
                v151[16] = v227[16];
                v151[17] = v164;
                v151[18] = v165;
                v151[19] = v166;
                if ( v244 != 5 )
                {
                  v167 = v227[21];
                  v168 = v227[22];
                  v169 = v227[23];
                  v151[20] = v227[20];
                  v151[21] = v167;
                  v151[22] = v168;
                  v151[23] = v169;
                  if ( v244 != 6 )
                  {
                    v170 = v151 + 24;
                    v171 = v227[25];
                    v172 = v227[26];
                    v173 = v227[27];
                    *v170 = v227[24];
                    v170[1] = v171;
                    v170[2] = v172;
                    v170[3] = v173;
                  }
                }
              }
            }
          }
        }
      }
    }
    v245 = v6;
    v232 = v223 + v140;
    v234 = v248 & 0x20000;
    if ( v235 )
    {
      v174 = FIELD_U32(v6, 12);
      v175 = (_DWORD *)(FIELD_U32(v6, 20)
                      + ((8 * v174) & 0x18)
                      + (v174 & 0x30)
                      + ((v174 >> 6) & 8)
                      + 4 * ((v174 >> 10) & 3)
                      + 4 * ((v174 >> 6) & 7)
                      + 20 * ((v174 >> 2) & 3)
                      + (-((v174 >> 12) & 1) & 0xC));
      if ( (v174 & 0x6000) != 0 )
      {
        v176 = (_DWORD *)(FIELD_U32(v6, 20)
                        + ((8 * v174) & 0x18)
                        + (v174 & 0x30)
                        + ((v174 >> 6) & 8)
                        + 4 * ((v174 >> 10) & 3)
                        + 4 * ((v174 >> 6) & 7)
                        + 20 * ((v174 >> 2) & 3)
                        + (-((v174 >> 12) & 1) & 0xC));
        v177 = 0;
        do
        {
          *v176 = 0;
          v176[1] = 0;
          v176[2] = 0;
          v176[3] = 0;
          v176[4] = 0;
          ++v177;
          v176 += 5;
        }
        while ( v177 < ((FIELD_U32(v6, 12) >> 13) & 3u) );
      }
      FIELD_U32(v6, 16) = FIELD_U32(v6, 16) & 0xFFFF9FFF | (v235 << 13);
      v178 = 0;
      if ( ((v248 >> 15) & 1) != 0 )
      {
        v179 = *(_DWORD *)(v246 + v232 + 4);
        v180 = *(_DWORD *)(v246 + v232 + 8);
        v181 = *(_DWORD *)(v246 + v232 + 12);
        v182 = *(_DWORD *)(v246 + v232 + 16);
        v178 = 1;
        *v175 = *(_DWORD *)(v246 + v232);
        v175[1] = v179;
        v175[2] = v180;
        v175[3] = v181;
        v175[4] = v182;
      }
      if ( v235 != 1 )
      {
        v183 = v235 - v178;
        v184 = 5 * v178;
        v185 = &v175[v184];
        v186 = v246
             + v140
             + v215
             + v216
             + v239
             + v238
             + v236
             + v217
             + v241
             + ((v248 >> 10) & 4)
             + ((v248 >> 8) & 4)
             + ((v248 >> 4) & 0x1C)
             + 4 * v184;
        v187 = 0;
        do
        {
          v188 = (_DWORD *)(v186 + v187 * 4);
          v189 = &v185[v187];
          v187 += 10;
          v183 -= 2;
          v190 = v188[9];
          v191 = v188[10];
          v192 = v188[11];
          v193 = v188[12];
          *v189 = v188[8];
          v189[1] = v190;
          v189[2] = v191;
          v189[3] = v192;
          v189[4] = v193;
          v194 = v188 + 13;
          v195 = v189 + 5;
          v196 = v188[13];
          v197 = v188[14];
          v198 = v194[2];
          v199 = v194[3];
          v200 = v194[4];
          *v195 = v196;
          v195[1] = v197;
          v195[2] = v198;
          v195[3] = v199;
          v195[4] = v200;
        }
        while ( v183 );
      }
    }
    v6 = v245;
    v201 = v232 + 4 * (v235 | (4 * v235));
    if ( v234 )
    {
      v202 = *(_BYTE *)(v246 + v201 + 1);
      v203 = *(_BYTE *)(v246 + v201 + 2);
      v204 = *(_BYTE *)(v246 + v201 + 3);
      v205 = *(_BYTE *)(v246 + v201 + 5);
      v206 = FIELD_U32(v245, 12);
      v207 = FIELD_U32(v245, 20);
      v208 = ((8 * v206) & 0x18)
           + (v206 & 0x30)
           + ((v206 >> 6) & 8)
           + 4 * ((v206 >> 10) & 3)
           + 4 * ((v206 >> 6) & 7)
           + (-((v206 >> 12) & 1) & 0xC)
           + 20 * (((v206 >> 13) & 3) + ((v206 >> 2) & 3));
      LOBYTE(v206) = *(_BYTE *)(v246 + v201 + 4);
      v209 = *(_BYTE *)(v246 + v201 + 6);
      v210 = *(_BYTE *)(v246 + v201 + 7);
      *(_BYTE *)(v207 + v208) = *(_BYTE *)(v246 + v201);
      v211 = (_BYTE *)(v207 + v208);
      v211[5] = v205;
      v211[3] = v204;
      v211[2] = v203;
      v211[1] = v202;
      v211[4] = v206;
      v211 += 4;
      v211[3] = v210;
      v211[2] = v209;
    }
    v53 = v243;
    if ( (v248 & 0x100000) != 0 )
    {
      v212 = FIELD_U32(v245, 12);
      qmemcpy(
        (void *)(FIELD_U32(v245, 20)
               + ((v212 >> 12) & 0x10) * ((v212 >> 6) & 7)
               + ((8 * v212) & 0x18)
               + (v212 & 0x30)
               + ((v212 >> 6) & 8)
               + 4 * ((v212 >> 10) & 3)
               + 4 * ((v212 >> 6) & 7)
               + ((v212 >> 12) & 8)
               + (-((v212 >> 12) & 1) & 0xC)
               + (-(HIWORD(v212) & 1) & 0x1C)
               + 20 * (((v212 >> 13) & 3) + ((v212 >> 2) & 3))),
        (const void *)(v246 + v201 + (v234 >> 14)),
        0x74u);
    }
  }
  sub_60866798(v6, v53, a6, v242);
  sub_60866FAC(v6, a2, v53);
  sub_60867078(v6, v53);
  return v6;
}
