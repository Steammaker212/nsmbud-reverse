/* sub_6047ACD8
 * address: 0x6047ACD8   size: 4448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047ACD8(
        int a1,
        int a2,
        unsigned __int16 *a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7,
        int a8,
        int a9,
        int *a10)
{
  int v11; // r7
  unsigned __int16 *v12; // r5
  int v13; // r4
  unsigned __int16 *v14; // r8
  int v15; // r4
  int v16; // r7
  unsigned int v17; // r11
  unsigned __int16 *v18; // r1
  int v19; // r7
  int v20; // r6
  unsigned __int16 *v21; // r0
  int v22; // r4
  unsigned __int16 *v23; // r1
  unsigned int v24; // r2
  unsigned int v25; // r2
  int v26; // r7
  unsigned int v27; // r2
  unsigned __int8 *v28; // r6
  unsigned int v29; // t1
  _WORD *v30; // r7
  int v31; // r1
  unsigned int v32; // r2
  unsigned int v34; // r1
  unsigned int v35; // r6
  int v36; // r5
  int v37; // t1
  int v38; // t1
  int v39; // t1
  int v40; // r6
  int v41; // r0
  _WORD *v42; // r0
  int v43; // r1
  _WORD *v44; // r7
  unsigned __int16 *v45; // r1
  int v46; // r0
  int v47; // r5
  size_t v48; // r4
  int v49; // r0
  _WORD *v50; // r1
  int v51; // r10
  int v52; // r1
  _WORD *v53; // r0
  int v54; // r1
  int v55; // r1
  _WORD *v56; // r0
  int v57; // r1
  int v58; // r1
  _WORD *v59; // r0
  int v60; // r1
  int v61; // r1
  _WORD *v62; // r0
  int v63; // r1
  int v64; // r0
  int v65; // r0
  unsigned int v66; // r0
  _WORD *v67; // r0
  int v68; // r1
  unsigned int v69; // r0
  unsigned int v70; // r1
  __int16 *v71; // r5
  int v72; // r10
  int v73; // r4
  unsigned int v74; // r10
  int v75; // r0
  int v76; // r0
  _WORD *v77; // r1
  __int16 v78; // t1
  unsigned int v79; // r0
  _WORD *v80; // r2
  _WORD *v81; // r1
  unsigned int v82; // r0
  int v83; // r12
  int v84; // r1
  int v85; // r4
  int v86; // r2
  _WORD *v87; // r1
  unsigned int v88; // r3
  unsigned int v89; // r0
  int v90; // r1
  int v91; // r4
  int v92; // r2
  _WORD *v93; // r1
  unsigned int v94; // r3
  unsigned int v95; // r0
  int v96; // r2
  int v97; // r1
  int v98; // r5
  unsigned int v99; // r0
  __int16 v100; // r1
  _BOOL4 v101; // r0
  _BOOL4 v102; // r0
  int v103; // r5
  int v104; // r4
  int v105; // r0
  unsigned int v106; // r0
  int v107; // r0
  _WORD *v108; // r1
  int v109; // r0
  _WORD *v110; // r1
  _WORD *v111; // r0
  int v112; // r1
  int v113; // r0
  _WORD *v114; // r1
  int v115; // r0
  _WORD *v116; // r1
  int v117; // r0
  _WORD *v118; // r1
  unsigned int v119; // r0
  _WORD *v120; // r0
  int v121; // r2
  unsigned __int16 *v122; // r0
  _WORD *v123; // r1
  unsigned int v124; // r0
  unsigned int v125; // r2
  unsigned int v126; // r0
  _WORD *v127; // r0
  int v128; // r2
  unsigned __int16 *v129; // r0
  _WORD *v130; // r1
  bool v131; // cf
  int v132; // r2
  char v134; // [sp+40h] [bp-2F0h]
  int v135; // [sp+44h] [bp-2ECh] BYREF
  _WORD v136[288]; // [sp+48h] [bp-2E8h] BYREF
  _DWORD v137[32]; // [sp+288h] [bp-A8h] BYREF
  _DWORD v138[10]; // [sp+308h] [bp-28h] BYREF

  if ( a7 )
  {
    v11 = 0;
    if ( a4 >= 2 )
    {
      v12 = a3;
      v11 = 0;
      do
      {
        v13 = *v12;
        if ( v13 == 15 )
        {
          v12 += 3;
        }
        else if ( v13 == 14 )
        {
          v12 = (unsigned __int16 *)((char *)v12 + v12[3] + 8);
        }
        else
        {
          ++v12;
          if ( v13 == 10 )
            ++v11;
        }
      }
      while ( v12 - a3 < a4 / 2 );
    }
    *a7 = v11 / 4 + 1;
  }
  v14 = a3;
  if ( a6 < 1 )
  {
LABEL_24:
    if ( a6 >= 0 )
      goto LABEL_25;
    goto LABEL_26;
  }
  v14 = a3;
  if ( a4 < 2 )
    goto LABEL_25;
  v15 = 0;
  v14 = a3;
  while ( 1 )
  {
    v16 = *v14;
    if ( v16 == 14 )
    {
      v14 = (unsigned __int16 *)((char *)v14 + v14[3] + 8);
      goto LABEL_23;
    }
    if ( v16 == 15 )
    {
      v14 += 3;
      goto LABEL_23;
    }
    if ( v16 == 10 && ++v15 >= 4 * a6 )
      break;
    ++v14;
LABEL_23:
    if ( v14 - a3 >= a4 / 2 )
      goto LABEL_24;
  }
  ++v14;
LABEL_25:
  if ( *a7 - 1 == a6 )
  {
LABEL_26:
    v17 = (unsigned int)a3 + ((a4 + ((unsigned int)a4 >> 31)) & 0xFFFFFFFE);
  }
  else
  {
    v18 = a3;
    if ( a4 >= 2 )
    {
      v19 = 0;
      a4 /= 2;
      v18 = a3;
      do
      {
        v20 = *v18;
        if ( v20 == 14 )
        {
          v18 = (unsigned __int16 *)((char *)v18 + v18[3] + 8);
        }
        else if ( v20 == 15 )
        {
          v18 += 3;
        }
        else
        {
          if ( v20 == 10 && ++v19 >= 4 * a6 + 4 )
          {
            ++v18;
            break;
          }
          ++v18;
        }
      }
      while ( v18 - a3 < a4 );
    }
    v21 = v18 - 1;
    do
    {
      if ( *v21 != 10 )
        break;
      --v21;
    }
    while ( v21 > a3 );
    v17 = (unsigned int)(v21 + 1);
  }
  v22 = a8;
  if ( a9 >= 1 && (a8 ^ 1) == 1 )
  {
    memset(v136, 255, 0x40u);
    if ( (unsigned int)v14 < v17 )
    {
      v23 = v14;
      do
      {
        while ( 2 )
        {
          v30 = v23;
          v31 = *v23;
          if ( v31 == 15 )
          {
            v23 = v30 + 3;
            if ( v30 )
              goto LABEL_68;
          }
          else
          {
            if ( v31 == 14 )
            {
              v23 = (_WORD *)((char *)v30 + (unsigned __int16)v30[3] + 8);
LABEL_68:
              v28 = (unsigned __int8 *)(v30 + 4);
              switch ( v30[1] )
              {
                case 0xB:
                  v24 = *v28;
                  if ( v24 >= 0x10 )
                    v24 = 0;
                  *(_DWORD *)&v136[2 * v24] = 1;
                  if ( (unsigned int)v23 < v17 )
                    continue;
                  goto LABEL_76;
                case 0xC:
                  v25 = *v28;
                  if ( v25 >= 0x10 )
                    v25 = 0;
                  *(_DWORD *)&v136[2 * v25] = 2;
                  if ( (unsigned int)v23 < v17 )
                    continue;
                  goto LABEL_76;
                case 0xD:
                case 0xE:
                case 0xF:
                  goto LABEL_69;
                case 0x12:
                  if ( (v30[2] & 0xFFFE) != 2 )
                    goto LABEL_75;
                  goto LABEL_69;
                case 0x13:
                  v26 = (unsigned __int16)v30[2];
                  if ( v26 == 2 )
                    goto LABEL_69;
                  if ( v26 != 3 )
                    goto LABEL_75;
                  v29 = *v28++;
                  v27 = v29;
                  if ( v29 >= 0x10 )
                    v27 = 0;
                  *(_DWORD *)&v136[2 * v27] = 0;
LABEL_69:
                  v32 = *v28;
                  if ( v32 >= 0x10 )
                    v32 = 0;
                  *(_DWORD *)&v136[2 * v32] = 0;
                  if ( (unsigned int)v23 >= v17 )
                    goto LABEL_76;
                  continue;
                case 0x16:
                  if ( (unsigned __int16)v30[2] >= 5u )
                    goto LABEL_75;
                  goto LABEL_69;
                case 0x17:
                  if ( v30[2] )
                    goto LABEL_75;
                  goto LABEL_69;
                default:
                  goto LABEL_75;
              }
            }
            v23 = v30;
          }
          break;
        }
        ++v23;
LABEL_75:
        ;
      }
      while ( (unsigned int)v23 < v17 );
    }
LABEL_76:
    v34 = 0;
    a4 = (int)v137;
    do
    {
      v35 = 0;
      if ( v34 < 0x10 )
        v35 = v34;
      v36 = *(_DWORD *)&v136[2 * v35];
      switch ( v36 )
      {
        case 2:
          v38 = *a10++;
          *(_DWORD *)&v136[2 * v35 + 256] = v38;
          break;
        case 1:
          v39 = *a10++;
          v137[v35] = v39;
          break;
        case 0:
          v37 = *a10++;
          v137[v35 + 16] = v37;
          break;
      }
      ++v34;
    }
    while ( a9 != v34 );
    v22 = a8;
  }
  v40 = 0;
  if ( (unsigned int)v14 < v17 )
  {
    v40 = 0;
    v135 = a1;
    v134 = 0;
LABEL_100:
    v44 = (_WORD *)(a1 + 2 * v40);
    v45 = v14;
    do
    {
      v46 = *v45;
      if ( v46 == 15 )
      {
        v14 = v45 + 3;
        if ( v45 )
          goto LABEL_109;
        LOWORD(v46) = *v14;
      }
      else
      {
        if ( v46 == 14 )
        {
          v14 = (unsigned __int16 *)((char *)v45 + v45[3] + 8);
LABEL_109:
          v42 = v45 + 4;
          switch ( v45[1] )
          {
            case 0u:
              v47 = v22;
              if ( !(v134 & 1 | (v45[2] != 2)) )
              {
                ++v40;
                *v44 = 5;
                v134 = 1;
              }
              goto LABEL_114;
            case 0xBu:
              if ( v22 == 1 )
              {
                v49 = 0;
                do
                {
                  v50 = &v136[v49];
                  v49 += 4;
                  *v50 = 37;
                  v50[1] = 37;
                  v50[2] = 37;
                  v50[3] = 37;
                }
                while ( v49 != 100 );
                v51 = 100;
                goto LABEL_304;
              }
              v69 = v45[2];
              if ( v69 > 4 )
                goto LABEL_306;
              v70 = *((unsigned __int8 *)v45 + 8);
              v71 = 0;
              if ( v70 >= 0x10 )
                v70 = 0;
              v72 = v137[v70];
              v73 = StaffCreditTable_init(dword_60B02A20[v69]);
              v74 = sub_60911638(FIELD_U32(v73, 4), v72);
              if ( FIELD_U32(v73, 8) > v74 )
                v71 = (__int16 *)sub_6091171C(FIELD_U32(v73, 4), v74);
              v75 = sub_609119F8(v73, v74);
              v51 = v75 / 2;
              if ( v75 >= 2 )
              {
                v22 = a8;
                v76 = 0;
                v77 = v136;
                do
                {
                  v78 = *v71++;
                  ++v76;
                  *v77++ = v78;
                }
                while ( v76 < v51 );
                goto LABEL_303;
              }
              v22 = a8;
LABEL_292:
              if ( v51 < 1 )
                goto LABEL_305;
              goto LABEL_304;
            case 0xCu:
              v51 = *((unsigned __int8 *)v45 + 9);
              if ( v22 == 1 )
              {
                if ( !*((_BYTE *)v45 + 9) )
                  goto LABEL_305;
                v52 = 0;
                if ( (v51 & 3) != 0 )
                {
                  a4 = (int)v136;
                  do
                  {
                    ++v52;
                    *(_WORD *)a4 = 37;
                    a4 += 2;
                  }
                  while ( (v51 & 3) != v52 );
                }
                if ( (unsigned int)(v51 - 1) >= 3 )
                {
                  v53 = &v136[v52 + 2];
                  v54 = v51 - v52;
                  do
                  {
                    *(v53 - 2) = 37;
                    *(v53 - 1) = 37;
                    *v53 = 37;
                    v53[1] = 37;
                    v53 += 4;
                    v54 -= 4;
                  }
                  while ( v54 );
                }
              }
              else
              {
                v79 = *(unsigned __int8 *)v42;
                if ( v79 >= 0x10 )
                  v79 = 0;
                if ( *((_BYTE *)v45 + 9) )
                {
                  v80 = v136;
                  v81 = **(_WORD ***)&v136[2 * v79 + 256];
                  v65 = 0;
                  do
                  {
                    a4 = (unsigned __int16)*v81;
                    if ( !*v81 )
                      goto LABEL_302;
                    ++v65;
                    *v80++ = a4;
                    ++v81;
                  }
                  while ( v65 < v51 );
                }
              }
              goto LABEL_303;
            case 0xDu:
              v51 = *((unsigned __int8 *)v45 + 9);
              if ( v22 != 1 )
              {
                v82 = *(unsigned __int8 *)v42;
                v83 = v22;
                if ( v82 >= 0x10 )
                  v82 = 0;
                v84 = v137[v82 + 16];
                v85 = v84 / 10;
                v136[v51 - 1] = v84 % 10 + 48;
                if ( v51 - 2 >= 0 )
                {
                  v86 = v51 - 1;
                  v87 = &v136[v51 - 2];
                  do
                  {
                    if ( v85 < 1 )
                    {
                      a4 = 32;
                    }
                    else
                    {
                      v88 = v85 % 0xAu;
                      v85 /= 0xAu;
                      a4 = v88 | 0x30;
                    }
                    --v86;
                    *v87-- = a4;
                  }
                  while ( v86 > 0 );
                }
                goto LABEL_207;
              }
              if ( !*((_BYTE *)v45 + 9) )
                goto LABEL_305;
              v55 = 0;
              if ( (v51 & 3) != 0 )
              {
                a4 = (int)v136;
                do
                {
                  ++v55;
                  *(_WORD *)a4 = 37;
                  a4 += 2;
                }
                while ( (v51 & 3) != v55 );
              }
              if ( (unsigned int)(v51 - 1) >= 3 )
              {
                v56 = &v136[v55 + 2];
                v57 = v51 - v55;
                do
                {
                  *(v56 - 2) = 37;
                  *(v56 - 1) = 37;
                  *v56 = 37;
                  v56[1] = 37;
                  v56 += 4;
                  v57 -= 4;
                }
                while ( v57 );
              }
              goto LABEL_303;
            case 0xEu:
              v51 = *((unsigned __int8 *)v45 + 9);
              if ( v22 == 1 )
              {
                if ( !*((_BYTE *)v45 + 9) )
                  goto LABEL_305;
                v58 = 0;
                if ( (v51 & 3) != 0 )
                {
                  a4 = (int)v136;
                  do
                  {
                    ++v58;
                    *(_WORD *)a4 = 37;
                    a4 += 2;
                  }
                  while ( (v51 & 3) != v58 );
                }
                if ( (unsigned int)(v51 - 1) >= 3 )
                {
                  v59 = &v136[v58 + 2];
                  v60 = v51 - v58;
                  do
                  {
                    *(v59 - 2) = 37;
                    *(v59 - 1) = 37;
                    *v59 = 37;
                    v59[1] = 37;
                    v59 += 4;
                    v60 -= 4;
                  }
                  while ( v60 );
                }
                goto LABEL_303;
              }
              v89 = *(unsigned __int8 *)v42;
              v83 = v22;
              if ( v89 >= 0x10 )
                v89 = 0;
              v90 = v137[v89 + 16];
              v91 = v90 / 10;
              v136[v51 - 1] = v90 % 10 + 48;
              if ( v51 - 2 >= 0 )
              {
                v92 = v51 - 1;
                v93 = &v136[v51 - 2];
                do
                {
                  if ( v91 < 1 )
                  {
                    a4 = 48;
                  }
                  else
                  {
                    v94 = v91 % 0xAu;
                    v91 /= 0xAu;
                    a4 = v94 | 0x30;
                  }
                  --v92;
                  *v93-- = a4;
                }
                while ( v92 > 0 );
              }
LABEL_207:
              v22 = v83;
              if ( v51 >= 1 )
                goto LABEL_304;
              goto LABEL_305;
            case 0xFu:
              v51 = *((unsigned __int8 *)v45 + 9);
              if ( v22 == 1 )
              {
                if ( !*((_BYTE *)v45 + 9) )
                  goto LABEL_305;
                v61 = 0;
                if ( (v51 & 3) != 0 )
                {
                  a4 = (int)v136;
                  do
                  {
                    ++v61;
                    *(_WORD *)a4 = 37;
                    a4 += 2;
                  }
                  while ( (v51 & 3) != v61 );
                }
                if ( (unsigned int)(v51 - 1) >= 3 )
                {
                  v62 = &v136[v61 + 2];
                  v63 = v51 - v61;
                  do
                  {
                    *(v62 - 2) = 37;
                    *(v62 - 1) = 37;
                    *v62 = 37;
                    v62[1] = 37;
                    v62 += 4;
                    v63 -= 4;
                  }
                  while ( v63 );
                }
              }
              else
              {
                v95 = *(unsigned __int8 *)v42;
                if ( v95 >= 0x10 )
                  v95 = 0;
                v96 = v137[v95 + 16];
                v97 = *((unsigned __int8 *)v45 + 9);
LABEL_270:
                v65 = sub_6047BE64(v136, v97, v96);
LABEL_302:
                v51 = v65;
              }
LABEL_303:
              if ( v51 >= 1 )
              {
LABEL_304:
                qmemcpy(v44, v136, 2 * v51);
                v40 += v51;
              }
LABEL_305:
              a1 = v135;
LABEL_306:
              if ( (unsigned int)v14 >= v17 )
                return v40;
              goto LABEL_100;
            case 0x10u:
              if ( !FIELD_U8(dword_60CC6D78, 20) )
                v42 = v45 + 5;
              goto LABEL_158;
            case 0x11u:
LABEL_158:
              LOWORD(v42) = *v42;
LABEL_159:
              v51 = 2;
              v136[0] = 4;
              v136[1] = (_WORD)v42;
              goto LABEL_304;
            case 0x12u:
              switch ( v45[2] )
              {
                case 0u:
                  v64 = FIELD_U32(dword_60CC6D78, 412);
                  goto LABEL_269;
                case 1u:
                  v103 = v22;
                  v104 = FIELD_U32(dword_60CC6D78, 424);
                  if ( v104 == -1 )
                    goto LABEL_265;
                  if ( sub_6040E2A4((unsigned __int8)v104) )
                    goto LABEL_236;
                  v105 = v104 - 12;
                  if ( (unsigned int)(v104 - 12) > 0x2D )
                    v105 = 0;
                  v42 = (_WORD *)(dword_60B02968[v105] + 64);
                  if ( !FIELD_U8(dword_60CC6D8C, 17) )
                    goto LABEL_97;
                  if ( v104 != 12 )
                    goto LABEL_95;
                  LOWORD(v42) = 59;
                  goto LABEL_97;
                case 2u:
                  if ( v22 == 1 )
                  {
                    v136[0] = 37;
                    v51 = 1;
                    goto LABEL_304;
                  }
                  v119 = *(unsigned __int8 *)v42;
                  if ( v119 >= 0x10 )
                    v119 = 0;
                  v64 = v137[v119 + 16];
LABEL_269:
                  v96 = v64 + 1;
                  v97 = 1;
                  goto LABEL_270;
                case 3u:
                  if ( v22 == 1 )
                    goto LABEL_173;
                  v106 = *(unsigned __int8 *)v42;
                  v103 = v22;
                  if ( v106 >= 0x10 )
                    v106 = 0;
                  v104 = v137[v106 + 16];
                  if ( v104 == -1 )
                  {
LABEL_265:
                    v51 = 2;
                    v22 = v103;
                    v136[0] = 4;
                    v136[1] = 72;
                    goto LABEL_304;
                  }
                  if ( !sub_6040E2A4((unsigned __int8)v104) )
                  {
                    v41 = v104 - 12;
                    if ( (unsigned int)(v104 - 12) > 0x2D )
                      v41 = 0;
                    v42 = (_WORD *)(dword_60B02968[v41] + 64);
                    if ( FIELD_U8(dword_60CC6D8C, 17) )
                    {
                      if ( v104 == 12 )
                      {
                        LOWORD(v42) = 59;
                      }
                      else
                      {
LABEL_95:
                        if ( v104 == 13 )
                          LOWORD(v42) = 60;
                      }
                    }
LABEL_97:
                    v22 = v103;
                    goto LABEL_159;
                  }
LABEL_236:
                  v51 = sub_6047BE64(v136, 2, v104 + 1);
                  v22 = v103;
                  if ( v51 >= 1 )
                    goto LABEL_304;
                  break;
                default:
                  goto LABEL_306;
              }
              goto LABEL_305;
            case 0x13u:
              switch ( v45[2] )
              {
                case 0u:
                  if ( v22 == 1 )
                    goto LABEL_243;
                  v43 = FIELD_U32(dword_60CC6D78, 412);
                  if ( v43 )
                    goto LABEL_281;
                  if ( !sub_6040E404(FIELD_U8(dword_60CC6D78, 424)) )
                  {
                    v43 = FIELD_U32(dword_60CC6D78, 412);
                    goto LABEL_281;
                  }
                  v65 = WorldNameTable_init(v136, 150);
                  goto LABEL_302;
                case 1u:
                  if ( v22 == 1 )
                  {
                    v107 = 0;
                    do
                    {
                      v108 = &v136[v107];
                      v107 += 4;
                      v51 = 60;
                      *v108 = 37;
                      v108[1] = 37;
                      v108[2] = 37;
                      v108[3] = 37;
                    }
                    while ( v107 != 60 );
                    goto LABEL_304;
                  }
                  v120 = (_WORD *)CourseNameTable_init(
                                    FIELD_U8(dword_60CC6D78, 412),
                                    FIELD_U8(dword_60CC6D78, 424),
                                    v138);
                  v51 = v138[0];
                  if ( v138[0] >= 1 )
                  {
                    a4 = 0;
                    if ( (v138[0] & 1) != 0 )
                    {
                      a4 = 1;
                      v136[0] = *v120;
                    }
                    if ( v138[0] != 1 )
                    {
                      v121 = v138[0] - a4;
                      v122 = &v120[a4 + 1];
                      v123 = &v136[a4 + 1];
                      do
                      {
                        v121 -= 2;
                        *(v123 - 1) = *(v122 - 1);
                        a4 = *v122;
                        v122 += 2;
                        *v123 = a4;
                        v123 += 2;
                      }
                      while ( v121 );
                    }
                  }
                  goto LABEL_292;
                case 2u:
                  if ( v22 == 1 )
                  {
LABEL_243:
                    v136[0] = 37;
                    v136[1] = 37;
                    v136[2] = 37;
                    v136[3] = 37;
                    v136[4] = 37;
                    v136[5] = 37;
                    v136[6] = 37;
                    v136[7] = 37;
                    v136[8] = 37;
                    v136[9] = 37;
                    v136[10] = 37;
                    v136[11] = 37;
                    v136[12] = 37;
                    v136[13] = 37;
                    v136[14] = 37;
                    v136[15] = 37;
                    v136[16] = 37;
                    v136[17] = 37;
                    v136[18] = 37;
                    v136[19] = 37;
                    v136[20] = 37;
                    v136[21] = 37;
                    v136[22] = 37;
                    v136[23] = 37;
                    v136[24] = 37;
                    v136[25] = 37;
                    v136[26] = 37;
                    v136[27] = 37;
                    v136[28] = 37;
                    v136[29] = 37;
                    v51 = 30;
                    goto LABEL_304;
                  }
                  v124 = *(unsigned __int8 *)v42;
                  if ( v124 >= 0x10 )
                    v124 = 0;
                  v43 = v137[v124 + 16];
LABEL_281:
                  v65 = WorldNameTable_init(v136, v43);
                  goto LABEL_302;
                case 3u:
                  if ( v22 == 1 )
                  {
                    v109 = 0;
                    do
                    {
                      v110 = &v136[v109];
                      v109 += 4;
                      v51 = 60;
                      *v110 = 37;
                      v110[1] = 37;
                      v110[2] = 37;
                      v110[3] = 37;
                    }
                    while ( v109 != 60 );
                    goto LABEL_304;
                  }
                  v125 = *(unsigned __int8 *)v42;
                  v126 = *((unsigned __int8 *)v45 + 9);
                  if ( v126 >= 0x10 )
                    v126 = 0;
                  if ( v125 >= 0x10 )
                    v125 = 0;
                  v127 = (_WORD *)CourseNameTable_init(LOBYTE(v137[v125 + 16]), LOBYTE(v137[v126 + 16]), v138);
                  v51 = v138[0];
                  if ( v138[0] >= 1 )
                  {
                    a4 = 0;
                    if ( (v138[0] & 1) != 0 )
                    {
                      a4 = 1;
                      v136[0] = *v127;
                    }
                    if ( v138[0] != 1 )
                    {
                      v128 = v138[0] - a4;
                      v129 = &v127[a4 + 1];
                      v130 = &v136[a4 + 1];
                      do
                      {
                        v128 -= 2;
                        *(v130 - 1) = *(v129 - 1);
                        a4 = *v129;
                        v129 += 2;
                        *v130 = a4;
                        v130 += 2;
                      }
                      while ( v128 );
                    }
                  }
                  break;
                default:
                  goto LABEL_306;
              }
              goto LABEL_292;
            case 0x16u:
              v66 = *((unsigned __int8 *)v45 + 8);
              switch ( v45[2] )
              {
                case 0u:
                  if ( v22 != 1 )
                  {
                    v131 = v66 >= 0x10;
                    v132 = 0;
                    goto LABEL_299;
                  }
                  v67 = &v136[1];
                  v51 = 255;
                  v68 = 255;
                  do
                  {
                    *(v67 - 1) = 37;
                    *v67 = 37;
                    v67[1] = 37;
                    v67 += 3;
                    v68 -= 3;
                  }
                  while ( v68 );
                  goto LABEL_304;
                case 1u:
                  if ( v22 != 1 )
                  {
                    v131 = v66 >= 0x10;
                    v132 = 1;
                    goto LABEL_299;
                  }
                  v111 = &v136[1];
                  v51 = 255;
                  v112 = 255;
                  do
                  {
                    *(v111 - 1) = 37;
                    *v111 = 37;
                    v111[1] = 37;
                    v111 += 3;
                    v112 -= 3;
                  }
                  while ( v112 );
                  goto LABEL_304;
                case 2u:
                  if ( v22 != 1 )
                  {
                    v131 = v66 >= 0x10;
                    v132 = 2;
                    goto LABEL_299;
                  }
                  v113 = 0;
                  do
                  {
                    v114 = &v136[v113];
                    v113 += 4;
                    v51 = 128;
                    *v114 = 37;
                    v114[1] = 37;
                    v114[2] = 37;
                    v114[3] = 37;
                  }
                  while ( v113 != 128 );
                  goto LABEL_304;
                case 3u:
                  if ( v22 != 1 )
                  {
                    v131 = v66 >= 0x10;
                    v132 = 3;
                    goto LABEL_299;
                  }
                  v115 = 0;
                  do
                  {
                    v116 = &v136[v115];
                    v115 += 4;
                    v51 = 128;
                    *v116 = 37;
                    v116[1] = 37;
                    v116[2] = 37;
                    v116[3] = 37;
                  }
                  while ( v115 != 128 );
                  goto LABEL_304;
                case 4u:
                  if ( v22 == 1 )
                  {
                    v117 = 0;
                    do
                    {
                      v118 = &v136[v117];
                      v117 += 4;
                      v51 = 128;
                      *v118 = 37;
                      v118[1] = 37;
                      v118[2] = 37;
                      v118[3] = 37;
                    }
                    while ( v117 != 128 );
                    goto LABEL_304;
                  }
                  v131 = v66 >= 0x10;
                  v132 = 4;
LABEL_299:
                  if ( v131 )
                    v66 = 0;
                  v65 = sub_6047D75C(v136, v137[v66 + 16], v132, a4);
                  break;
                default:
                  goto LABEL_306;
              }
              goto LABEL_302;
            case 0x17u:
              if ( v22 == 1 )
              {
LABEL_173:
                v136[0] = 37;
                v136[1] = 37;
                v51 = 2;
              }
              else
              {
                LOWORD(v98) = 0;
                if ( !v45[2] )
                {
                  v99 = *(unsigned __int8 *)v42;
                  if ( v99 >= 0x10 )
                    v99 = 0;
                  v98 = v137[v99 + 16];
                }
                if ( sub_6040E204((unsigned __int8)v98) )
                {
                  v100 = v98 + 96;
                }
                else
                {
                  v101 = sub_6040E218((unsigned __int8)v98);
                  v100 = 105;
                  if ( !v101 )
                  {
                    v102 = sub_6040E22C(v98);
                    v100 = 96;
                    if ( v102 )
                      v100 = 106;
                  }
                }
                v22 = a8;
                v51 = 2;
                v136[0] = 4;
                v136[1] = v100;
              }
              goto LABEL_304;
            default:
              v47 = v22;
LABEL_114:
              v48 = v45[3] + 8;
              qmemcpy((void *)(a1 + 2 * v40), v45, v48);
              v40 += v48 >> 1;
              v22 = v47;
              if ( (unsigned int)v14 >= v17 )
                return v40;
              goto LABEL_100;
          }
        }
        v14 = v45;
      }
      v45 = v14 + 1;
      *v44++ = v46;
      ++v40;
    }
    while ( (unsigned int)(v14 + 1) < v17 );
  }
  return v40;
}
