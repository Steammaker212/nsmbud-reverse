/* sub_609324F0
 * address: 0x609324F0   size: 6060   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609324F0(_DWORD *a1, int *a2, void *a3)
{
  __int64 v5; // r4
  unsigned int v6; // r0
  _QWORD *v7; // r0
  int v8; // r7
  _QWORD *v9; // r9
  int v10; // r0
  int v11; // r0
  int v12; // r10
  unsigned int i; // r11
  _BYTE *v14; // r1
  int v15; // r1
  int v16; // r1
  _QWORD *v17; // r1
  _QWORD *v18; // r1
  _QWORD *v19; // r1
  _QWORD *v20; // r1
  int v21; // r1
  int v22; // r1
  int v23; // r1
  int v24; // r1
  int v25; // r1
  int v26; // r1
  int v27; // r1
  int v28; // r1
  int v29; // r1
  int *v30; // r5
  int v31; // r1
  int v32; // r6
  int v33; // r5
  int v34; // r1
  int v35; // r1
  int v36; // r1
  int v37; // r2
  int v38; // r0
  int v39; // r7
  char *v40; // r6
  int v41; // r1
  int v42; // r6
  int v43; // r5
  _DWORD *v44; // r1
  unsigned int v45; // r3
  int v46; // r9
  unsigned int v47; // r11
  unsigned int v48; // r0
  int v49; // r10
  int v50; // r4
  int v51; // r0
  _DWORD *v52; // r1
  unsigned int v53; // r2
  int v54; // r1
  unsigned int v55; // r0
  int v56; // r0
  _DWORD *v57; // r1
  unsigned int v58; // r2
  int v59; // r1
  unsigned int v60; // r0
  int v61; // r5
  int v62; // r4
  char *v63; // r0
  int v64; // r0
  _DWORD *v65; // r1
  unsigned int v66; // r2
  int v67; // r1
  unsigned int v68; // r0
  _DWORD *v69; // r0
  int j; // r5
  char *v71; // r0
  int v72; // r0
  _DWORD *v73; // r1
  unsigned int v74; // r2
  int v75; // r1
  unsigned int v76; // r0
  _DWORD *v77; // r0
  int k; // r5
  char *v79; // r0
  int v80; // r0
  _DWORD *v81; // r1
  unsigned int v82; // r2
  int v83; // r1
  unsigned int v84; // r0
  _DWORD *v85; // r0
  int m; // r5
  char *v87; // r0
  int v88; // r0
  _DWORD *v89; // r1
  unsigned int v90; // r2
  int v91; // r1
  unsigned int v92; // r0
  _DWORD *v93; // r0
  int v94; // r5
  int v95; // r2
  bool v96; // r0
  int v97; // r0
  int v98; // r10
  int v99; // r11
  int v100; // r0
  bool v101; // r0
  int v102; // r0
  int v103; // r9
  int v104; // r7
  char *v105; // r8
  char *v106; // r6
  int v107; // r0
  _DWORD *v108; // r1
  unsigned int v109; // r2
  int v110; // r1
  unsigned int v111; // r0
  int n; // r7
  int v113; // r0
  _DWORD *v114; // r1
  unsigned int v115; // r2
  int v116; // r1
  unsigned int v117; // r0
  int v118; // r5
  int v119; // r2
  bool v120; // r0
  int v121; // r0
  unsigned int v122; // r4
  bool v123; // r6
  char *v124; // r11
  char *v125; // r8
  int v126; // r0
  _DWORD *v127; // r2
  int v128; // r1
  unsigned int v129; // r3
  int v130; // r2
  unsigned int v131; // r0
  _DWORD *v132; // r10
  int v133; // r0
  _DWORD *v134; // r1
  unsigned int v135; // r2
  int v136; // r1
  unsigned int v137; // r0
  int v138; // r0
  _DWORD *v139; // r1
  unsigned int v140; // r2
  int v141; // r1
  unsigned int v142; // r0
  int v143; // r4
  int v144; // r0
  _DWORD *v145; // r1
  unsigned int v146; // r2
  int v147; // r1
  unsigned int v148; // r0
  int v149; // r0
  _DWORD *v150; // r1
  unsigned int v151; // r2
  int v152; // r1
  unsigned int v153; // r0
  int v154; // r0
  _DWORD *v155; // r1
  unsigned int v156; // r2
  int v157; // r1
  unsigned int v158; // r0
  int v159; // r0
  _DWORD *v160; // r1
  unsigned int v161; // r2
  int v162; // r1
  unsigned int v163; // r0
  unsigned int v164; // r4
  int v165; // r6
  bool v166; // r7
  char *v167; // r5
  int v168; // r0
  _DWORD *v169; // r2
  int v170; // r1
  unsigned int v171; // r3
  int v172; // r2
  unsigned int v173; // r0
  _DWORD *v174; // r10
  int v175; // r0
  _DWORD *v176; // r1
  unsigned int v177; // r2
  int v178; // r1
  unsigned int v179; // r0
  int v180; // r0
  _DWORD *v181; // r1
  unsigned int v182; // r2
  int v183; // r1
  unsigned int v184; // r0
  int v185; // r0
  _DWORD *v186; // r1
  unsigned int v187; // r2
  int v188; // r1
  unsigned int v189; // r0
  int v190; // r4
  int v191; // r0
  int v192; // r1
  int v193; // r0
  _DWORD *v194; // r1
  unsigned int v195; // r2
  int v196; // r1
  unsigned int v197; // r0
  int v198; // r0
  _DWORD *v199; // r1
  unsigned int v200; // r2
  int v201; // r1
  unsigned int v202; // r0
  int v203; // r4
  int v204; // r0
  _DWORD *v205; // r1
  unsigned int v206; // r2
  int v207; // r1
  unsigned int v208; // r0
  int v209; // r0
  _DWORD *v210; // r1
  unsigned int v211; // r2
  int v212; // r1
  unsigned int v213; // r0
  unsigned int v214; // r5
  int v215; // r4
  bool v216; // r9
  char *v217; // r8
  int v218; // r0
  _DWORD *v219; // r2
  int v220; // r1
  unsigned int v221; // r3
  int v222; // r2
  unsigned int v223; // r0
  _DWORD *v224; // r7
  int v225; // r0
  _DWORD *v226; // r1
  unsigned int v227; // r2
  int v228; // r1
  unsigned int v229; // r0
  unsigned int v230; // r5
  bool v231; // r8
  char *v232; // r9
  int v233; // r0
  _DWORD *v234; // r2
  int v235; // r1
  unsigned int v236; // r3
  int v237; // r2
  unsigned int v238; // r0
  _DWORD *v239; // r7
  int v240; // r0
  _DWORD *v241; // r1
  unsigned int v242; // r2
  int v243; // r1
  unsigned int v244; // r0
  int v245; // r4
  int v246; // r0
  _DWORD *v247; // r1
  unsigned int v248; // r2
  int v249; // r1
  unsigned int v250; // r0
  int v251; // r0
  _DWORD *v252; // r1
  unsigned int v253; // r2
  int v254; // r1
  unsigned int v255; // r0
  int v256; // r1
  void *v259; // [sp+20h] [bp-88h]
  int v260; // [sp+2Ch] [bp-7Ch]
  int v261; // [sp+2Ch] [bp-7Ch]
  int v262; // [sp+30h] [bp-78h]
  _DWORD *v263; // [sp+34h] [bp-74h]
  int v264; // [sp+38h] [bp-70h]
  unsigned int v265; // [sp+44h] [bp-64h]
  int v266; // [sp+44h] [bp-64h]
  const char *v267; // [sp+48h] [bp-60h] BYREF
  const char *v268; // [sp+4Ch] [bp-5Ch]
  const char *v269; // [sp+50h] [bp-58h]
  char *v270; // [sp+54h] [bp-54h]
  __int64 v271; // [sp+58h] [bp-50h] BYREF
  char *v272; // [sp+60h] [bp-48h]
  char *v273; // [sp+64h] [bp-44h]
  __int64 v274; // [sp+6Ch] [bp-3Ch] BYREF
  char *v275; // [sp+74h] [bp-34h]
  int v276; // [sp+78h] [bp-30h] BYREF

  HIDWORD(v5) = *a2;
  if ( *a2 >= 1 )
  {
    LODWORD(v5) = 3608;
    v6 = 3608 * HIDWORD(v5) + 8;
    if ( v6 < 3608 * HIDWORD(v5) )
      v6 = -1;
    if ( !is_mul_ok(0xE18u, HIDWORD(v5)) )
      v6 = -1;
    v7 = (_QWORD *)sub_608DE334(v6, (int)a3, 4);
    if ( v7 )
    {
      v8 = 3608 * HIDWORD(v5);
      v9 = v7 + 1;
      *v7 = v5;
      v10 = (int)(v7 + 1);
      do
      {
        v8 -= 3608;
        v10 = sub_60938CF8(v10) + 3608;
      }
      while ( v8 );
      a1[390] = HIDWORD(v5);
      a1[391] = v9;
    }
  }
  v263 = a1;
  v11 = a1[390];
  v259 = a3;
  if ( v11 >= 1 )
  {
    v12 = 0;
    for ( i = 0; (int)i < v11; ++i )
    {
      v14 = (_BYTE *)v263[391];
      if ( v11 > i )
        v14 += v12;
      *v14 = 1;
      v15 = v263[391];
      if ( v263[390] > i )
        v15 += v12;
      FIELD_U32(v15, 2744) = 0;
      v16 = v263[391];
      if ( v263[390] > i )
        v16 += v12;
      FIELD_U32(v16, 2748) = 0;
      v17 = (_QWORD *)v263[391];
      if ( v263[390] > i )
        v17 = (_QWORD *)((char *)v17 + v12);
      v17[345] = 1065353216;
      v17[346] = 0;
      v17[347] = 0x3F80000000000000LL;
      v17[348] = 0;
      v17[349] = 0;
      v17[350] = 1065353216;
      v17[351] = 0;
      v17[352] = 0x3F80000000000000LL;
      v18 = (_QWORD *)v263[391];
      if ( v263[390] > i )
        v18 = (_QWORD *)((char *)v18 + v12);
      v18[353] = 1065353216;
      v18[354] = 0;
      v18[355] = 0x3F80000000000000LL;
      v18[356] = 0;
      v18[357] = 0;
      v18[358] = 1065353216;
      v19 = (_QWORD *)v263[391];
      if ( v263[390] > i )
        v19 = (_QWORD *)((char *)v19 + v12);
      v19[359] = 1065353216;
      v19[360] = 0;
      v19[361] = 0x3F80000000000000LL;
      v19[362] = 0;
      v19[363] = 0;
      v19[364] = 1065353216;
      v19[365] = 0;
      v19[366] = 0x3F80000000000000LL;
      v20 = (_QWORD *)v263[391];
      if ( v263[390] > i )
        v20 = (_QWORD *)((char *)v20 + v12);
      v20[367] = 1065353216;
      v20[368] = 0;
      v20[369] = 0x3F80000000000000LL;
      v20[370] = 0;
      v20[371] = 0;
      v20[372] = 1065353216;
      v21 = v263[391];
      if ( v263[390] > i )
        v21 += v12;
      FIELD_U8(v21, 2986) = 0;
      v22 = v263[391];
      if ( v263[390] > i )
        v22 += v12;
      FIELD_U8(v22, 3072) = 8;
      v23 = v263[391];
      if ( v263[390] > i )
        v23 += v12;
      FIELD_U32(v23, 2988) = 0;
      v24 = v263[391];
      if ( v263[390] > i )
        v24 += v12;
      FIELD_U16(v24, 2984) = 0;
      v25 = v263[391];
      if ( v263[390] > i )
        v25 += v12;
      FIELD_U32(v25, 3012) = 15;
      v26 = v263[391];
      if ( v263[390] > i )
        v26 += v12;
      FIELD_U8(v26, 3073) = 0;
      v27 = v263[391];
      if ( v263[390] > i )
        v27 += v12;
      FIELD_U32(v27, 3088) = 0;
      v28 = v263[391];
      if ( v263[390] > i )
        v28 += v12;
      FIELD_U8(v28, 3092) = 0;
      v29 = v263[391];
      if ( v263[390] > i )
        v29 += v12;
      FIELD_U32(v29, 3096) = 0;
      FIELD_U32(v29, 3100) = 0;
      v30 = (int *)v263[391];
      if ( v263[390] > i )
        v30 = (int *)((char *)v30 + v12);
      sub_6091FDB0((int)(v30 + 776), 0, 18, 1, 1, 1, 1, 0, 0, 1);
      sub_60972444(v30 + 782);
      sub_60913D88((int)(v30 + 844), v30[786], (int)a3, v30[785], 4);
      sub_60913A6C(&v276, (int)(v30 + 844), 0);
      sub_60913A6C(&v274, (int)(v30 + 844), 0);
      v271 = v274;
      v272 = v275;
      sub_609208DC(v30 + 776, (int *)&v271, 0);
      v31 = v263[391];
      if ( v263[390] > i )
        v31 += v12;
      v32 = v31 + 3408;
      sub_609214AC(v31 + 3408, 6u, a3);
      sub_60921540(v32, 6, 1, 0, 1u);
      sub_60921540(v32, 6, 1, 0, 1u);
      sub_60921540(v32, 6, 1, 0, 1u);
      sub_60921540(v32, 6, 1, 0, 1u);
      sub_60921540(v32, 6, 1, 0, 1u);
      sub_60921540(v32, 6, 1, 0, 1u);
      sub_609216EC(v32, a3, 3, 1);
      v33 = v263[391];
      if ( v263[390] > i )
        v33 += v12;
      sub_609214AC(v33 + 3504, 1u, a3);
      sub_60921540(v33 + 3504, 2, 3, 0, 1u);
      sub_609216EC(v33 + 3504, a3, 1, 1);
      v34 = FIELD_U32(v33, 3512);
      LODWORD(v271) = 0;
      sub_60921988((_DWORD **)(v33 + 3504), v34, 0, &v271, 0, 1);
      v35 = FIELD_U32(v33, 3512);
      LODWORD(v271) = 0;
      sub_60921988((_DWORD **)(v33 + 3504), v35, 0, &v271, 1, 1);
      v36 = FIELD_U32(v33, 3512);
      LODWORD(v271) = 0;
      sub_60921988((_DWORD **)(v33 + 3504), v36, 0, &v271, 2, 1);
      v37 = FIELD_U8(v33, 3541);
      v38 = FIELD_U32(v33, 3520);
      v39 = FIELD_U32(v33, 3532);
      v40 = *(char **)(v33 + 3536);
      v41 = FIELD_U16(v33, 3544);
      LODWORD(v271) = FIELD_U32(v33, 3528);
      HIDWORD(v271) = v39 + v41 * v37 * v38;
      v272 = v40;
      sub_60913B04((int *)&v271, FIELD_U32(v33, 3516));
      v12 += 3608;
      v11 = v263[390];
    }
  }
  v42 = a2[1];
  if ( v42 )
  {
    v43 = a2[2];
    if ( v43 )
    {
      v44 = v263;
      if ( v11 >= 1 )
      {
        v45 = 0;
        do
        {
          v46 = v44[391];
          v47 = 0;
          v265 = v45;
          if ( v11 > v45 )
            v46 += 3608 * v45;
          do
          {
            v48 = 0;
            if ( v47 < 2 )
              v48 = v47;
            v49 = v46 + 648 * v48;
            sub_60913D88(v49 + 2064, v42, (int)a3, 0x2000, 0);
            sub_60913A6C(&v271, v49 + 2064, 0);
            ++v47;
            FIELD_U8(v49, 2092) = 0;
          }
          while ( v43 != v47 );
          FIELD_U32(v46, 2744) = v43;
          FIELD_U32(v46, 2748) = 0;
          v44 = v263;
          v11 = v263[390];
          v45 = v265 + 1;
        }
        while ( (int)(v265 + 1) < v11 );
      }
    }
  }
  v50 = 0;
  LODWORD(v271) = "FETCH_TYPE";
  if ( FIELD_U32(dword_60CD0B60, 20) >= 0x4Au )
    v50 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 292);
  v267 = "0";
  v51 = sub_6091E300(FIELD_U32(v50, 4) + 8, 1, (int)&v271, (int)&v267, FIELD_U16(v50, 10));
  v52 = *(_DWORD **)(v50 + 4);
  if ( v51 < 1 )
  {
    v54 = v52[3];
  }
  else
  {
    v53 = v52[4];
    v54 = v52[5];
    v55 = v51 - 1;
    if ( v53 > v55 )
      v54 += 936 * v55;
  }
  v263[100] = v54;
  v267 = "5";
  v56 = sub_6091E300(FIELD_U32(v50, 4) + 8, 1, (int)&v271, (int)&v267, FIELD_U16(v50, 10));
  v57 = *(_DWORD **)(v50 + 4);
  if ( v56 < 1 )
  {
    v59 = v57[3];
  }
  else
  {
    v58 = v57[4];
    v59 = v57[5];
    v60 = v56 - 1;
    if ( v58 > v60 )
      v59 += 936 * v60;
  }
  v263[101] = v59;
  v61 = 0;
  v62 = 0;
  v272 = off_60C5E218;
  v271 = qword_60C5E210;
  if ( FIELD_U32(dword_60CD0B60, 20) > 0x48u )
    v62 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 288);
  do
  {
    v63 = off_60C5E23C[v61];
    v267 = "0";
    v268 = "0";
    v269 = v63;
    v64 = sub_6091E300(FIELD_U32(v62, 4) + 8, 3, (int)&v271, (int)&v267, FIELD_U16(v62, 10));
    v65 = *(_DWORD **)(v62 + 4);
    if ( v64 <= 0 )
    {
      v67 = v65[3];
    }
    else
    {
      v66 = v65[4];
      v67 = v65[5];
      v68 = v64 - 1;
      if ( v66 > v68 )
        v67 += 936 * v68;
    }
    v69 = &v263[v61++];
    v69[102] = v67;
  }
  while ( v61 != 7 );
  for ( j = 0; j != 7; ++j )
  {
    v71 = off_60C5E23C[j];
    v267 = "0";
    v268 = "1";
    v269 = v71;
    v72 = sub_6091E300(FIELD_U32(v62, 4) + 8, 3, (int)&v271, (int)&v267, FIELD_U16(v62, 10));
    v73 = *(_DWORD **)(v62 + 4);
    if ( v72 < 1 )
    {
      v75 = v73[3];
    }
    else
    {
      v74 = v73[4];
      v75 = v73[5];
      v76 = v72 - 1;
      if ( v74 > v76 )
        v75 += 936 * v76;
    }
    v77 = &v263[j];
    v77[109] = v75;
  }
  for ( k = 0; k != 7; ++k )
  {
    v79 = off_60C5E23C[k];
    v267 = "1";
    v268 = "0";
    v269 = v79;
    v80 = sub_6091E300(FIELD_U32(v62, 4) + 8, 3, (int)&v271, (int)&v267, FIELD_U16(v62, 10));
    v81 = *(_DWORD **)(v62 + 4);
    if ( v80 < 1 )
    {
      v83 = v81[3];
    }
    else
    {
      v82 = v81[4];
      v83 = v81[5];
      v84 = v80 - 1;
      if ( v82 > v84 )
        v83 += 936 * v84;
    }
    v85 = &v263[k];
    v85[116] = v83;
  }
  for ( m = 0; m != 7; ++m )
  {
    v87 = off_60C5E23C[m];
    v267 = "1";
    v268 = "1";
    v269 = v87;
    v88 = sub_6091E300(FIELD_U32(v62, 4) + 8, 3, (int)&v271, (int)&v267, FIELD_U16(v62, 10));
    v89 = *(_DWORD **)(v62 + 4);
    if ( v88 < 1 )
    {
      v91 = v89[3];
    }
    else
    {
      v90 = v89[4];
      v91 = v89[5];
      v92 = v88 - 1;
      if ( v90 > v92 )
        v91 += 936 * v92;
    }
    v93 = &v263[m];
    v93[123] = v91;
  }
  v94 = 0;
  v273 = off_60C5E22C[0];
  v271 = qword_60C5E220;
  v272 = off_60C5E228[0];
  v95 = 0;
  if ( FIELD_U32(dword_60CD0B60, 20) > 0x4Au )
    v94 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 296);
  v96 = 1;
  do
  {
    v97 = v96;
    v98 = v95;
    v99 = 0;
    if ( v97 )
      v97 = v95;
    v100 = 7 * v97;
    v262 = (int)&v263[4 * v100 + 137];
    v260 = (int)&v263[4 * v100 + 130];
    v101 = 1;
    do
    {
      v102 = v101;
      v103 = 0;
      if ( v102 )
        v102 = v99;
      v264 = 7 * v102;
      v104 = v260 + 56 * v102;
      do
      {
        v105 = off_60C5E23C[v98];
        v106 = off_60C5E23C[v99];
        v267 = v105;
        v268 = v106;
        v269 = "0";
        v270 = off_60C5E23C[v103];
        v107 = sub_6091E300(FIELD_U32(v94, 4) + 8, 4, (int)&v271, (int)&v267, FIELD_U16(v94, 10));
        v108 = *(_DWORD **)(v94 + 4);
        if ( v107 <= 0 )
        {
          v110 = v108[3];
        }
        else
        {
          v109 = v108[4];
          v110 = v108[5];
          v111 = v107 - 1;
          if ( v109 > v111 )
            v110 += 936 * v111;
        }
        *(_DWORD *)(v104 + 4 * v103++) = v110;
      }
      while ( v103 != 7 );
      for ( n = 0; n != 7; ++n )
      {
        v267 = v105;
        v268 = v106;
        v269 = "1";
        v270 = off_60C5E23C[n];
        v113 = sub_6091E300(FIELD_U32(v94, 4) + 8, 4, (int)&v271, (int)&v267, FIELD_U16(v94, 10));
        v114 = *(_DWORD **)(v94 + 4);
        if ( v113 < 1 )
        {
          v116 = v114[3];
        }
        else
        {
          v115 = v114[4];
          v116 = v114[5];
          v117 = v113 - 1;
          if ( v115 > v117 )
            v116 += 936 * v117;
        }
        *(_DWORD *)(v262 + 8 * v264 + 4 * n) = v116;
      }
      v101 = (unsigned int)++v99 < 2;
    }
    while ( v99 != 2 );
    v95 = v98 + 1;
    v96 = (unsigned int)(v98 + 1) < 2;
  }
  while ( v98 != 1 );
  v118 = 0;
  v272 = off_60C5E238[0];
  v271 = qword_60C5E230;
  v119 = 0;
  if ( FIELD_U32(dword_60CD0B60, 20) >= 0x4Cu )
    v118 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 300);
  v120 = 1;
  do
  {
    v121 = v120;
    v122 = 0;
    v123 = 1;
    v261 = v119;
    if ( v121 )
      v121 = v119;
    v266 = v121;
    v124 = off_60C5E23C[v119];
    do
    {
      v267 = v124;
      v125 = off_60C5E23C[v122];
      v268 = v125;
      v269 = "1";
      v126 = sub_6091E300(FIELD_U32(v118, 4) + 8, 3, (int)&v271, (int)&v267, FIELD_U16(v118, 10));
      v127 = *(_DWORD **)(v118 + 4);
      v128 = v123;
      if ( v123 )
        v128 = v122;
      if ( v126 < 1 )
      {
        v130 = v127[3];
      }
      else
      {
        v129 = v127[4];
        v130 = v127[5];
        v131 = v126 - 1;
        if ( v129 > v131 )
          v130 += 936 * v131;
      }
      v132 = &v263[21 * v266 + 3 * v128];
      v132[186] = v130;
      v267 = v124;
      v268 = v125;
      v269 = "2";
      v133 = sub_6091E300(FIELD_U32(v118, 4) + 8, 3, (int)&v271, (int)&v267, FIELD_U16(v118, 10));
      v134 = *(_DWORD **)(v118 + 4);
      if ( v133 < 1 )
      {
        v136 = v134[3];
      }
      else
      {
        v135 = v134[4];
        v136 = v134[5];
        v137 = v133 - 1;
        if ( v135 > v137 )
          v136 += 936 * v137;
      }
      v132[187] = v136;
      v267 = v124;
      v268 = v125;
      v269 = "3";
      v138 = sub_6091E300(FIELD_U32(v118, 4) + 8, 3, (int)&v271, (int)&v267, FIELD_U16(v118, 10));
      v139 = *(_DWORD **)(v118 + 4);
      if ( v138 < 1 )
      {
        v141 = v139[3];
      }
      else
      {
        v140 = v139[4];
        v141 = v139[5];
        v142 = v138 - 1;
        if ( v140 > v142 )
          v141 += 936 * v142;
      }
      ++v122;
      v132[188] = v141;
      v123 = v122 < 7;
    }
    while ( v122 != 7 );
    v119 = v261 + 1;
    v120 = (unsigned int)(v261 + 1) < 2;
  }
  while ( v261 != 1 );
  v143 = 0;
  v271 = *(_QWORD *)off_60C5E258;
  if ( FIELD_U32(dword_60CD0B60, 20) >= 0x4Fu )
    v143 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 312);
  v267 = "0";
  v268 = "0";
  v144 = sub_6091E300(FIELD_U32(v143, 4) + 8, 2, (int)&v271, (int)&v267, FIELD_U16(v143, 10));
  v145 = *(_DWORD **)(v143 + 4);
  if ( v144 < 1 )
  {
    v147 = v145[3];
  }
  else
  {
    v146 = v145[4];
    v147 = v145[5];
    v148 = v144 - 1;
    if ( v146 > v148 )
      v147 += 936 * v148;
  }
  v263[228] = v147;
  v267 = "0";
  v268 = "1";
  v149 = sub_6091E300(FIELD_U32(v143, 4) + 8, 2, (int)&v271, (int)&v267, FIELD_U16(v143, 10));
  v150 = *(_DWORD **)(v143 + 4);
  if ( v149 < 1 )
  {
    v152 = v150[3];
  }
  else
  {
    v151 = v150[4];
    v152 = v150[5];
    v153 = v149 - 1;
    if ( v151 > v153 )
      v152 += 936 * v153;
  }
  v263[229] = v152;
  v267 = "1";
  v268 = "0";
  v154 = sub_6091E300(FIELD_U32(v143, 4) + 8, 2, (int)&v271, (int)&v267, FIELD_U16(v143, 10));
  v155 = *(_DWORD **)(v143 + 4);
  if ( v154 < 1 )
  {
    v157 = v155[3];
  }
  else
  {
    v156 = v155[4];
    v157 = v155[5];
    v158 = v154 - 1;
    if ( v156 > v158 )
      v157 += 936 * v158;
  }
  v263[230] = v157;
  v267 = "1";
  v268 = "1";
  v159 = sub_6091E300(FIELD_U32(v143, 4) + 8, 2, (int)&v271, (int)&v267, FIELD_U16(v143, 10));
  v160 = *(_DWORD **)(v143 + 4);
  if ( v159 < 1 )
  {
    v162 = v160[3];
  }
  else
  {
    v161 = v160[4];
    v162 = v160[5];
    v163 = v159 - 1;
    if ( v161 > v163 )
      v162 += 936 * v163;
  }
  v263[231] = v162;
  v164 = 0;
  v165 = 0;
  v271 = *(_QWORD *)off_60C5E260;
  if ( FIELD_U32(dword_60CD0B60, 20) > 0x4Fu )
    v165 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 316);
  v166 = 1;
  do
  {
    v167 = off_60C5E23C[v164];
    v267 = v167;
    v268 = "0";
    v168 = sub_6091E300(FIELD_U32(v165, 4) + 8, 2, (int)&v271, (int)&v267, FIELD_U16(v165, 10));
    v169 = *(_DWORD **)(v165 + 4);
    v170 = v166;
    if ( v166 )
      v170 = v164;
    if ( v168 < 1 )
    {
      v172 = v169[3];
    }
    else
    {
      v171 = v169[4];
      v172 = v169[5];
      v173 = v168 - 1;
      if ( v171 > v173 )
        v172 += 936 * v173;
    }
    v174 = &v263[4 * v170];
    v174[232] = v172;
    v267 = v167;
    v268 = "1";
    v175 = sub_6091E300(FIELD_U32(v165, 4) + 8, 2, (int)&v271, (int)&v267, FIELD_U16(v165, 10));
    v176 = *(_DWORD **)(v165 + 4);
    if ( v175 < 1 )
    {
      v178 = v176[3];
    }
    else
    {
      v177 = v176[4];
      v178 = v176[5];
      v179 = v175 - 1;
      if ( v177 > v179 )
        v178 += 936 * v179;
    }
    v174[233] = v178;
    v267 = v167;
    v268 = "2";
    v180 = sub_6091E300(FIELD_U32(v165, 4) + 8, 2, (int)&v271, (int)&v267, FIELD_U16(v165, 10));
    v181 = *(_DWORD **)(v165 + 4);
    if ( v180 < 1 )
    {
      v183 = v181[3];
    }
    else
    {
      v182 = v181[4];
      v183 = v181[5];
      v184 = v180 - 1;
      if ( v182 > v184 )
        v183 += 936 * v184;
    }
    v174[234] = v183;
    v267 = v167;
    v268 = "3";
    v185 = sub_6091E300(FIELD_U32(v165, 4) + 8, 2, (int)&v271, (int)&v267, FIELD_U16(v165, 10));
    v186 = *(_DWORD **)(v165 + 4);
    if ( v185 < 1 )
    {
      v188 = v186[3];
    }
    else
    {
      v187 = v186[4];
      v188 = v186[5];
      v189 = v185 - 1;
      if ( v187 > v189 )
        v188 += 936 * v189;
    }
    ++v164;
    v174[235] = v188;
    v166 = v164 < 2;
  }
  while ( v164 != 2 );
  v190 = 0;
  v191 = dword_60CD0B60;
  v192 = 0;
  if ( FIELD_U32(dword_60CD0B60, 20) >= 0x51u )
    v192 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 320);
  v263[240] = v192;
  LODWORD(v271) = "IS_REPROJECTION";
  if ( FIELD_U32(v191, 20) >= 0x52u )
    v190 = *(_DWORD *)(FIELD_U32(v191, 28) + 324);
  v267 = "0";
  v193 = sub_6091E300(FIELD_U32(v190, 4) + 8, 1, (int)&v271, (int)&v267, FIELD_U16(v190, 10));
  v194 = *(_DWORD **)(v190 + 4);
  if ( v193 < 1 )
  {
    v196 = v194[3];
  }
  else
  {
    v195 = v194[4];
    v196 = v194[5];
    v197 = v193 - 1;
    if ( v195 > v197 )
      v196 += 936 * v197;
  }
  v263[241] = v196;
  v267 = "1";
  v198 = sub_6091E300(FIELD_U32(v190, 4) + 8, 1, (int)&v271, (int)&v267, FIELD_U16(v190, 10));
  v199 = *(_DWORD **)(v190 + 4);
  if ( v198 < 1 )
  {
    v201 = v199[3];
  }
  else
  {
    v200 = v199[4];
    v201 = v199[5];
    v202 = v198 - 1;
    if ( v200 > v202 )
      v201 += 936 * v202;
  }
  v263[242] = v201;
  v203 = 0;
  LODWORD(v271) = "IS_ENCODE_POS_STORAGE";
  if ( FIELD_U32(dword_60CD0B60, 20) > 0x52u )
    v203 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 328);
  v267 = "0";
  v204 = sub_6091E300(FIELD_U32(v203, 4) + 8, 1, (int)&v271, (int)&v267, FIELD_U16(v203, 10));
  v205 = *(_DWORD **)(v203 + 4);
  if ( v204 < 1 )
  {
    v207 = v205[3];
  }
  else
  {
    v206 = v205[4];
    v207 = v205[5];
    v208 = v204 - 1;
    if ( v206 > v208 )
      v207 += 936 * v208;
  }
  v263[243] = v207;
  v267 = "1";
  v209 = sub_6091E300(FIELD_U32(v203, 4) + 8, 1, (int)&v271, (int)&v267, FIELD_U16(v203, 10));
  v210 = *(_DWORD **)(v203 + 4);
  if ( v209 < 1 )
  {
    v212 = v210[3];
  }
  else
  {
    v211 = v210[4];
    v212 = v210[5];
    v213 = v209 - 1;
    if ( v211 > v213 )
      v212 += 936 * v213;
  }
  v263[244] = v212;
  v214 = 0;
  v215 = 0;
  v272 = off_60C5E270;
  v271 = qword_60C5E268;
  if ( FIELD_U32(dword_60CD0B60, 20) > 0x53u )
    v215 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 332);
  v216 = 1;
  do
  {
    v267 = "0";
    v217 = off_60C5E23C[v214];
    v268 = v217;
    v269 = "0";
    v218 = sub_6091E300(FIELD_U32(v215, 4) + 8, 3, (int)&v271, (int)&v267, FIELD_U16(v215, 10));
    v219 = *(_DWORD **)(v215 + 4);
    v220 = v216;
    if ( v216 )
      v220 = v214;
    if ( v218 <= 0 )
    {
      v222 = v219[3];
    }
    else
    {
      v221 = v219[4];
      v222 = v219[5];
      v223 = v218 - 1;
      if ( v221 > v223 )
        v222 += 936 * v223;
    }
    v224 = &v263[2 * v220];
    v224[245] = v222;
    v267 = "0";
    v268 = v217;
    v269 = "1";
    v225 = sub_6091E300(FIELD_U32(v215, 4) + 8, 3, (int)&v271, (int)&v267, FIELD_U16(v215, 10));
    v226 = *(_DWORD **)(v215 + 4);
    if ( v225 < 1 )
    {
      v228 = v226[3];
    }
    else
    {
      v227 = v226[4];
      v228 = v226[5];
      v229 = v225 - 1;
      if ( v227 > v229 )
        v228 += 936 * v229;
    }
    ++v214;
    v224[246] = v228;
    v216 = v214 < 4;
  }
  while ( v214 != 4 );
  v230 = 0;
  v231 = 1;
  do
  {
    v267 = "1";
    v232 = off_60C5E23C[v230];
    v268 = v232;
    v269 = "0";
    v233 = sub_6091E300(FIELD_U32(v215, 4) + 8, 3, (int)&v271, (int)&v267, FIELD_U16(v215, 10));
    v234 = *(_DWORD **)(v215 + 4);
    v235 = v231;
    if ( v231 )
      v235 = v230;
    if ( v233 < 1 )
    {
      v237 = v234[3];
    }
    else
    {
      v236 = v234[4];
      v237 = v234[5];
      v238 = v233 - 1;
      if ( v236 > v238 )
        v237 += 936 * v238;
    }
    v239 = &v263[2 * v235];
    v239[253] = v237;
    v267 = "1";
    v268 = v232;
    v269 = "1";
    v240 = sub_6091E300(FIELD_U32(v215, 4) + 8, 3, (int)&v271, (int)&v267, FIELD_U16(v215, 10));
    v241 = *(_DWORD **)(v215 + 4);
    if ( v240 < 1 )
    {
      v243 = v241[3];
    }
    else
    {
      v242 = v241[4];
      v243 = v241[5];
      v244 = v240 - 1;
      if ( v242 > v244 )
        v243 += 936 * v244;
    }
    ++v230;
    v239[254] = v243;
    v231 = v230 < 4;
  }
  while ( v230 != 4 );
  v245 = 0;
  LODWORD(v271) = "STEP";
  if ( FIELD_U32(dword_60CD0B60, 20) > 0x54u )
    v245 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 336);
  v267 = "2";
  v246 = sub_6091E300(FIELD_U32(v245, 4) + 8, 1, (int)&v271, (int)&v267, FIELD_U16(v245, 10));
  v247 = *(_DWORD **)(v245 + 4);
  if ( v246 < 1 )
  {
    v249 = v247[3];
  }
  else
  {
    v248 = v247[4];
    v249 = v247[5];
    v250 = v246 - 1;
    if ( v248 > v250 )
      v249 += 936 * v250;
  }
  v263[261] = v249;
  v267 = "4";
  v251 = sub_6091E300(FIELD_U32(v245, 4) + 8, 1, (int)&v271, (int)&v267, FIELD_U16(v245, 10));
  v252 = *(_DWORD **)(v245 + 4);
  if ( v251 < 1 )
  {
    v254 = v252[3];
  }
  else
  {
    v253 = v252[4];
    v254 = v252[5];
    v255 = v251 - 1;
    if ( v253 > v255 )
      v254 += 936 * v255;
  }
  v263[262] = v254;
  if ( *((_BYTE *)a2 + 12) )
    sub_60933D90(v263, v259);
  v256 = *a2;
  LODWORD(v271) = &sead__SafeStringBase__vtable;
  HIDWORD(v271) = "FilterAA";
  return nullsub_123(v263 + 714, v256, &v271, v259);
}
