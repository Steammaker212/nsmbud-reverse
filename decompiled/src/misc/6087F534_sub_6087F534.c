/* sub_6087F534
 * address: 0x6087F534   size: 2824   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087F534(unsigned __int8 *a1, _DWORD *a2, int a3)
{
  int v5; // r1
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r1
  int v10; // r5
  int v11; // r9
  int v12; // r10
  unsigned int v13; // r1
  unsigned int v14; // r8
  _DWORD *v15; // r0
  int v16; // r11
  int v17; // r0
  int v18; // r2
  int v19; // r0
  int v20; // r1
  int v21; // r2
  unsigned int v22; // r10
  int v23; // r3
  int v24; // r0
  int v25; // r0
  unsigned int v26; // r5
  int v27; // r6
  int v28; // r2
  unsigned int v29; // lr
  unsigned int v30; // r1
  unsigned int v31; // r3
  unsigned int v32; // r1
  unsigned int v33; // r7
  unsigned int v34; // r3
  bool v35; // zf
  int v36; // r3
  bool v37; // zf
  int v38; // r1
  int v39; // r1
  unsigned int v40; // r7
  unsigned int v41; // r1
  unsigned int v42; // r3
  unsigned int v43; // r6
  unsigned int v44; // r1
  unsigned int v45; // r7
  unsigned int v46; // r1
  unsigned int v47; // r3
  unsigned int v48; // r6
  unsigned int v49; // r7
  unsigned int v50; // r1
  unsigned int v51; // r6
  unsigned int v52; // r5
  unsigned int v53; // r3
  unsigned int v54; // r1
  unsigned int v55; // r7
  unsigned int v56; // r1
  unsigned int v57; // r3
  unsigned int v58; // r3
  unsigned int v59; // r1
  int v60; // r12
  unsigned int v61; // r7
  unsigned int v62; // r1
  unsigned int v63; // r3
  unsigned int v64; // r6
  __int16 v65; // r2
  unsigned int v66; // r3
  unsigned int v67; // r1
  unsigned int v68; // r5
  unsigned int v69; // r6
  unsigned int v70; // r1
  unsigned int v71; // r3
  unsigned int v72; // r3
  int v73; // lr
  int v74; // r6
  int v75; // r2
  unsigned int v76; // r7
  unsigned int v77; // r3
  int v78; // r1
  int v79; // r2
  int v80; // r3
  int v81; // r8
  int v82; // r5
  unsigned int v83; // r5
  int v84; // r0
  unsigned int v85; // r6
  int v86; // r0
  int v87; // r11
  size_t v88; // r6
  int v89; // r1
  int v90; // r9
  int v91; // r5
  char *v92; // r0
  char *v93; // r7
  char *v94; // r0
  int v95; // r1
  int v96; // r0
  _DWORD *v97; // r1
  int v98; // r2
  int v99; // r3
  int v100; // r1
  _DWORD *v101; // r1
  int v102; // r2
  int v103; // r3
  int v104; // r1
  _DWORD *v105; // r1
  int v106; // r2
  int v107; // r3
  int v108; // r1
  _DWORD *v109; // r1
  _DWORD *v110; // r1
  _DWORD *v111; // r1
  int v112; // r2
  int v113; // r3
  int v114; // r1
  _DWORD *v115; // r1
  int v116; // r2
  int v117; // r3
  int v118; // r1
  int v119; // r0
  int v121; // [sp+0h] [bp-40h]
  int v122; // [sp+4h] [bp-3Ch]
  int v123; // [sp+8h] [bp-38h] BYREF
  int v124; // [sp+Ch] [bp-34h]
  int v125; // [sp+10h] [bp-30h]
  int v126; // [sp+14h] [bp-2Ch]

  v5 = *((_DWORD *)a1 + 34);
  if ( FIELD_U8(v5, 1874) )
    goto LABEL_2;
  if ( FIELD_S32(v5, 2400) < 1 )
    goto LABEL_151;
  v6 = *((_DWORD *)a1 + 176);
  v35 = v6 == 0;
  if ( v6 )
  {
    v36 = FIELD_U32(v6, 36);
    LOBYTE(v6) = 1;
    v35 = v36 == 0;
  }
  if ( v35 )
  {
LABEL_151:
    v6 = FIELD_U32(v5, 2340);
    v37 = v6 == 0;
    if ( v6 )
    {
      v6 = *((_DWORD *)a1 + 177);
      v37 = v6 == 0;
    }
    if ( v37 || (v38 = FIELD_U32(v6, 36), LOBYTE(v6) = 1, !v38) )
    {
      if ( *(int *)(*((_DWORD *)a1 + 87) + 576) < 1 )
      {
LABEL_2:
        LOBYTE(v6) = 0;
        goto LABEL_3;
      }
      v39 = *((_DWORD *)a1 + 178);
      LOBYTE(v6) = 0;
      if ( v39 )
        LOBYTE(v6) = FIELD_U32(v39, 36) != 0;
    }
  }
LABEL_3:
  a1[1040] = v6;
  v7 = *((_DWORD *)a1 + 9);
  if ( !v7 )
  {
    v7 = ((int (__fastcall *)(unsigned __int8 *, int))loc_608800A0)(a1, a3);
    if ( !v7 )
    {
      nullsub_95(a1, 2);
      return 0;
    }
  }
  if ( *((_DWORD *)a1 + 85) == v7 )
  {
LABEL_147:
    sub_60880330(a1);
    v96 = *((_DWORD *)a1 + 87);
    v10 = 1;
    v97 = *(_DWORD **)(v96 + 12);
    v98 = v97[488];
    v99 = v97[489];
    v100 = v97[490];
    *((_DWORD *)a1 + 266) = v98;
    *((_DWORD *)a1 + 267) = v99;
    *((_DWORD *)a1 + 268) = v100;
    v101 = *(_DWORD **)(v96 + 12);
    v102 = v101[482];
    v103 = v101[483];
    v104 = v101[484];
    *((_DWORD *)a1 + 269) = v102;
    *((_DWORD *)a1 + 270) = v103;
    *((_DWORD *)a1 + 271) = v104;
    v105 = *(_DWORD **)(v96 + 12);
    v106 = v105[476];
    v107 = v105[477];
    v108 = v105[478];
    *((_DWORD *)a1 + 272) = v106;
    *((_DWORD *)a1 + 273) = v107;
    *((_DWORD *)a1 + 274) = v108;
    v109 = *(_DWORD **)(v96 + 12);
    *((_DWORD *)a1 + 275) = v109[491];
    *((_DWORD *)a1 + 276) = v109[492];
    *((_DWORD *)a1 + 277) = v109[493];
    v110 = *(_DWORD **)(v96 + 12);
    *((_DWORD *)a1 + 278) = v110[495];
    *((_DWORD *)a1 + 279) = v110[496];
    *((_DWORD *)a1 + 280) = v110[497];
    v111 = *(_DWORD **)(v96 + 12);
    v112 = v111[624];
    v113 = v111[625];
    v114 = v111[626];
    *((_DWORD *)a1 + 299) = v112;
    *((_DWORD *)a1 + 300) = v113;
    *((_DWORD *)a1 + 301) = v114;
    v115 = *(_DWORD **)(v96 + 12);
    v116 = v115[538];
    v117 = v115[539];
    v118 = v115[540];
    *((_DWORD *)a1 + 302) = v116;
    *((_DWORD *)a1 + 303) = v117;
    *((_DWORD *)a1 + 304) = v118;
    *((_DWORD *)a1 + 281) = *(_DWORD *)(FIELD_U32(v96, 12) + 2048);
    *((float *)a1 + 284) = (float)*(int *)(FIELD_U32(v96, 12) + 2232);
    *((_DWORD *)a1 + 287) = *(_DWORD *)(FIELD_U32(v96, 12) + 1976);
    *((_DWORD *)a1 + 290) = *(_DWORD *)(FIELD_U32(v96, 12) + 1992);
    *((_DWORD *)a1 + 293) = *(_DWORD *)(FIELD_U32(v96, 12) + 2404);
    v119 = *((_DWORD *)a1 + 87);
    *((_DWORD *)a1 + 296) = *(_DWORD *)(FIELD_U32(v119, 12) + 2408);
    *((_DWORD *)a1 + 305) = *(_DWORD *)(FIELD_U32(v119, 12) + 2068);
    return v10;
  }
  sub_6087F06C((int)a1);
  v8 = *((_DWORD *)a1 + 84);
  if ( v8 )
  {
    --*((_DWORD *)a1 + 368);
    sub_60882124(v8, 1);
    *((_DWORD *)a1 + 84) = 0;
  }
  v9 = *((_DWORD *)a1 + 318);
  if ( v9 )
  {
    sub_60897440(*((_DWORD *)a1 + 320), v9, 0);
    *((_DWORD *)a1 + 318) = 0;
  }
  v10 = 0;
  v11 = *(unsigned __int8 *)(*((_DWORD *)a1 + 34) + 1874);
  v12 = *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)a1 + 29) + 24) + 30);
  v126 = 0;
  v125 = 0;
  v124 = 0;
  v123 = 0;
  sub_6083D5B0(&v123);
  v121 = v7;
  v124 = 68;
  if ( v7 % 2 == 1 )
    ++v7;
  v13 = (v7 + 31) & 0xFFFFFFE0;
  if ( v11 != 2 )
    v13 = v7;
  v14 = v13;
  v15 = a2;
  v16 = 16 * v13 - 1;
  v17 = sub_608352A0(v15, (int)&v123);
  v122 = v12;
  v18 = (v17 + v16) & -v17;
  v19 = 10;
  if ( v12 )
    v19 = 15;
  if ( v11 )
    v19 = 5;
  v20 = v18 + v18 * v19;
  if ( *a1 )
  {
    v20 += 2 * v18;
    if ( !v11 )
    {
      v20 += 2 * v18;
      if ( v12 )
        v20 += 2 * v18;
    }
  }
  v21 = 3 * v18;
  v22 = v14;
  v23 = *(unsigned __int8 *)(*((_DWORD *)a1 + 34) + 1875);
  v24 = *((_DWORD *)a1 + 322);
  *((_DWORD *)a1 + 320) = v24;
  if ( v23 )
    v20 += v21;
  *((_DWORD *)a1 + 321) = v20;
  v25 = sub_6089725C(v24);
  *((_DWORD *)a1 + 318) = v25;
  if ( v25 )
  {
    v26 = 0;
    v27 = 0;
    *((_DWORD *)a1 + 319) = 0;
    v28 = *((_DWORD *)a1 + 320);
    v29 = *((_DWORD *)a1 + 321);
    v30 = (FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416);
    v31 = 0;
    if ( v30 <= v29 )
    {
      v27 = v25;
      *((_DWORD *)a1 + 319) = v30;
      v31 = v30;
    }
    *((_DWORD *)a1 + 40) = v27;
    v32 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v31;
    if ( v32 > v29 )
    {
      v32 = v31;
    }
    else
    {
      v26 = v25 + v31;
      *((_DWORD *)a1 + 319) = v32;
    }
    *((_DWORD *)a1 + 41) = v26;
    v33 = 0;
    v34 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v32;
    if ( v34 > v29 )
    {
      v34 = v32;
    }
    else
    {
      *((_DWORD *)a1 + 319) = v34;
      v33 = v25 + v32;
    }
    *((_DWORD *)a1 + 42) = v33;
    if ( v11 )
    {
      *((_DWORD *)a1 + 51) = v27;
      *((_DWORD *)a1 + 52) = v26;
      *((_DWORD *)a1 + 53) = v33;
      *((_DWORD *)a1 + 62) = v27;
      *((_DWORD *)a1 + 63) = v26;
    }
    else
    {
      v40 = 0;
      v41 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v34;
      if ( v41 > v29 )
      {
        v41 = v34;
        v42 = 0;
      }
      else
      {
        v42 = v25 + v34;
        *((_DWORD *)a1 + 319) = v41;
      }
      *((_DWORD *)a1 + 51) = v42;
      v43 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v41;
      if ( v43 > v29 )
      {
        v43 = v41;
      }
      else
      {
        v40 = v25 + v41;
        *((_DWORD *)a1 + 319) = v43;
      }
      *((_DWORD *)a1 + 52) = v40;
      v34 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v43;
      v44 = 0;
      if ( v34 > v29 )
      {
        v34 = v43;
      }
      else
      {
        v44 = v25 + v43;
        *((_DWORD *)a1 + 319) = v34;
      }
      *((_DWORD *)a1 + 53) = v44;
      if ( !v122 )
      {
LABEL_68:
        v49 = 0;
        v50 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v34;
        if ( v50 > v29 )
        {
          v50 = v34;
          v51 = 0;
        }
        else
        {
          v51 = v25 + v34;
          *((_DWORD *)a1 + 319) = v50;
        }
        *((_DWORD *)a1 + 43) = v51;
        v52 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v50;
        if ( v52 > v29 )
        {
          v52 = v50;
        }
        else
        {
          *((_DWORD *)a1 + 319) = v52;
          v49 = v25 + v50;
        }
        *((_DWORD *)a1 + 45) = v49;
        if ( v11 )
        {
          *((_DWORD *)a1 + 54) = v51;
          *((_DWORD *)a1 + 56) = v49;
          *((_DWORD *)a1 + 65) = v51;
        }
        else
        {
          v53 = 0;
          v54 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v52;
          if ( v54 > v29 )
          {
            v54 = v52;
            v55 = 0;
          }
          else
          {
            v55 = v25 + v52;
            *((_DWORD *)a1 + 319) = v54;
          }
          *((_DWORD *)a1 + 54) = v55;
          v52 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v54;
          if ( v52 > v29 )
          {
            v52 = v54;
          }
          else
          {
            v53 = v25 + v54;
            *((_DWORD *)a1 + 319) = v52;
          }
          *((_DWORD *)a1 + 56) = v53;
          if ( !v122 )
          {
LABEL_90:
            v58 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v52;
            v59 = 0;
            if ( v58 > v29 )
            {
              v58 = v52;
            }
            else
            {
              v59 = v25 + v52;
              *((_DWORD *)a1 + 319) = v58;
            }
            *((_DWORD *)a1 + 44) = v59;
            *((_DWORD *)a1 + 55) = v59;
            *((_DWORD *)a1 + 66) = v59;
            v60 = *a1;
            if ( *a1 )
            {
              v61 = 0;
              v62 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v58;
              if ( v62 > v29 )
              {
                v62 = v58;
                v63 = 0;
              }
              else
              {
                v63 = v25 + v58;
                *((_DWORD *)a1 + 319) = v62;
              }
              *((_DWORD *)a1 + 46) = v63;
              v64 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v62;
              if ( v64 > v29 )
              {
                v64 = v62;
              }
              else
              {
                *((_DWORD *)a1 + 319) = v64;
                v61 = v25 + v62;
              }
              *((_DWORD *)a1 + 47) = v61;
              if ( v11 )
              {
                *((_DWORD *)a1 + 68) = v63;
                *((_DWORD *)a1 + 57) = v63;
                *((_DWORD *)a1 + 58) = v61;
                v65 = 2;
              }
              else
              {
                v66 = 0;
                v67 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v64;
                if ( v67 > v29 )
                {
                  v67 = v64;
                  v68 = 0;
                }
                else
                {
                  v68 = v25 + v64;
                  *((_DWORD *)a1 + 319) = v67;
                }
                *((_DWORD *)a1 + 57) = v68;
                v69 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v67;
                if ( v69 > v29 )
                {
                  v69 = v67;
                }
                else
                {
                  v66 = v25 + v67;
                  *((_DWORD *)a1 + 319) = v69;
                }
                *((_DWORD *)a1 + 58) = v66;
                if ( !v122 )
                  goto LABEL_116;
                v61 = 0;
                v70 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v69;
                if ( v70 > v29 )
                {
                  v70 = v69;
                  v71 = 0;
                }
                else
                {
                  v71 = v25 + v69;
                  *((_DWORD *)a1 + 319) = v70;
                }
                *((_DWORD *)a1 + 68) = v71;
                v72 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v70;
                v65 = 2;
                if ( v72 <= v29 )
                {
                  *((_DWORD *)a1 + 319) = v72;
                  v61 = v25 + v70;
                }
              }
            }
            else
            {
              v61 = 0;
              v65 = 1;
              *((_DWORD *)a1 + 57) = 0;
              *((_DWORD *)a1 + 46) = 0;
              *((_DWORD *)a1 + 47) = 0;
            }
            *(_DWORD *)&a1[44 * v65 + 188] = v61;
LABEL_116:
            v73 = *((_DWORD *)a1 + 34);
            if ( FIELD_U8(v73, 1875) )
            {
              v74 = *((_DWORD *)a1 + 320);
              v75 = *((_DWORD *)a1 + 319);
              v76 = *((_DWORD *)a1 + 321);
              v77 = ((FIELD_U32(v74, 416) + v16) & -FIELD_U32(v74, 416)) + v75;
              v78 = 0;
              if ( v77 <= v76 )
              {
                v82 = *((_DWORD *)a1 + 318);
                *((_DWORD *)a1 + 319) = v77;
                v79 = v82 + v75;
              }
              else
              {
                v77 = *((_DWORD *)a1 + 319);
                v79 = 0;
              }
              *((_DWORD *)a1 + 48) = v79;
              v83 = ((FIELD_U32(v74, 416) + v16) & -FIELD_U32(v74, 416)) + v77;
              if ( v83 <= v76 )
              {
                v84 = *((_DWORD *)a1 + 318);
                *((_DWORD *)a1 + 319) = v83;
                v78 = v84 + v77;
              }
              else
              {
                v83 = v77;
              }
              *((_DWORD *)a1 + 49) = v78;
              v81 = v11;
              v80 = 0;
              v85 = ((FIELD_U32(v74, 416) + v16) & -FIELD_U32(v74, 416)) + v83;
              if ( v85 <= v76 )
              {
                v86 = *((_DWORD *)a1 + 318);
                *((_DWORD *)a1 + 319) = v85;
                v80 = v86 + v83;
              }
              *((_DWORD *)a1 + 50) = v80;
              *((_DWORD *)a1 + 59) = v79;
              *((_DWORD *)a1 + 60) = v78;
              *((_DWORD *)a1 + 61) = v80;
              *((_DWORD *)a1 + 70) = v79;
              *((_DWORD *)a1 + 71) = v78;
            }
            else
            {
              v80 = 0;
              v81 = v11;
              *((_DWORD *)a1 + 48) = 0;
              *((_DWORD *)a1 + 49) = 0;
              *((_DWORD *)a1 + 50) = 0;
              *((_DWORD *)a1 + 59) = 0;
              *((_DWORD *)a1 + 60) = 0;
              *((_DWORD *)a1 + 61) = 0;
              *((_DWORD *)a1 + 70) = 0;
              *((_DWORD *)a1 + 71) = 0;
            }
            *((_DWORD *)a1 + 72) = v80;
            v87 = 16 * v22;
            *((_DWORD *)a1 + 39) = &a1[44 * *((_DWORD *)a1 + 12) + 160];
            v88 = *(_DWORD *)(*((_DWORD *)a1 + 87) + 84);
            v89 = 0;
            if ( v88 )
              v88 = 280 * v22;
            v90 = 24 * v22;
            if ( !v81 )
            {
              v89 = 8;
              if ( !v60 )
                v89 = 6;
              if ( FIELD_U8(v73, 1875) )
                v89 += 6;
            }
            v91 = v88 + v90 + v89 * v87;
            v92 = (char *)sub_608820E8(v91, 32, 256);
            v93 = v92;
            if ( v92 )
            {
              *((_DWORD *)a1 + 367) += (v91 + 255) & 0xFFFFFF00;
              ++*((_DWORD *)a1 + 368);
              *((_DWORD *)a1 + 84) = v92;
              *((_DWORD *)a1 + 37) = v92;
              memset(v92, 0, 24 * v22);
              if ( v81 )
              {
                *((_DWORD *)a1 + 73) = *((_DWORD *)a1 + 40);
                *((_DWORD *)a1 + 74) = *((_DWORD *)a1 + 41);
                *((_DWORD *)a1 + 75) = *((_DWORD *)a1 + 42);
                *((_DWORD *)a1 + 76) = *((_DWORD *)a1 + 43);
                *((_DWORD *)a1 + 77) = *((_DWORD *)a1 + 44);
                *((_DWORD *)a1 + 78) = *((_DWORD *)a1 + 45);
                *((_DWORD *)a1 + 79) = *((_DWORD *)a1 + 46);
                *((_DWORD *)a1 + 80) = *((_DWORD *)a1 + 47);
                *((_DWORD *)a1 + 81) = *((_DWORD *)a1 + 48);
                *((_DWORD *)a1 + 82) = *((_DWORD *)a1 + 49);
                v94 = *((char **)a1 + 50);
              }
              else
              {
                *((_DWORD *)a1 + 73) = &v93[v90];
                *((_DWORD *)a1 + 74) = &v93[40 * v22];
                *((_DWORD *)a1 + 75) = &v93[56 * v22];
                *((_DWORD *)a1 + 76) = &v93[72 * v22];
                *((_DWORD *)a1 + 77) = &v93[88 * v22];
                *((_DWORD *)a1 + 78) = &v93[104 * v22];
                v90 = 120 * v22;
                if ( *a1 )
                {
                  *((_DWORD *)a1 + 79) = &v93[v90];
                  v90 = 152 * v22;
                  *((_DWORD *)a1 + 80) = &v93[136 * v22];
                }
                if ( !*(_BYTE *)(*((_DWORD *)a1 + 34) + 1875) )
                  goto LABEL_143;
                v95 = v90 + v87 + v87;
                *((_DWORD *)a1 + 81) = &v93[v90];
                *((_DWORD *)a1 + 82) = &v93[v90 + v87];
                v94 = &v93[v95];
                v90 = v95 + v87;
              }
              *((_DWORD *)a1 + 83) = v94;
LABEL_143:
              if ( *(_DWORD *)(*((_DWORD *)a1 + 87) + 84) )
              {
                *((_DWORD *)a1 + 38) = &v93[v90];
                memset(&v93[v90], 0, v88);
              }
              else
              {
                *((_DWORD *)a1 + 38) = 0;
              }
              *((_DWORD *)a1 + 85) = v121;
              *((_DWORD *)a1 + 86) = 0;
              *((_DWORD *)a1 + 10) = 0;
              goto LABEL_147;
            }
            v10 = 0;
            *((_DWORD *)a1 + 84) = 0;
            return v10;
          }
          v49 = 0;
          v56 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v52;
          if ( v56 > v29 )
          {
            v56 = v52;
            v57 = 0;
          }
          else
          {
            v57 = v25 + v52;
            *((_DWORD *)a1 + 319) = v56;
          }
          *((_DWORD *)a1 + 65) = v57;
          v52 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v56;
          if ( v52 <= v29 )
          {
            v49 = v25 + v56;
            *((_DWORD *)a1 + 319) = v52;
          }
          else
          {
            v52 = v56;
          }
        }
        *((_DWORD *)a1 + 67) = v49;
        goto LABEL_90;
      }
      v45 = 0;
      v46 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v34;
      if ( v46 > v29 )
      {
        v46 = v34;
        v47 = 0;
      }
      else
      {
        v47 = v25 + v34;
        *((_DWORD *)a1 + 319) = v46;
      }
      *((_DWORD *)a1 + 62) = v47;
      v48 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v46;
      if ( v48 > v29 )
      {
        v48 = v46;
      }
      else
      {
        v45 = v25 + v46;
        *((_DWORD *)a1 + 319) = v48;
      }
      *((_DWORD *)a1 + 63) = v45;
      v33 = 0;
      v34 = ((FIELD_U32(v28, 416) + v16) & -FIELD_U32(v28, 416)) + v48;
      if ( v34 <= v29 )
      {
        v33 = v25 + v48;
        *((_DWORD *)a1 + 319) = v34;
      }
      else
      {
        v34 = v48;
      }
    }
    *((_DWORD *)a1 + 64) = v33;
    goto LABEL_68;
  }
  return v10;
}
