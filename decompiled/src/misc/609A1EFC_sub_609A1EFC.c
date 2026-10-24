/* sub_609A1EFC
 * address: 0x609A1EFC   size: 10328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609A1EFC(int a1, int a2, int a3)
{
  _DWORD *v6; // r8
  int v7; // r0
  _DWORD *v8; // r9
  _DWORD *v9; // r0
  unsigned int v10; // r5
  int v11; // r10
  size_t v12; // r6
  int v13; // r0
  _BYTE *v14; // r1
  unsigned int v15; // r2
  int v16; // r3
  size_t v17; // r4
  int v18; // r1
  _DWORD *v19; // r7
  int v20; // r9
  void *v21; // r8
  void *v22; // r1
  int v23; // r1
  int v24; // r0
  _DWORD *v25; // r1
  unsigned __int8 v26; // r0
  int k; // r4
  int v28; // r7
  int v29; // r5
  int *v30; // r8
  int v31; // r0
  unsigned int v32; // r1
  int v33; // r4
  int *v34; // r0
  int v35; // r1
  int v36; // r1
  unsigned int v37; // r2
  bool v38; // cc
  int v39; // r0
  unsigned __int8 v40; // r4
  unsigned int v41; // r0
  bool v42; // zf
  int v43; // r5
  _DWORD *v44; // r6
  int *v45; // r5
  _DWORD *v46; // r10
  int *v47; // r4
  signed int v48; // r9
  signed int v49; // r0
  int *v50; // r5
  int *v51; // r9
  signed int v52; // r4
  signed int v53; // r0
  char v54; // r4
  unsigned __int8 v55; // r0
  unsigned int v56; // r0
  unsigned int v57; // r0
  int v58; // r1
  int ii; // r4
  int jj; // r7
  int v61; // r5
  int v62; // r2
  int v63; // r0
  _DWORD *v64; // r10
  int v65; // r1
  int v66; // r3
  int v67; // r9
  int *v68; // r0
  int v69; // r10
  int v70; // r0
  _BYTE *v71; // r1
  unsigned int v72; // r2
  int v73; // r4
  int v74; // t1
  int *v75; // r5
  int *v76; // r0
  int kk; // r1
  int *v78; // r0
  int v79; // r0
  _BYTE *v80; // r1
  unsigned int v81; // r2
  int v82; // r4
  int v83; // t1
  int *v84; // r5
  int *v85; // r0
  int mm; // r1
  void *v87; // r10
  _DWORD *v88; // r9
  unsigned int v89; // r1
  int v90; // r2
  unsigned int v91; // r1
  int v92; // r2
  char v93; // r0
  unsigned int v94; // r4
  unsigned __int8 *v95; // r5
  int v96; // r6
  unsigned __int8 v97; // r0
  unsigned int v98; // r1
  int v99; // r2
  char v100; // r6
  int v101; // r2
  int v102; // r0
  int v103; // r10
  int v104; // r0
  int v105; // r0
  _BYTE *v106; // r1
  unsigned int v107; // r2
  int v108; // r4
  int v109; // t1
  int *v110; // r7
  int *v111; // r0
  int i; // r1
  unsigned int v113; // r0
  int v114; // r1
  int v115; // r0
  _BYTE *v116; // r1
  unsigned int v117; // r2
  int v118; // r4
  int v119; // t1
  int *v120; // r7
  int *v121; // r0
  int j; // r1
  unsigned int v123; // r0
  int v124; // r1
  unsigned int v125; // r1
  int v126; // r2
  unsigned __int8 *v127; // r1
  size_t v128; // r4
  void *v129; // r5
  void *v130; // r1
  int v131; // r0
  _DWORD *v132; // r7
  int *v133; // r0
  int (**v134)(); // r1
  char v135; // r0
  int *v136; // r0
  int *v137; // r5
  int *v138; // r8
  signed int v139; // r4
  int v140; // r2
  int v141; // r0
  int v142; // r1
  int v143; // r1
  char v144; // r0
  int v145; // r0
  _BYTE *v146; // r0
  unsigned int v147; // r1
  int v148; // r2
  _BYTE *v149; // r0
  signed int v150; // r0
  _DWORD *v151; // r4
  int v152; // r1
  int (**v153)(); // r0
  _DWORD *v154; // r9
  int m; // r8
  int v156; // r5
  int v157; // r0
  int v158; // r7
  int v159; // r0
  size_t v161; // r0
  int n; // r8
  int v163; // r5
  int v164; // r0
  int v165; // r7
  int v166; // r0
  size_t v168; // r0
  _BYTE *v169; // r1
  unsigned int v170; // r2
  int *v171; // r8
  int *v172; // r6
  signed int v173; // r5
  int v174; // r4
  bool v175; // zf
  int v176; // r2
  int v177; // r0
  sead_ListNode **v178; // r4
  sead_ListNode *v179; // r6
  sead_ListNode *next; // r4
  sead_ListNode *v181; // r9
  sead_ListNode *v182; // r8
  sead_ListNode *previous; // r0
  sead_ListNode *v184; // r0
  _DWORD **v185; // r6
  sead_ListNode **v186; // r2
  int v187; // r8
  sead_ListNode *v188; // r9
  sead_ListNode *v189; // r4
  _DWORD *v190; // r5
  sead_ListNode *v191; // r4
  _DWORD *v192; // r1
  int v193; // r0
  _DWORD *v194; // r2
  int v195; // r1
  unsigned int v196; // r2
  int v197; // r3
  size_t v198; // r2
  int v199; // r7
  size_t v200; // r3
  _BYTE *v201; // r7
  size_t v202; // r4
  int v203; // r1
  int v204; // r5
  void *v205; // r6
  int v206; // r1
  int v207; // r0
  _DWORD *v208; // r1
  int v209; // r1
  signed int v211; // r0
  int v212; // r1
  int v213; // r0
  _DWORD *v214; // r1
  _DWORD *v215; // r0
  int v216; // r1
  _DWORD *v217; // r2
  _DWORD *v218; // r0
  int v219; // r1
  _DWORD *v220; // r2
  _DWORD *v222; // r0
  int v223; // r1
  _DWORD *v224; // r2
  _DWORD *v225; // r0
  int v226; // r1
  _DWORD *v227; // r2
  sead_ListNode **v228; // [sp+Ch] [bp-944h]
  int v229; // [sp+14h] [bp-93Ch]
  char v230; // [sp+34h] [bp-91Ch]
  char v231; // [sp+50h] [bp-900h]
  int v232; // [sp+64h] [bp-8ECh]
  int v233; // [sp+6Ch] [bp-8E4h]
  _DWORD *v234; // [sp+70h] [bp-8E0h]
  _DWORD *v235; // [sp+70h] [bp-8E0h]
  _DWORD *v236; // [sp+70h] [bp-8E0h]
  int (**v237)(); // [sp+74h] [bp-8DCh]
  char v238; // [sp+84h] [bp-8CCh]
  void *heap; // [sp+88h] [bp-8C8h]
  int *v240; // [sp+8Ch] [bp-8C4h]
  int *v241; // [sp+90h] [bp-8C0h]
  _DWORD *v242; // [sp+90h] [bp-8C0h]
  _DWORD *v243; // [sp+90h] [bp-8C0h]
  int v244; // [sp+94h] [bp-8BCh]
  int v245; // [sp+98h] [bp-8B8h]
  int v246; // [sp+9Ch] [bp-8B4h]
  unsigned int v247; // [sp+A0h] [bp-8B0h]
  int v248; // [sp+A4h] [bp-8ACh]
  int v249; // [sp+A8h] [bp-8A8h]
  int (**v250)(); // [sp+ACh] [bp-8A4h] BYREF
  int *v251; // [sp+B0h] [bp-8A0h]
  int v252; // [sp+B4h] [bp-89Ch]
  int v253; // [sp+B8h] [bp-898h] BYREF
  int (**v254)(); // [sp+4B8h] [bp-498h] BYREF
  int *v255; // [sp+4BCh] [bp-494h]
  int v256; // [sp+4C0h] [bp-490h]
  int v257; // [sp+4C4h] [bp-48Ch] BYREF
  int (**v258)(); // [sp+8C4h] [bp-8Ch] BYREF
  int *v259; // [sp+8C8h] [bp-88h]
  int v260; // [sp+8CCh] [bp-84h]
  int v261; // [sp+8D0h] [bp-80h] BYREF
  int v262; // [sp+910h] [bp-40h] BYREF
  int v263; // [sp+914h] [bp-3Ch]
  _DWORD **v264; // [sp+918h] [bp-38h]
  _DWORD *v265; // [sp+91Ch] [bp-34h]
  void *v266; // [sp+920h] [bp-30h]
  unsigned __int8 v267; // [sp+92Ah] [bp-26h] BYREF
  char v268; // [sp+92Bh] [bp-25h] BYREF

  v6 = 0;
  v267 = 0;
  v7 = sub_608DE334(0x80u, a3, -4);
  v8 = (_DWORD *)v7;
  v266 = 0;
  v265 = 0;
  v264 = 0;
  v263 = 0;
  v262 = 0;
  heap = (void *)a3;
  if ( v7 )
    v7 = 32;
  v246 = v7;
  v9 = (_DWORD *)sub_608DE334(0xC2A0u, a3, -4);
  v249 = a2;
  if ( v9 )
  {
    v265 = v9;
    *v9 = v9 + 518;
    v9[518] = v9 + 1036;
    v9[1036] = v9 + 1554;
    v9[1554] = v9 + 2072;
    v9[2072] = v9 + 2590;
    v9[2590] = v9 + 3108;
    v9[3108] = v9 + 3626;
    v9[3626] = v9 + 4144;
    v9[4144] = v9 + 4662;
    v9[4662] = v9 + 5180;
    v9[5180] = v9 + 5698;
    v9[5698] = v9 + 6216;
    v9[6216] = v9 + 6734;
    v9[6734] = v9 + 7252;
    v9[7252] = v9 + 7770;
    v9[7770] = v9 + 8288;
    v9[8288] = v9 + 8806;
    v9[8806] = v9 + 9324;
    v9[9324] = v9 + 9842;
    v9[9842] = v9 + 10360;
    v9[10360] = v9 + 10878;
    v9[10878] = v9 + 11396;
    v9[11396] = v9 + 11914;
    v9[11914] = 0;
    v266 = v9;
    sub_608DEB0C(&v262, 24, (int)(v9 + 12432));
  }
  v259 = &v261;
  v258 = &BufferedSafeStringBase_char_vtable_probably;
  v260 = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v258);
  *(_BYTE *)v259 = 0;
  v244 = a1;
  v258 = &off_60BD4BF0;
  v10 = FIELD_U32(a1, 16);
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v258);
  v240 = v259;
  if ( !sub_6090552C(a2, (int)&v267, 1) )
    goto LABEL_567;
  v6 = 0;
  v11 = 0;
  v12 = 0;
  v247 = v10;
  v237 = 0;
  v248 = 0;
  v231 = 0;
  v230 = 0;
  v238 = 0;
  v232 = 0;
  v245 = 0;
  v233 = 0;
  v229 = 0;
  while ( 2 )
  {
    switch ( v11 )
    {
      case 0:
        if ( v267 == 60 )
        {
          v11 = 1;
          if ( !v12 )
          {
            v12 = 0;
            goto LABEL_550;
          }
          if ( !v245 )
          {
            v245 = 0;
            goto LABEL_550;
          }
          v13 = FIELD_U32(v244, 16);
          do
          {
            v14 = (_BYTE *)(v13 + v12);
            v15 = (unsigned __int8)(*(_BYTE *)(v13 + v12 - 1) - 9);
            if ( v15 > 0x17 )
              goto LABEL_16;
            LOWORD(v16) = 19;
            BYTE2(v16) = 0x80;
            if ( (((v16 & 0xFFFFFFu) >> v15) & 1) == 0 )
              goto LABEL_16;
            --v12;
          }
          while ( v12 );
          v14 = *(_BYTE **)(v244 + 16);
LABEL_16:
          *v14 = 0;
          sub_609A485C(v244, v10, FIELD_U32(v244, 20), 0);
          sub_609A4BE0(v244, v10, FIELD_U32(v244, 20), 0);
          v17 = -1;
          do
            v18 = FIELD_U32(v244, 16) + v17++;
          while ( FIELD_U8(v18, 1) );
          v12 = 0;
          if ( v17 )
          {
            v234 = v6;
            v19 = v8;
            v20 = operator_new_8DE25C(0x8Cu, heap, 4);
            sub_609A59D0(v20);
            v10 = v247;
            v21 = (void *)operator_new_8DE2C8(v17 + 1, (int)heap, 4);
            qmemcpy(v21, *(const void **)(v244 + 16), v17);
            *((_BYTE *)v21 + v17) = 0;
            v22 = v21;
            v11 = 1;
            v6 = v234;
            sub_609A5C1C(v20, v22, v17, 1);
            if ( v20 )
              v20 += 4;
            v23 = v245 - 1 - v246;
            if ( v245 - 1 < v246 )
              v23 = v245 - 1;
            v24 = v19[v23];
            v25 = (_DWORD *)v20;
            v8 = v19;
            a2 = v249;
            sub_608DEFB0(v24 + 4, v25);
          }
          goto LABEL_550;
        }
        if ( (v238 & 1) == 0
          && (v91 = (unsigned __int8)(v267 - 9), v91 <= 0x17)
          && (LOWORD(v92) = 19, BYTE2(v92) = 0x80, (((v92 & 0xFFFFFFu) >> v91) & 1) != 0) )
        {
          v93 = 0;
        }
        else
        {
          *(_BYTE *)(v10 + v12++) = v267;
          v93 = 1;
        }
        v238 = v93;
        v11 = 0;
        if ( v12 + 1 <= FIELD_U32(v244, 20) )
          goto LABEL_550;
        goto LABEL_567;
      case 1:
        v26 = v267;
        if ( v267 == 47 )
        {
          v100 = 1;
          *(_BYTE *)v259 = 0;
          v101 = v245;
          v102 = v245;
          if ( v245 > v246 )
            v102 = v245 - v246;
          v103 = v102 - 1;
          v104 = 0;
LABEL_259:
          v248 = v104;
          if ( v101 > 0 )
          {
            while ( 1 )
            {
              if ( !sub_6090552C(a2, (int)&v267, 1) )
                goto LABEL_567;
              if ( v267 == 62 )
              {
                if ( v260 <= v248 )
                  ((void (__fastcall *)(int (***)()))v258[3])(&v258);
                else
                  *((_BYTE *)v259 + v248) = 0;
                ((void (__fastcall *)(int (***)()))v258[3])(&v258);
                v105 = 0;
                while ( *((_BYTE *)v259 + v105) )
                {
                  if ( !*((_BYTE *)v259 + v105 + 1) )
                  {
                    if ( ++v105 < 1 )
                      goto LABEL_280;
                    goto LABEL_275;
                  }
                  if ( !*((_BYTE *)v259 + v105 + 2) )
                  {
                    v105 += 2;
                    break;
                  }
                  v38 = v105 + 2 <= 0x7FFFF;
                  v105 += 3;
                  if ( !v38 )
                    goto LABEL_280;
                }
                if ( v105 < 1 )
                  goto LABEL_280;
LABEL_275:
                v106 = (char *)v259 - 1;
                do
                {
                  v107 = (unsigned __int8)v106[v105];
                  if ( v107 >= 0x21 && v107 != 127 )
                    break;
                  v106[v105] = 0;
                  v38 = v105-- <= 1;
                }
                while ( !v38 );
LABEL_280:
                v108 = v8[v103];
                ((void (__fastcall *)(int (***)()))v258[3])(&v258);
                ((void (__fastcall *)(int (***)()))v258[3])(&v258);
                v109 = FIELD_U32(v108, 20);
                v108 += 20;
                v110 = v259;
                (*(void (__fastcall **)(int))(v109 + 12))(v108);
                v111 = *(int **)(v108 + 4);
                if ( v110 == v111 )
                  goto LABEL_345;
                for ( i = 1; *((unsigned __int8 *)v259 + i - 1) == *((unsigned __int8 *)v111 + i - 1); i += 2 )
                {
                  if ( !*((_BYTE *)v259 + i - 1) )
                    goto LABEL_345;
                  if ( i >= 524289 || *((unsigned __int8 *)v259 + i) != *((unsigned __int8 *)v111 + i) )
                    break;
                  if ( !*((_BYTE *)v259 + i) )
                    goto LABEL_345;
                }
              }
              a2 = v249;
              if ( (v100 & 1) != 0 )
              {
                v113 = (unsigned __int8)(v267 - 9);
                if ( v113 <= 0x17 )
                {
                  LOWORD(v114) = 19;
                  v100 = 1;
                  BYTE2(v114) = 0x80;
                  if ( (((v114 & 0xFFFFFFu) >> v113) & 1) != 0 )
                    continue;
                }
              }
              goto LABEL_325;
            }
          }
          while ( 1 )
          {
            if ( !sub_6090552C(a2, (int)&v267, 1) )
              goto LABEL_567;
            if ( v267 == 62 )
              break;
LABEL_322:
            a2 = v249;
            if ( (v100 & 1) != 0 )
            {
              v123 = (unsigned __int8)(v267 - 9);
              if ( v123 <= 0x17 )
              {
                LOWORD(v124) = 19;
                v100 = 1;
                BYTE2(v124) = 0x80;
                if ( (((v124 & 0xFFFFFFu) >> v123) & 1) != 0 )
                  continue;
              }
            }
LABEL_325:
            v100 = 0;
            *((_BYTE *)v240 + v248) = v267;
            v101 = v245;
            v104 = v248 + 1;
            if ( (unsigned int)(v248 + 1) > 0x40 )
              goto LABEL_567;
            goto LABEL_259;
          }
          if ( v260 <= v248 )
            ((void (__fastcall *)(int (***)()))v258[3])(&v258);
          else
            *((_BYTE *)v259 + v248) = 0;
          ((void (__fastcall *)(int (***)()))v258[3])(&v258);
          v115 = 0;
          while ( *((_BYTE *)v259 + v115) )
          {
            if ( !*((_BYTE *)v259 + v115 + 1) )
            {
              if ( ++v115 < 1 )
                goto LABEL_313;
              goto LABEL_308;
            }
            if ( !*((_BYTE *)v259 + v115 + 2) )
            {
              v115 += 2;
              break;
            }
            v38 = v115 + 2 <= 0x7FFFF;
            v115 += 3;
            if ( !v38 )
              goto LABEL_313;
          }
          if ( v115 < 1 )
            goto LABEL_313;
LABEL_308:
          v116 = (char *)v259 - 1;
          do
          {
            v117 = (unsigned __int8)v116[v115];
            if ( v117 >= 0x21 && v117 != 127 )
              break;
            v116[v115] = 0;
            v38 = v115-- <= 1;
          }
          while ( !v38 );
LABEL_313:
          v118 = *v8;
          ((void (__fastcall *)(int (***)()))v258[3])(&v258);
          ((void (__fastcall *)(int (***)()))v258[3])(&v258);
          v119 = FIELD_U32(v118, 20);
          v118 += 20;
          v120 = v259;
          (*(void (__fastcall **)(int))(v119 + 12))(v118);
          v121 = *(int **)(v118 + 4);
          if ( v120 != v121 )
          {
            for ( j = 1; *((unsigned __int8 *)v259 + j - 1) == *((unsigned __int8 *)v121 + j - 1); j += 2 )
            {
              if ( !*((_BYTE *)v259 + j - 1) )
                goto LABEL_345;
              if ( j >= 524289 || *((unsigned __int8 *)v259 + j) != *((unsigned __int8 *)v121 + j) )
                break;
              if ( !*((_BYTE *)v259 + j) )
                goto LABEL_345;
            }
            goto LABEL_322;
          }
LABEL_345:
          v131 = v245;
          a2 = v249;
          if ( v245 > 0 )
            v131 = v245 - 1;
          if ( !v131 )
          {
            if ( v8 )
              operator_delete_8DE3FC(v8);
            if ( !v264 )
              return v6;
            if ( v262 >= 1 )
            {
              v222 = *v264;
              *v222 = v265;
              v265 = v222;
              if ( v262 >= 2 )
              {
                v223 = 1;
                do
                {
                  v224 = v264[v223++];
                  *v224 = v222;
                  v265 = v224;
                  v222 = v224;
                }
                while ( v223 < v262 );
              }
            }
            goto LABEL_559;
          }
          v10 = v247;
          v245 = v131;
          v12 = 0;
          v11 = 0;
          v238 = 0;
LABEL_550:
          if ( !sub_6090552C(a2, (int)&v267, 1) )
          {
            if ( !v6 )
            {
              v6 = 0;
              if ( v8 )
                goto LABEL_568;
              goto LABEL_569;
            }
            if ( v8 )
              operator_delete_8DE3FC(v8);
            if ( !v264 )
              return v6;
            if ( v262 >= 1 )
            {
              v215 = *v264;
              *v215 = v265;
              v265 = v215;
              if ( v262 >= 2 )
              {
                v216 = 1;
                do
                {
                  v217 = v264[v216++];
                  *v217 = v215;
                  v265 = v217;
                  v215 = v217;
                }
                while ( v216 < v262 );
              }
            }
LABEL_559:
            v262 = 0;
            if ( v266 )
              operator_delete_8DE3FC(v266);
            v263 = 0;
            v264 = 0;
            v265 = 0;
            v266 = 0;
            return v6;
          }
          continue;
        }
        if ( v267 != 33 )
        {
          v125 = (unsigned __int8)(v267 - 9);
          if ( v125 > 0x17 || (LOWORD(v126) = 19, v11 = 1, BYTE2(v126) = 0x80, (((v126 & 0xFFFFFFu) >> v125) & 1) == 0) )
          {
            v127 = (unsigned __int8 *)v240;
            v11 = 10;
LABEL_530:
            *v127 = v26;
            v248 = 1;
          }
          goto LABEL_550;
        }
        for ( k = 0; ; k += 2 )
        {
          if ( !asc_60AEA571[k] )
            goto LABEL_32;
          if ( k > 0x7FFFF )
          {
            v144 = 1;
LABEL_422:
            v11 = 3;
            v231 = v144;
            goto LABEL_550;
          }
          if ( !asc_60AEA571[k + 1] )
            break;
        }
        ++k;
LABEL_32:
        v11 = 3;
        v231 = 1;
        if ( k < 1 )
        {
          a2 = v249;
          goto LABEL_550;
        }
        v28 = 0;
        while ( 1 )
        {
          v29 = (unsigned __int8)asc_60AEA571[v28];
          if ( sub_60905340(v249) != v29 )
            break;
          if ( ++v28 >= k )
            goto LABEL_549;
        }
LABEL_567:
        if ( v8 )
LABEL_568:
          operator_delete_8DE3FC(v8);
LABEL_569:
        if ( v264 )
        {
          if ( v262 >= 1 )
          {
            v218 = *v264;
            *v218 = v265;
            v265 = v218;
            if ( v262 >= 2 )
            {
              v219 = 1;
              do
              {
                v220 = v264[v219++];
                *v220 = v218;
                v265 = v220;
                v218 = v220;
              }
              while ( v219 < v262 );
            }
          }
          v262 = 0;
          if ( v266 )
            operator_delete_8DE3FC(v266);
          v266 = 0;
          v265 = 0;
          v264 = 0;
          v263 = 0;
        }
        sub_609A523C(v6);
        return 0;
      case 3:
        v11 = 3;
        if ( v267 == 45 )
          v11 = 4;
        goto LABEL_550;
      case 4:
        v11 = 3;
        if ( v267 != 45 )
          goto LABEL_550;
        if ( !sub_6090552C(a2, (int)&v267, 1) || v267 != 62 )
          goto LABEL_567;
        v11 = 6;
        if ( (v231 & 1) != 0 )
        {
          v11 = 0;
          v12 = 0;
        }
        v238 &= v231 ^ 1;
        goto LABEL_550;
      case 5:
        v235 = v6;
        v255 = &v257;
        v254 = &BufferedSafeStringBase_char_vtable_probably;
        v256 = 1024;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v254);
        *(_BYTE *)v255 = 0;
        v251 = &v253;
        v250 = &BufferedSafeStringBase_char_vtable_probably;
        v254 = &off_60BFA9DC;
        v252 = 1024;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v250);
        *(_BYTE *)v251 = 0;
        v250 = &off_60BFA9DC;
        ((void (__fastcall *)(int (***)()))v254[3])(&v254);
        v241 = v255;
        ((void (__fastcall *)(int (***)()))v250[3])(&v250);
        v30 = v251;
LABEL_47:
        while ( 1 )
        {
          v31 = v267;
          v32 = (unsigned __int8)(v267 - 9);
          if ( v32 > 0x17 || ((0x800013u >> v32) & 1) == 0 )
            break;
          if ( !sub_6090552C(a2, (int)&v267, 1) )
          {
            v31 = v267;
            break;
          }
        }
        v33 = 0;
        switch ( v31 )
        {
          case '=':
            goto LABEL_58;
          case '/':
            v174 = 0;
            v268 = 0;
            do
            {
              if ( !sub_6090552C(a2, (int)&v268, 1) )
                goto LABEL_562;
              --v174;
            }
            while ( v268 != 62 );
            v175 = v245 == 0;
            if ( v245 )
              v175 = v174 == 0;
            if ( v175 )
              goto LABEL_562;
            v176 = v245;
            v11 = 0;
            v177 = v245 - 1 - v246;
            if ( v245 - 1 < v246 )
              v177 = v245 - 1;
            if ( v245 > 0 )
              v176 = v245 - 1;
            v245 = v176;
            v238 = 0;
            break;
          case '>':
            if ( !v245 )
              goto LABEL_562;
            v11 = 6;
            v177 = v245 - 1 - v246;
            if ( v245 - 1 < v246 )
              v177 = v245 - 1;
            v237 = 0;
            break;
          default:
            v33 = 0;
            do
            {
              *((_BYTE *)v241 + v33) = v31;
              if ( v33 > 1022 )
                goto LABEL_562;
              if ( !sub_6090552C(a2, (int)&v267, 1) )
                goto LABEL_76;
              LOBYTE(v31) = v267;
              ++v33;
            }
            while ( v267 != 61 );
LABEL_58:
            if ( v256 <= v33 )
            {
              ((void (__fastcall *)(int (***)()))v254[3])(&v254);
            }
            else
            {
              v34 = v255;
              if ( v33 > 0 )
                v34 = (int *)((char *)v255 + v33);
              *(_BYTE *)v34 = 0;
            }
LABEL_70:
            ((void (__fastcall *)(int (***)()))v254[3])(&v254);
            v35 = 0;
            while ( 1 )
            {
              if ( !*((_BYTE *)v255 + v35) )
                goto LABEL_66;
              if ( !*((_BYTE *)v255 + v35 + 1) )
                break;
              if ( !*((_BYTE *)v255 + v35 + 2) )
              {
                v35 += 2;
LABEL_66:
                if ( v35 )
                {
LABEL_67:
                  v36 = v35 - 1;
                  v37 = *((unsigned __int8 *)v255 + v36);
                  if ( v37 < 0x21 || v37 == 127 )
                  {
                    *((_BYTE *)v255 + v36) = 0;
                    goto LABEL_70;
                  }
                }
LABEL_75:
                if ( v33 < 1 )
                  goto LABEL_562;
                do
                {
LABEL_76:
                  v39 = sub_6090552C(a2, (int)&v267, 1);
                  v40 = v267;
                  if ( !v39 )
                  {
                    v42 = v267 == 34;
                    if ( v267 != 34 )
                      v42 = v267 == 39;
                    if ( v42 )
                      goto LABEL_85;
                    goto LABEL_562;
                  }
                  v41 = v267 - 9;
                  if ( v41 > 0x1E )
                    goto LABEL_562;
                }
                while ( ((1 << v41) & 0x800013) != 0 );
                if ( ((1 << v41) & 0x42000000) == 0 )
                  goto LABEL_562;
LABEL_85:
                v43 = 0;
                while ( sub_6090552C(a2, (int)&v267, 1) )
                {
                  if ( v267 == v40 )
                  {
                    if ( v252 <= v43 )
                      ((void (__fastcall *)(int (***)()))v250[3])(&v250);
                    else
                      *((_BYTE *)v251 + v43) = 0;
                    sub_609A4BE0(v244, v30, v252, 0);
                    sub_609A485C(v244, v30, v252, 0);
                    break;
                  }
                  *((_BYTE *)v30 + v43) = v267;
                  v38 = v43++ <= 1022;
                  if ( !v38 )
                    goto LABEL_562;
                }
                if ( v262 >= v263 )
                  goto LABEL_562;
                v44 = v265;
                if ( v265 )
                  v265 = (_DWORD *)*v265;
                else
                  v44 = 0;
                memset(v44 + 3, 0, 2060);
                *v44 = &BufferedSafeStringBase_char_vtable_probably;
                v44[1] = v44 + 3;
                v44[2] = 1024;
                sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v44);
                *(_BYTE *)v44[1] = 0;
                *v44 = &off_60BFA9DC;
                v44[260] = v44 + 262;
                v44[259] = &BufferedSafeStringBase_char_vtable_probably;
                v44[261] = 1024;
                sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(v44 + 259));
                *(_BYTE *)v44[260] = 0;
                v44[259] = &off_60BFA9DC;
                if ( v262 < v263 )
                  v264[v262++] = v44;
                v45 = (int *)v44[1];
                v46 = v8;
                ((void (__fastcall *)(int (***)()))v254[3])(&v254);
                v47 = v255;
                if ( v45 != v255 )
                {
                  ((void (__fastcall *)(int (***)()))v254[3])(&v254);
                  v48 = 0;
                  while ( *((_BYTE *)v255 + v48) )
                  {
                    if ( !*((_BYTE *)v255 + v48 + 1) )
                    {
                      ++v48;
                      break;
                    }
                    if ( !*((_BYTE *)v255 + v48 + 2) )
                    {
                      v48 += 2;
                      break;
                    }
                    v38 = v48 + 2 <= 0x7FFFF;
                    v48 += 3;
                    if ( !v38 )
                    {
                      v48 = 0;
                      break;
                    }
                  }
                  v49 = v44[2];
                  if ( v48 >= v49 )
                    v48 = v49 - 1;
                  qmemcpy(v45, v47, v48);
                  *((_BYTE *)v45 + v48) = 0;
                }
                v50 = (int *)v44[260];
                ((void (__fastcall *)(int (***)()))v250[3])(&v250);
                v51 = v251;
                if ( v50 != v251 )
                {
                  ((void (__fastcall *)(int (***)()))v250[3])(&v250);
                  v52 = 0;
                  while ( *((_BYTE *)v251 + v52) )
                  {
                    if ( !*((_BYTE *)v251 + v52 + 1) )
                    {
                      ++v52;
                      break;
                    }
                    if ( !*((_BYTE *)v251 + v52 + 2) )
                    {
                      v52 += 2;
                      break;
                    }
                    v38 = v52 + 2 <= 0x7FFFF;
                    v52 += 3;
                    if ( !v38 )
                    {
                      v52 = 0;
                      break;
                    }
                  }
                  v53 = v44[261];
                  if ( v52 >= v53 )
                    v52 = v53 - 1;
                  qmemcpy(v50, v51, v52);
                  *((_BYTE *)v50 + v52) = 0;
                }
                a2 = v249;
                v8 = v46;
                if ( !sub_6090552C(v249, (int)&v267, 1) )
                {
LABEL_562:
                  v6 = v235;
                  if ( v8 )
                    goto LABEL_568;
                  goto LABEL_569;
                }
                goto LABEL_47;
              }
              v38 = v35 + 2 <= 0x7FFFF;
              v35 += 3;
              if ( !v38 )
                goto LABEL_75;
            }
            if ( ++v35 )
              goto LABEL_67;
            goto LABEL_75;
        }
        v178 = (sead_ListNode **)&v8[v177];
        if ( !v178 )
          goto LABEL_562;
        if ( v262 )
        {
          v243 = v8;
          sub_609A5D84(*v178, v262, heap);
          v228 = v178;
          v179 = *v178;
          next = (*v178)[14].next;
          if ( next != &v179[14] )
          {
            do
            {
              v181 = FIELD_U32(next, 0x4);
              sead__ListNode__erase(next);
              v182 = next - 3;
              --FIELD_U32(v179 + (15) * 8, 0x0);
              next[-2].next = (sead_ListNode *)&off_60BFA9C4;
              previous = next[-1].previous;
              if ( previous )
                operator_delete_8DE3FC(previous);
              FIELD_U32(v182, 0x0) = (sead_ListNode *)&off_60BFA9C4;
              v184 = next[-3].next;
              if ( v184 )
                operator_delete_8DE3FC(v184);
              next = v181;
              FIELD_U32(v182, 0x0) = FIELD_U32(v179 + (15) * 8, 0x4);
              FIELD_U32(v179 + (15) * 8, 0x4) = v182;
            }
            while ( v181 != &v179[14] );
          }
          if ( v262 )
          {
            v185 = v264;
            v186 = v228;
            v187 = 4 * v262;
            do
            {
              v188 = *v186;
              if ( (int)(*v186)[15].previous < (int)(*v186)[16].next )
              {
                v189 = FIELD_U32(v188 + (15) * 8, 0x4);
                v190 = *v185;
                if ( v189 )
                  FIELD_U32(v188 + (15) * 8, 0x4) = FIELD_U32(v189, 0x0);
                else
                  v189 = 0;
                sub_6097114C(v189, (int)heap, v190, 4);
                sub_6097114C(&FIELD_U32(v189 + (1) * 8, 0x4), (int)heap, v190 + 259, 4);
                FIELD_U32(v189 + (3) * 8, 0x0) = 0;
                v191 = v189 + 3;
                FIELD_U32(v191, 0x4) = 0;
                sead__ListNode__insertFront(v188 + 14, v191);
                ++FIELD_U32(v188 + (15) * 8, 0x0);
                a2 = v249;
                v186 = v228;
              }
              v187 -= 4;
              ++v185;
            }
            while ( v187 );
            if ( v262 >= 1 )
            {
              v192 = v265;
              v193 = 0;
              do
              {
                v194 = v264[v193++];
                *v194 = v192;
                v265 = v194;
                v192 = v194;
              }
              while ( v193 < v262 );
            }
          }
          v8 = v243;
          v262 = 0;
        }
        v6 = v235;
        v10 = v247;
        v12 = 0;
        goto LABEL_550;
      case 6:
        v54 = 1;
        while ( 2 )
        {
          v55 = v267;
          if ( v267 != 60 )
            goto LABEL_135;
          if ( !sub_6090552C(a2, (int)&v267, 1) )
            goto LABEL_567;
          if ( v267 != 33 )
          {
            if ( v267 == 47 )
            {
              *(_BYTE *)(FIELD_U32(v244, 16) + v12) = 0;
              sub_609A485C(v244, v10, FIELD_U32(v244, 20), v237);
              sub_609A4BE0(v244, v10, FIELD_U32(v244, 20), v237);
              if ( v245 < 1 )
              {
                v143 = v229;
                v141 = v245;
              }
              else
              {
                v141 = v245 - 1;
                v142 = v245 - 1;
                if ( v245 > v246 )
                  v142 = v141 - v246;
                v143 = v8[v142];
              }
              v229 = v143;
              if ( FIELD_U32(v143, 108) != 2 )
              {
                v209 = 0;
                while ( *(_BYTE *)(FIELD_U32(v244, 16) + v209++) )
                  ;
                v12 = v209 - 1;
              }
              v11 = 9;
              if ( v141 < v246 )
                v8[v141++] = v229;
              v245 = v141;
              goto LABEL_550;
            }
            if ( v12 )
            {
              v146 = *(_BYTE **)(v244 + 16);
              while ( 1 )
              {
                v147 = (unsigned __int8)(v146[v12 - 1] - 9);
                if ( v147 > 0x17 )
                  break;
                LOWORD(v148) = 19;
                BYTE2(v148) = 0x80;
                if ( (((v148 & 0xFFFFFFu) >> v147) & 1) == 0 )
                  break;
                if ( !--v12 )
                {
                  *v146 = 0;
                  v12 = 0;
                  v149 = *(_BYTE **)(v244 + 16);
LABEL_514:
                  v195 = 0;
                  goto LABEL_515;
                }
              }
              v146[v12] = 0;
              v195 = 0;
              v149 = *(_BYTE **)(v244 + 16);
              while ( 1 )
              {
                v196 = (unsigned __int8)(v149[v195] - 9);
                if ( v196 > 0x17 )
                  break;
                LOWORD(v197) = 19;
                BYTE2(v197) = 0x80;
                if ( (((v197 & 0xFFFFFFu) >> v196) & 1) == 0 )
                  break;
                if ( ++v195 >= v12 )
                  goto LABEL_514;
              }
LABEL_515:
              v198 = v12 - v195;
              if ( v12 != v195 )
              {
                v199 = 0;
                if ( (v198 & 1) != 0 )
                {
                  *v149 = v149[v195];
                  v199 = 1;
                }
                if ( v12 - 1 != v195 )
                {
                  v200 = v12 - v199 - v195;
                  v201 = &v149[v199 + 1];
                  do
                  {
                    v200 -= 2;
                    *(v201 - 1) = v201[v195 - 1];
                    *v201 = v201[v195];
                    v201 += 2;
                  }
                  while ( v200 );
                }
              }
              v149[v198] = 0;
              sub_609A485C(v244, v10, FIELD_U32(v244, 20), 0);
              sub_609A4BE0(v244, v10, FIELD_U32(v244, 20), 0);
              v202 = -1;
              do
                v203 = FIELD_U32(v244, 16) + v202++;
              while ( FIELD_U8(v203, 1) );
              a2 = v249;
              if ( v202 )
              {
                v204 = operator_new_8DE25C(0x8Cu, heap, 4);
                sub_609A59D0(v204);
                a2 = v249;
                v205 = (void *)operator_new_8DE2C8(v202 + 1, (int)heap, 4);
                qmemcpy(v205, *(const void **)(v244 + 16), v202);
                *((_BYTE *)v205 + v202) = 0;
                sub_609A5C1C(v204, v205, v202, 1);
                if ( v204 )
                  v204 += 4;
                v206 = v245 - 1 - v246;
                if ( v245 - 1 < v246 )
                  v206 = v245 - 1;
                v207 = v8[v206];
                v208 = (_DWORD *)v204;
                v10 = v247;
                sub_608DEFB0(v207 + 4, v208);
              }
            }
            v26 = v267;
            v127 = (unsigned __int8 *)v240;
            v11 = 10;
            v12 = 0;
            goto LABEL_530;
          }
          if ( !sub_6090552C(a2, (int)&v267, 1) )
            goto LABEL_567;
          switch ( v267 )
          {
            case '-':
              if ( sub_60905340(a2) != 45 )
                goto LABEL_567;
              v144 = 0;
              goto LABEL_422;
            case '[':
              v242 = v8;
              v154 = v6;
              for ( m = 0; aCdata[m]; m += 2 )
              {
                if ( m > 0x7FFFF )
                  goto LABEL_433;
                if ( !aCdata[m + 1] )
                {
                  ++m;
                  break;
                }
              }
              if ( m >= 1 )
              {
                v156 = 0;
                do
                {
                  v157 = a2;
                  v158 = (unsigned __int8)aCdata[v156];
                  if ( sub_60905340(v157) != v158 )
                    goto LABEL_582;
                  a2 = v249;
                }
                while ( ++v156 < m );
              }
LABEL_433:
              if ( (v54 & 1) != 0 )
                v12 = 0;
              *(_BYTE *)(FIELD_U32(v244, 16) + v12) = 0;
              v10 = v247;
              sub_609A485C(v244, v247, FIELD_U32(v244, 20), v237);
              sub_609A4BE0(v244, v247, FIELD_U32(v244, 20), v237);
              v159 = 0;
              v6 = v154;
              while ( *(_BYTE *)(FIELD_U32(v244, 16) + v159++) )
                ;
              v161 = v159 - 1;
              v11 = 7;
              if ( v12 < v161 )
                v12 = v161;
              break;
            case 'B':
              v242 = v8;
              v154 = v6;
              for ( n = 0; aAse64[n]; n += 2 )
              {
                if ( n > 0x7FFFF )
                  goto LABEL_450;
                if ( !aAse64[n + 1] )
                {
                  ++n;
                  break;
                }
              }
              if ( n >= 1 )
              {
                v163 = 0;
                while ( 1 )
                {
                  v164 = a2;
                  v165 = (unsigned __int8)aAse64[v163];
                  if ( sub_60905340(v164) != v165 )
                    break;
                  a2 = v249;
                  if ( ++v163 >= n )
                    goto LABEL_450;
                }
LABEL_582:
                v6 = v154;
                goto LABEL_583;
              }
LABEL_450:
              if ( (v54 & 1) != 0 )
                v12 = 0;
              *(_BYTE *)(FIELD_U32(v244, 16) + v12) = 0;
              v10 = v247;
              sub_609A485C(v244, v247, FIELD_U32(v244, 20), v237);
              sub_609A4BE0(v244, v247, FIELD_U32(v244, 20), v237);
              v166 = 0;
              v6 = v154;
              while ( *(_BYTE *)(FIELD_U32(v244, 16) + v166++) )
                ;
              v168 = v166 - 1;
              v11 = 8;
              if ( v12 < v168 )
                v12 = v168;
              v230 = 0;
              break;
            default:
              *(_BYTE *)(v10 + v12) = 60;
              v56 = v10 + v12;
              v12 += 2;
              FIELD_U8(v56, 1) = 33;
              v55 = v267;
LABEL_135:
              *(_BYTE *)(v10 + v12) = v55;
              LOBYTE(v10) = 0;
              if ( (v54 & 1) != 0 )
              {
                v57 = (unsigned __int8)(v267 - 9);
                if ( v57 <= 0x17 )
                {
                  LOWORD(v58) = 19;
                  BYTE2(v58) = 0x80;
                  v10 = ((v58 & 0xFFFFFFu) >> v57) & 1;
                }
              }
              if ( v12 + 2 > FIELD_U32(v244, 20) )
                goto LABEL_567;
              ++v12;
              v54 = v10;
              v10 = v247;
              if ( !sub_6090552C(a2, (int)&v267, 1) )
                goto LABEL_567;
              continue;
          }
          break;
        }
        v8 = v242;
        v237 = (int (**)())v12;
        goto LABEL_550;
      case 7:
        if ( v267 == 93 )
        {
          if ( !sub_6090552C(a2, (int)&v267, 1) )
            goto LABEL_567;
          if ( v267 == 93 )
          {
            if ( !sub_6090552C(a2, (int)&v267, 1) )
              goto LABEL_567;
            v11 = 6;
            if ( v267 == 62 )
            {
              v237 = (int (**)())v12;
              goto LABEL_550;
            }
            *(_BYTE *)(v10 + v12++) = 93;
          }
          v135 = 93;
          goto LABEL_388;
        }
        if ( v267 != 60 )
          goto LABEL_389;
        if ( !sub_6090552C(a2, (int)&v267, 1) )
          goto LABEL_567;
        if ( v267 != 33 )
        {
          v135 = 60;
LABEL_388:
          *(_BYTE *)(v10 + v12++) = v135;
LABEL_389:
          v11 = 7;
          *(_BYTE *)(v10 + v12++) = v267;
          goto LABEL_550;
        }
        for ( ii = 0; aBase64[ii]; ii += 2 )
        {
          if ( ii > 0x7FFFF )
          {
            v11 = 8;
            v230 = 1;
            goto LABEL_550;
          }
          if ( !aBase64[ii + 1] )
          {
            ++ii;
            break;
          }
        }
        v11 = 8;
        v230 = 1;
        if ( ii < 1 )
        {
          a2 = v249;
          goto LABEL_550;
        }
        for ( jj = 0; jj < ii; ++jj )
        {
          v61 = (unsigned __int8)aBase64[jj];
          if ( sub_60905340(v249) != v61 )
            goto LABEL_567;
        }
        goto LABEL_549;
      case 8:
        if ( v245 < 1 )
        {
          v64 = (_DWORD *)v244;
          v62 = v246;
          v66 = v233;
          v63 = v245;
        }
        else
        {
          v62 = v246;
          v63 = v245 - 1;
          v64 = (_DWORD *)v244;
          v65 = v245 - 1;
          if ( v245 > v246 )
            v65 -= v246;
          v66 = v8[v65];
        }
        v94 = 0;
        FIELD_U32(v66, 108) = 2;
        v233 = v66;
        if ( v63 < v62 )
          v8[v63++] = v66;
        v245 = v63;
        v95 = (unsigned __int8 *)v64[2];
        v96 = v64[3];
        while ( 1 )
        {
          v97 = v267;
          if ( v267 == 93 )
          {
            if ( !sub_6090552C(a2, (int)&v267, 1) )
              goto LABEL_567;
            v97 = v267;
            if ( v267 == 62 )
              break;
          }
          v98 = (unsigned __int8)(v97 - 9);
          if ( v98 > 0x17 || (LOWORD(v99) = 19, BYTE2(v99) = 0x80, (((v99 & 0xFFFFFFu) >> v98) & 1) == 0) )
            v95[v94++] = v97;
          if ( !sub_6090552C(a2, (int)&v267, 1) )
          {
            v10 = v247;
            v11 = 8;
            v12 = 0;
            goto LABEL_550;
          }
        }
        v254 = 0;
        if ( sead__Base64__decode(v96, v64[5], v95, v94, (unsigned int *)&v254) != 1 )
          goto LABEL_567;
        v134 = 0;
        if ( v254 )
        {
          v10 = v247;
          do
          {
            *((_BYTE *)v134 + v247) = *((_BYTE *)v134 + v96);
            v134 = (int (**)())((char *)v134 + 1);
          }
          while ( v134 < v254 );
        }
        else
        {
          v10 = v247;
        }
        v11 = 6;
        v237 = v134;
        v12 = (size_t)v134;
        if ( (v230 & 1) != 0 )
          v11 = 7;
        goto LABEL_550;
      case 9:
        v242 = v8;
        v67 = v245 - 1;
        if ( v245 > v246 )
          v67 -= v246;
        if ( v245 > 0 )
        {
          while ( 1 )
          {
            if ( v267 == 62 )
            {
              if ( v260 <= v248 )
              {
                ((void (__fastcall *)(int (***)()))v258[3])(&v258);
              }
              else
              {
                v68 = v259;
                if ( v248 > 0 )
                  v68 = (int *)((char *)v259 + v248);
                *(_BYTE *)v68 = 0;
              }
              v69 = v244;
              ((void (__fastcall *)(int (***)()))v258[3])(&v258);
              v70 = 0;
              while ( *((_BYTE *)v259 + v70) )
              {
                if ( !*((_BYTE *)v259 + v70 + 1) )
                {
                  if ( ++v70 < 1 )
                    goto LABEL_184;
                  goto LABEL_179;
                }
                if ( !*((_BYTE *)v259 + v70 + 2) )
                {
                  v70 += 2;
                  break;
                }
                v38 = v70 + 2 <= 0x7FFFF;
                v70 += 3;
                if ( !v38 )
                  goto LABEL_184;
              }
              if ( v70 < 1 )
                goto LABEL_184;
LABEL_179:
              v71 = (char *)v259 - 1;
              do
              {
                v72 = (unsigned __int8)v71[v70];
                if ( v72 >= 0x21 && v72 != 127 )
                  break;
                v71[v70] = 0;
                v38 = v70-- <= 1;
              }
              while ( !v38 );
LABEL_184:
              v73 = v242[v67];
              ((void (__fastcall *)(int (***)()))v258[3])(&v258);
              ((void (__fastcall *)(int (***)()))v258[3])(&v258);
              v74 = FIELD_U32(v73, 20);
              v73 += 20;
              v75 = v259;
              (*(void (__fastcall **)(int))(v74 + 12))(v73);
              v76 = *(int **)(v73 + 4);
              if ( v75 == v76 )
              {
                v10 = v247;
                goto LABEL_336;
              }
              v10 = v247;
              for ( kk = 1; ; kk += 2 )
              {
                a2 = v249;
                if ( *((unsigned __int8 *)v259 + kk - 1) != *((unsigned __int8 *)v76 + kk - 1) )
                  break;
                if ( !*((_BYTE *)v259 + kk - 1) )
                  goto LABEL_336;
                if ( kk >= 524289 )
                  break;
                a2 = v249;
                if ( *((unsigned __int8 *)v259 + kk) != *((unsigned __int8 *)v76 + kk) )
                  break;
                if ( !*((_BYTE *)v259 + kk) )
                  goto LABEL_336;
              }
              *((_BYTE *)v240 + v248++) = v267;
              if ( (unsigned int)v248 > 0x40 )
                goto LABEL_583;
            }
            v11 = 9;
            if ( !sub_6090552C(a2, (int)&v267, 1) )
              goto LABEL_344;
          }
        }
        while ( 2 )
        {
          if ( v267 != 62 )
            goto LABEL_227;
          if ( v260 <= v248 )
          {
            ((void (__fastcall *)(int (***)()))v258[3])(&v258);
          }
          else
          {
            v78 = v259;
            if ( v248 > 0 )
              v78 = (int *)((char *)v259 + v248);
            *(_BYTE *)v78 = 0;
          }
          v69 = v244;
          ((void (__fastcall *)(int (***)()))v258[3])(&v258);
          v79 = 0;
          while ( *((_BYTE *)v259 + v79) )
          {
            if ( !*((_BYTE *)v259 + v79 + 1) )
            {
              if ( ++v79 < 1 )
                goto LABEL_217;
              goto LABEL_212;
            }
            if ( !*((_BYTE *)v259 + v79 + 2) )
            {
              v79 += 2;
              break;
            }
            v38 = v79 + 2 <= 0x7FFFF;
            v79 += 3;
            if ( !v38 )
              goto LABEL_217;
          }
          if ( v79 < 1 )
            goto LABEL_217;
LABEL_212:
          v80 = (char *)v259 - 1;
          do
          {
            v81 = (unsigned __int8)v80[v79];
            if ( v81 >= 0x21 && v81 != 127 )
              break;
            v80[v79] = 0;
            v38 = v79-- <= 1;
          }
          while ( !v38 );
LABEL_217:
          v82 = *v242;
          ((void (__fastcall *)(int (***)()))v258[3])(&v258);
          ((void (__fastcall *)(int (***)()))v258[3])(&v258);
          v83 = FIELD_U32(v82, 20);
          v82 += 20;
          v84 = v259;
          (*(void (__fastcall **)(int))(v83 + 12))(v82);
          v85 = *(int **)(v82 + 4);
          if ( v84 != v85 )
          {
            v10 = v247;
            for ( mm = 1; *((unsigned __int8 *)v259 + mm - 1) == *((unsigned __int8 *)v85 + mm - 1); mm += 2 )
            {
              if ( !*((_BYTE *)v259 + mm - 1) )
                goto LABEL_335;
              if ( mm >= 524289 || *((unsigned __int8 *)v259 + mm) != *((unsigned __int8 *)v85 + mm) )
                break;
              if ( !*((_BYTE *)v259 + mm) )
              {
LABEL_335:
                a2 = v249;
                goto LABEL_336;
              }
            }
            *((_BYTE *)v240 + v248) = v267;
            a2 = v249;
            if ( (unsigned int)++v248 <= 0x40 )
            {
LABEL_227:
              v11 = 9;
              if ( !sub_6090552C(a2, (int)&v267, 1) )
                goto LABEL_344;
              continue;
            }
LABEL_583:
            v8 = v242;
            if ( v242 )
              goto LABEL_568;
            goto LABEL_569;
          }
          break;
        }
        v10 = v247;
LABEL_336:
        if ( v245 >= 1 )
        {
          --v245;
          v232 = v242[v67];
        }
        if ( v12 )
        {
          v128 = v12 & 0xFFFFFFFC;
          if ( FIELD_U32(v232, 108) != 2 )
            v128 = v12;
          v129 = (void *)operator_new_8DE2C8(v128 + 1, (int)heap, 4);
          qmemcpy(v129, *(const void **)(v69 + 16), v128);
          *((_BYTE *)v129 + v128) = 0;
          v130 = v129;
          v10 = v247;
          sub_609A5C1C(v232, v130, v128, 1);
          v238 = 0;
          v237 = 0;
        }
        else
        {
          v238 = 0;
        }
        v12 = 0;
        v11 = 0;
LABEL_344:
        v8 = v242;
        goto LABEL_550;
      case 10:
        if ( v245 >= v246 )
          goto LABEL_567;
        v87 = v8;
        v88 = (_DWORD *)operator_new_8DE25C(0x8Cu, heap, 4);
        sub_609A59D0(v88);
        while ( 2 )
        {
          if ( v267 == 62 )
            goto LABEL_349;
          if ( v267 == 47 )
          {
            if ( sub_60905340(v249) != 62 )
            {
LABEL_564:
              if ( v88 )
                goto LABEL_565;
              goto LABEL_566;
            }
            if ( v260 <= v248 )
            {
              ((void (__fastcall *)(int (***)()))v258[3])(&v258);
            }
            else
            {
              v136 = v259;
              if ( v248 > 0 )
                v136 = (int *)((char *)v259 + v248);
              *(_BYTE *)v136 = 0;
            }
            v236 = v6;
            ((void (__fastcall *)(int (***)()))v258[3])(&v258);
            v145 = 0;
            while ( *((_BYTE *)v259 + v145) )
            {
              if ( !*((_BYTE *)v259 + v145 + 1) )
              {
                if ( ++v145 < 1 )
                  goto LABEL_467;
                goto LABEL_462;
              }
              if ( !*((_BYTE *)v259 + v145 + 2) )
              {
                v145 += 2;
                break;
              }
              v38 = v145 + 2 <= 0x7FFFF;
              v145 += 3;
              if ( !v38 )
                goto LABEL_467;
            }
            if ( v145 < 1 )
              goto LABEL_467;
LABEL_462:
            v169 = (char *)v259 - 1;
            do
            {
              v170 = (unsigned __int8)v169[v145];
              if ( v170 >= 0x21 && v170 != 127 )
                break;
              v169[v145] = 0;
              v38 = v145-- <= 1;
            }
            while ( !v38 );
LABEL_467:
            v171 = (int *)v88[6];
            ((void (__fastcall *)(int (***)()))v258[3])(&v258);
            v172 = v259;
            if ( v171 != v259 )
            {
              ((void (__fastcall *)(int (***)()))v258[3])(&v258);
              v173 = 0;
              while ( *((_BYTE *)v259 + v173) )
              {
                if ( !*((_BYTE *)v259 + v173 + 1) )
                {
                  ++v173;
                  break;
                }
                if ( !*((_BYTE *)v259 + v173 + 2) )
                {
                  v173 += 2;
                  break;
                }
                v38 = v173 + 2 <= 0x7FFFF;
                v173 += 3;
                if ( !v38 )
                {
                  v173 = 0;
                  break;
                }
              }
              v211 = v88[7];
              if ( v173 >= v211 )
                v173 = v211 - 1;
              qmemcpy(v171, v172, v173);
              *((_BYTE *)v171 + v173) = 0;
            }
            if ( !v245 )
            {
              v6 = v236;
              if ( !v236 )
              {
                if ( v87 )
                  operator_delete_8DE3FC(v87);
                if ( v264 )
                {
                  if ( v262 >= 1 )
                  {
                    v225 = *v264;
                    *v225 = v265;
                    v265 = v225;
                    if ( v262 >= 2 )
                    {
                      v226 = 1;
                      do
                      {
                        v227 = v264[v226++];
                        *v227 = v225;
                        v265 = v227;
                        v225 = v227;
                      }
                      while ( v226 < v262 );
                    }
                  }
                  v262 = 0;
                  if ( v266 )
                    operator_delete_8DE3FC(v266);
                  v263 = 0;
                  v264 = 0;
                  v265 = 0;
                  v266 = 0;
                }
                return v88;
              }
LABEL_565:
              (*(void (__fastcall **)(_DWORD *))(*v88 + 4))(v88);
LABEL_566:
              v8 = v87;
              goto LABEL_567;
            }
            v212 = v245 - 1 - v246;
            if ( v245 - 1 < v246 )
              v212 = v245 - 1;
            v213 = *((_DWORD *)v87 + v212);
            v214 = v88 + 1;
            v8 = v87;
            sub_608DEFB0(v213 + 4, v214);
            v6 = v236;
            v12 = 0;
            v11 = 0;
            v238 = 0;
LABEL_549:
            a2 = v249;
            v10 = v247;
          }
          else
          {
            v89 = (unsigned __int8)(v267 - 9);
            if ( v89 > 0x17 || (LOWORD(v90) = 19, BYTE2(v90) = 0x80, (((v90 & 0xFFFFFFu) >> v89) & 1) == 0) )
            {
              *((_BYTE *)v240 + v248) = v267;
              if ( (unsigned int)(v248 + 1) >= 0x41 )
                goto LABEL_564;
              ++v248;
              if ( !sub_6090552C(v249, (int)&v267, 1) )
                goto LABEL_564;
              continue;
            }
LABEL_349:
            v132 = v6;
            if ( v260 <= v248 )
            {
              ((void (__fastcall *)(int (***)()))v258[3])(&v258);
            }
            else
            {
              v133 = v259;
              if ( v248 > 0 )
                v133 = (int *)((char *)v259 + v248);
              *(_BYTE *)v133 = 0;
            }
            if ( !*(_BYTE *)v259 )
            {
              if ( v88 )
                (*(void (__fastcall **)(_DWORD *))(*v88 + 4))(v88);
              v8 = v87;
              if ( v87 )
                goto LABEL_568;
              goto LABEL_569;
            }
            v137 = (int *)v88[6];
            ((void (__fastcall *)(int (***)()))v258[3])(&v258);
            v138 = v259;
            if ( v137 != v259 )
            {
              ((void (__fastcall *)(int (***)()))v258[3])(&v258);
              v139 = 0;
              while ( *((_BYTE *)v259 + v139) )
              {
                if ( !*((_BYTE *)v259 + v139 + 1) )
                {
                  ++v139;
                  break;
                }
                if ( !*((_BYTE *)v259 + v139 + 2) )
                {
                  v139 += 2;
                  break;
                }
                v140 = v139 + 2;
                v139 += 3;
                if ( v140 > 0x7FFFF )
                {
                  v139 = 0;
                  break;
                }
              }
              v150 = v88[7];
              if ( v139 >= v150 )
                v139 = v150 - 1;
              qmemcpy(v137, v138, v139);
              *((_BYTE *)v137 + v139) = 0;
            }
            if ( v245 )
            {
              v151 = v87;
              v152 = v245 - 1 - v246;
              if ( v245 - 1 < v246 )
                v152 = v245 - 1;
              sub_608DEFB0(*((_DWORD *)v87 + v152) + 4, v88 + 1);
              v6 = v132;
            }
            else
            {
              v6 = v88;
              v151 = v87;
            }
            v10 = v247;
            v11 = 5;
            v151[v245] = v88;
            v8 = v151;
            a2 = v249;
            ++v245;
            v153 = v237;
            if ( v267 == 62 )
            {
              v11 = 6;
              v12 = 0;
              v153 = 0;
            }
            v237 = v153;
          }
          goto LABEL_550;
        }
    }
  }
}
