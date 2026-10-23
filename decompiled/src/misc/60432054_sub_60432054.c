/* sub_60432054
 * address: 0x60432054   size: 4292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60432054(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        signed int a5,
        signed int a6,
        signed int a7,
        signed int a8,
        signed int a9,
        int a10,
        void *heap)
{
  void *CurrentHeap_const; // r7
  unsigned int v15; // r0
  _DWORD *v16; // r0
  int v17; // r5
  int v18; // r1
  signed int v19; // r0
  int v20; // r2
  int v21; // r3
  unsigned __int8 *v22; // r3
  signed int v23; // r7
  signed int v24; // r5
  int result; // r0
  int v26; // r4
  _DWORD *v27; // r5
  int v28; // r9
  int v29; // r0
  void *v30; // r7
  int v31; // r8
  _DWORD *v32; // r6
  int v33; // r2
  int v34; // r0
  __int64 v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r1
  int v39; // r3
  __int64 v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r2
  int v44; // r0
  int v45; // r1
  int v46; // r3
  int v47; // r6
  int v48; // r10
  __int64 v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r2
  int v53; // r0
  int v54; // r1
  int v55; // r3
  int v56; // r7
  __int64 v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r2
  int v61; // r0
  int v62; // r1
  int v63; // r3
  int v64; // r7
  __int64 v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r2
  int v69; // r0
  int v70; // r1
  int v71; // r3
  int v72; // r7
  __int64 v73; // r0
  int v74; // r0
  int v75; // r0
  int v76; // r2
  int v77; // r0
  int v78; // r1
  int v79; // r3
  int v80; // r7
  int v81; // r4
  int v82; // r0
  int v83; // r4
  int v84; // r6
  int v85; // r7
  _DWORD *v86; // r5
  int v87; // r9
  _DWORD *v88; // r0
  __int64 v89; // r4
  int v90; // r9
  _QWORD *v91; // r0
  _DWORD *v92; // r7
  _QWORD *v93; // r8
  int v94; // r6
  int v95; // r7
  int v96; // r10
  int v97; // r6
  int *v98; // r10
  int v99; // r7
  int v100; // r1
  int v101; // r0
  int v102; // r7
  int v103; // r4
  int v104; // r1
  int v105; // r0
  unsigned int v106; // r4
  int v107; // r8
  unsigned int *v108; // r11
  _DWORD *v109; // r0
  _DWORD *v110; // r6
  int v111; // r7
  int v112; // r0
  int v113; // r7
  unsigned int v114; // r9
  size_t v115; // r4
  int v116; // r0
  unsigned int *v117; // r5
  int v118; // r11
  int v119; // r0
  int v120; // r2
  unsigned int v121; // r10
  void *v122; // r4
  int v123; // r6
  int v124; // r1
  int v125; // r0
  int v126; // r4
  int v127; // r7
  int v128; // r4
  int v129; // r0
  int v130; // r5
  _DWORD *v131; // r0
  _DWORD *v132; // r8
  _DWORD *v133; // r6
  int v134; // r6
  int *v135; // r5
  int v136; // r11
  int v137; // r8
  int v138; // r4
  int v139; // r3
  int v140; // r3
  int v141; // t1
  int v142; // r2
  _DWORD *v143; // r7
  int v144; // r0
  int v145; // r0
  int v146; // r0
  int v147; // [sp+0h] [bp-148h]
  unsigned int v148; // [sp+4h] [bp-144h]
  int v149; // [sp+10h] [bp-138h]
  int v150; // [sp+18h] [bp-130h]
  int v151; // [sp+1Ch] [bp-12Ch]
  int v152; // [sp+20h] [bp-128h]
  int v153; // [sp+24h] [bp-124h]
  int v154; // [sp+28h] [bp-120h]
  int v155; // [sp+30h] [bp-118h]
  unsigned int v156; // [sp+38h] [bp-110h]
  size_t v157; // [sp+3Ch] [bp-10Ch]
  int v158; // [sp+3Ch] [bp-10Ch]
  int v159; // [sp+40h] [bp-108h]
  int v160; // [sp+40h] [bp-108h]
  unsigned int v161; // [sp+44h] [bp-104h]
  int v162; // [sp+44h] [bp-104h]
  int v163; // [sp+48h] [bp-100h]
  char v164; // [sp+48h] [bp-100h]
  int v165; // [sp+4Ch] [bp-FCh]
  size_t v166; // [sp+50h] [bp-F8h] BYREF
  int v167; // [sp+54h] [bp-F4h]
  int v168; // [sp+58h] [bp-F0h]
  int v169; // [sp+5Ch] [bp-ECh]
  int v170; // [sp+60h] [bp-E8h] BYREF
  unsigned int v171; // [sp+64h] [bp-E4h]
  int v172; // [sp+68h] [bp-E0h]
  int v173; // [sp+6Ch] [bp-DCh]
  int v174; // [sp+70h] [bp-D8h]
  int v175; // [sp+74h] [bp-D4h]
  int v176; // [sp+78h] [bp-D0h]
  int v177; // [sp+7Ch] [bp-CCh]
  bool v178; // [sp+80h] [bp-C8h]
  int v179; // [sp+84h] [bp-C4h]
  int v180; // [sp+88h] [bp-C0h]
  int v181; // [sp+8Ch] [bp-BCh]
  int v182; // [sp+90h] [bp-B8h]
  int v183; // [sp+94h] [bp-B4h]
  int v184; // [sp+98h] [bp-B0h]
  int v185; // [sp+9Ch] [bp-ACh]
  int v186; // [sp+A0h] [bp-A8h]
  int v187; // [sp+A4h] [bp-A4h]
  int v188; // [sp+A8h] [bp-A0h]
  int v189; // [sp+ACh] [bp-9Ch]
  int v190; // [sp+B0h] [bp-98h]
  int v191; // [sp+B4h] [bp-94h]
  int v192; // [sp+B8h] [bp-90h]
  int v193; // [sp+BCh] [bp-8Ch]
  int v194; // [sp+C0h] [bp-88h]
  int v195; // [sp+C4h] [bp-84h]
  int v196; // [sp+C8h] [bp-80h]
  int v197; // [sp+CCh] [bp-7Ch]
  int v198; // [sp+D0h] [bp-78h]
  int v199; // [sp+D4h] [bp-74h]
  int v200; // [sp+D8h] [bp-70h]
  int v201; // [sp+DCh] [bp-6Ch]
  int v202; // [sp+E0h] [bp-68h]
  int v203; // [sp+E4h] [bp-64h]
  int v204; // [sp+E8h] [bp-60h]
  int v205; // [sp+ECh] [bp-5Ch]
  int v206; // [sp+F0h] [bp-58h]
  int v207; // [sp+F4h] [bp-54h]
  int v208; // [sp+F8h] [bp-50h]
  int v209; // [sp+FCh] [bp-4Ch]
  int v210; // [sp+100h] [bp-48h]
  int v211; // [sp+104h] [bp-44h]
  int v212; // [sp+108h] [bp-40h]
  int v213; // [sp+10Ch] [bp-3Ch]
  int v214; // [sp+110h] [bp-38h]
  int v215; // [sp+114h] [bp-34h]
  int v216; // [sp+118h] [bp-30h]
  void *v217; // [sp+120h] [bp-28h] BYREF

  CurrentHeap_const = heap;
  a1[110] = a2;
  if ( a10 == 2 )
  {
    a1[79] |= 0x27u;
    v16 = (_DWORD *)operator_new_8DE25C(0x18u, heap, 4);
    *v16 = 2139095039;
    v16[1] = 2139095039;
    v16[2] = 2139095039;
    v16[3] = -8388609;
    v16[4] = -8388609;
    v16[5] = -8388609;
    a1[86] = v16;
  }
  else
  {
    if ( a10 == 1 )
    {
      v15 = a1[79] | 7;
    }
    else
    {
      if ( a10 )
        goto LABEL_8;
      v15 = a1[79] & 0xFFFFFFF8;
    }
    a1[79] = v15;
  }
LABEL_8:
  v17 = FIELD_U32(a2, 4);
  if ( !heap )
    CurrentHeap_const = (void *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  v18 = 0;
  v19 = 1;
  v170 = v17;
  v217 = CurrentHeap_const;
  v171 = 0;
  v172 = 1;
  v173 = 1;
  v174 = 1;
  v175 = 1;
  v176 = 1;
  v177 = 0;
  v178 = 0;
  v181 = 0;
  v182 = 8;
  v183 = 0;
  v184 = -1;
  v185 = 0;
  v186 = 8;
  v187 = 0;
  v188 = -1;
  v189 = 0;
  v190 = 8;
  v191 = 0;
  v192 = -1;
  v193 = 0;
  v194 = 8;
  v195 = 0;
  v196 = -1;
  v197 = 0;
  v198 = 8;
  v199 = 0;
  v200 = -1;
  v201 = 0;
  v202 = 8;
  v203 = 0;
  v204 = -1;
  v205 = 0;
  v206 = 8;
  v207 = 0;
  v208 = -1;
  v209 = 0;
  v210 = 8;
  v211 = 0;
  v212 = -1;
  v213 = 0;
  v214 = 8;
  v215 = 0;
  v216 = -1;
  v179 = 0;
  v180 = 0;
  v20 = FIELD_U16(v17, 106);
  if ( FIELD_U16(v17, 106) )
  {
    v21 = FIELD_U32(v17, 48);
    if ( (v20 & 1) != 0 )
    {
      v19 = FIELD_U8(v21, 103);
      v18 = 1;
      if ( (unsigned int)v19 <= 1 )
        v19 = 1;
    }
    if ( v20 != 1 )
    {
      v22 = (unsigned __int8 *)(v21 + 112 * v18 + 215);
      do
      {
        v23 = *(v22 - 112);
        v24 = *v22;
        v18 += 2;
        v22 += 224;
        if ( v19 < v23 )
          v19 = v23;
        if ( v19 < v24 )
          v19 = v24;
      }
      while ( v18 < v20 );
    }
    v176 = v19;
  }
  v175 = a4;
  v178 = a10 != 0;
  v172 = FIELD_U8(a2, 20);
  v173 = v172;
  v174 = v172;
  v177 = 48;
  sub_6086C8F0(&v170);
  result = sub_6042A0C8(&v217);
  if ( result )
  {
    v26 = (int)a1;
    v149 = a4;
    v27 = a1 + 10;
    sub_6086CCFC(a1 + 10, &v170);
    v28 = sub_6086D43C(a1 + 10, FIELD_U32(dword_60CCFC8C, 24));
    if ( v28 )
    {
      v29 = sub_6086D358(a1 + 10, FIELD_U32(dword_60CCFC8C, 24));
      v30 = v217;
      v31 = v29;
      v32 = (_DWORD *)operator_new_8DE25C(0x1Cu, v217, 4);
      sub_60913BB4(v32);
      *v32 = off_60BF9C1C;
      sub_60913D88((int)v32, v28, (int)v30, v31, 2);
      sub_60913A6C(&v166, v32, 0);
      v33 = v167;
      v34 = v168;
      FIELD_U32(v26, 444) = v166;
      FIELD_U32(v26, 448) = v33;
      FIELD_U32(v26, 452) = v34;
      sub_60913F34(v34, v26 + 456);
      sub_6086D550(v27, FIELD_U32(dword_60CCFC8C, 24), v26 + 456, FIELD_U32(v26, 448), v28);
    }
    v154 = v26;
    if ( a5 )
    {
      v171 = 0;
      v172 = 0;
      v173 = 0;
      v174 = 8;
      v175 = 0;
      v176 = -1;
      v170 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(v26, 440) + 4) + 32) + 76);
      sub_60879E04(&v170);
      FIELD_U32(v26, 188) = operator_new_8DE2C8(v171, (int)heap, 16);
      sub_60879E44(v26 + 116, &v170);
      if ( a5 >= 1 )
      {
        v35 = 4LL * (unsigned int)a5;
        if ( !is_mul_ok(4u, a5) )
          HIDWORD(v35) = 1;
        if ( HIDWORD(v35) )
          LODWORD(v35) = -1;
        v36 = sub_608DE334(v35, (int)heap, 4);
        if ( v36 )
        {
          FIELD_U32(v26, 192) = a5;
          FIELD_U32(v26, 196) = v36;
        }
      }
      v37 = FIELD_U32(v26, 192);
      if ( v37 >= 1 )
      {
        v38 = 0;
        if ( (v37 & 1) != 0 )
        {
          **(_DWORD **)(v26 + 196) = 1065353216;
          v38 = 1;
        }
        if ( v37 != 1 )
        {
          do
          {
            *(_DWORD *)(FIELD_U32(v26, 196) + 4 * v38) = 1065353216;
            v39 = FIELD_U32(v26, 196) + 4 * v38;
            v38 += 2;
            FIELD_U32(v39, 4) = 1065353216;
          }
          while ( v37 != v38 );
        }
      }
      if ( a5 >= 1 )
      {
        v40 = 4LL * (unsigned int)a5;
        if ( !is_mul_ok(4u, a5) )
          HIDWORD(v40) = 1;
        if ( HIDWORD(v40) )
          LODWORD(v40) = -1;
        v41 = sub_608DE334(v40, (int)heap, 4);
        if ( v41 )
        {
          FIELD_U32(v26, 136) = a5;
          FIELD_U32(v26, 140) = v41;
        }
      }
      v42 = FIELD_U32(v26, 136);
      if ( v42 >= 1 )
      {
        if ( (v42 & 3) != 0 )
        {
          v43 = 0;
          do
            *(_DWORD *)(FIELD_U32(v26, 140) + 4 * v43++) = 0;
          while ( (v42 & 3) != v43 );
        }
        else
        {
          v43 = 0;
        }
        if ( (unsigned int)(v42 - 1) >= 3 )
        {
          v44 = v43 - v42;
          v45 = 4 * v43;
          v46 = 0;
          do
          {
            *(_DWORD *)(FIELD_U32(v26, 140) + v45 - 4 * v46) = 0;
            *(_DWORD *)(FIELD_U32(v26, 140) + v45 - 4 * v46 + 4) = 0;
            *(_DWORD *)(FIELD_U32(v26, 140) + v45 - 4 * v46 + 8) = 0;
            v47 = FIELD_U32(v26, 140) + v45 - 4 * v46;
            v46 -= 4;
            FIELD_U32(v47, 12) = 0;
          }
          while ( v44 != v46 );
        }
      }
    }
    v48 = v26;
    if ( a6 )
    {
      if ( a6 >= 1 )
      {
        v49 = 4LL * (unsigned int)a6;
        if ( !is_mul_ok(4u, a6) )
          HIDWORD(v49) = 1;
        if ( HIDWORD(v49) )
          LODWORD(v49) = -1;
        v50 = sub_608DE334(v49, (int)heap, 4);
        if ( v50 )
        {
          FIELD_U32(v26, 144) = a6;
          FIELD_U32(v26, 148) = v50;
        }
      }
      v51 = FIELD_U32(v26, 144);
      if ( v51 >= 1 )
      {
        if ( (v51 & 3) != 0 )
        {
          v52 = 0;
          do
            *(_DWORD *)(FIELD_U32(v26, 148) + 4 * v52++) = 0;
          while ( (v51 & 3) != v52 );
        }
        else
        {
          v52 = 0;
        }
        if ( (unsigned int)(v51 - 1) >= 3 )
        {
          v53 = v52 - v51;
          v54 = 4 * v52;
          v55 = 0;
          do
          {
            *(_DWORD *)(FIELD_U32(v26, 148) + v54 - 4 * v55) = 0;
            *(_DWORD *)(FIELD_U32(v26, 148) + v54 - 4 * v55 + 4) = 0;
            *(_DWORD *)(FIELD_U32(v26, 148) + v54 - 4 * v55 + 8) = 0;
            v56 = FIELD_U32(v26, 148) + v54 - 4 * v55;
            v55 -= 4;
            FIELD_U32(v56, 12) = 0;
          }
          while ( v53 != v55 );
        }
      }
    }
    if ( a7 )
    {
      if ( a7 >= 1 )
      {
        v57 = 4LL * (unsigned int)a7;
        if ( !is_mul_ok(4u, a7) )
          HIDWORD(v57) = 1;
        if ( HIDWORD(v57) )
          LODWORD(v57) = -1;
        v58 = sub_608DE334(v57, (int)heap, 4);
        if ( v58 )
        {
          FIELD_U32(v26, 152) = a7;
          FIELD_U32(v26, 156) = v58;
        }
      }
      v59 = FIELD_U32(v26, 152);
      if ( v59 >= 1 )
      {
        if ( (v59 & 3) != 0 )
        {
          v60 = 0;
          do
            *(_DWORD *)(FIELD_U32(v26, 156) + 4 * v60++) = 0;
          while ( (v59 & 3) != v60 );
        }
        else
        {
          v60 = 0;
        }
        if ( (unsigned int)(v59 - 1) >= 3 )
        {
          v61 = v60 - v59;
          v62 = 4 * v60;
          v63 = 0;
          do
          {
            *(_DWORD *)(FIELD_U32(v26, 156) + v62 - 4 * v63) = 0;
            *(_DWORD *)(FIELD_U32(v26, 156) + v62 - 4 * v63 + 4) = 0;
            *(_DWORD *)(FIELD_U32(v26, 156) + v62 - 4 * v63 + 8) = 0;
            v64 = FIELD_U32(v26, 156) + v62 - 4 * v63;
            v63 -= 4;
            FIELD_U32(v64, 12) = 0;
          }
          while ( v61 != v63 );
        }
      }
    }
    if ( a8 )
    {
      if ( a8 >= 1 )
      {
        v65 = 4LL * (unsigned int)a8;
        if ( !is_mul_ok(4u, a8) )
          HIDWORD(v65) = 1;
        if ( HIDWORD(v65) )
          LODWORD(v65) = -1;
        v66 = sub_608DE334(v65, (int)heap, 4);
        if ( v66 )
        {
          FIELD_U32(v26, 160) = a8;
          FIELD_U32(v26, 164) = v66;
        }
      }
      v67 = FIELD_U32(v26, 160);
      if ( v67 >= 1 )
      {
        if ( (v67 & 3) != 0 )
        {
          v68 = 0;
          do
            *(_DWORD *)(FIELD_U32(v26, 164) + 4 * v68++) = 0;
          while ( (v67 & 3) != v68 );
        }
        else
        {
          v68 = 0;
        }
        if ( (unsigned int)(v67 - 1) >= 3 )
        {
          v69 = v68 - v67;
          v70 = 4 * v68;
          v71 = 0;
          do
          {
            *(_DWORD *)(FIELD_U32(v26, 164) + v70 - 4 * v71) = 0;
            *(_DWORD *)(FIELD_U32(v26, 164) + v70 - 4 * v71 + 4) = 0;
            *(_DWORD *)(FIELD_U32(v26, 164) + v70 - 4 * v71 + 8) = 0;
            v72 = FIELD_U32(v26, 164) + v70 - 4 * v71;
            v71 -= 4;
            FIELD_U32(v72, 12) = 0;
          }
          while ( v69 != v71 );
        }
      }
    }
    if ( a9 )
    {
      if ( a9 >= 1 )
      {
        v73 = 4LL * (unsigned int)a9;
        if ( !is_mul_ok(4u, a9) )
          HIDWORD(v73) = 1;
        if ( HIDWORD(v73) )
          LODWORD(v73) = -1;
        v74 = sub_608DE334(v73, (int)heap, 4);
        if ( v74 )
        {
          FIELD_U32(v26, 168) = a9;
          FIELD_U32(v26, 172) = v74;
        }
      }
      v75 = FIELD_U32(v26, 168);
      if ( v75 >= 1 )
      {
        if ( (v75 & 3) != 0 )
        {
          v76 = 0;
          do
            *(_DWORD *)(FIELD_U32(v26, 172) + 4 * v76++) = 0;
          while ( (v75 & 3) != v76 );
        }
        else
        {
          v76 = 0;
        }
        if ( (unsigned int)(v75 - 1) >= 3 )
        {
          v77 = v76 - v75;
          v78 = 4 * v76;
          v79 = 0;
          do
          {
            *(_DWORD *)(FIELD_U32(v26, 172) + v78 - 4 * v79) = 0;
            *(_DWORD *)(FIELD_U32(v26, 172) + v78 - 4 * v79 + 4) = 0;
            *(_DWORD *)(FIELD_U32(v26, 172) + v78 - 4 * v79 + 8) = 0;
            v80 = FIELD_U32(v26, 172) + v78 - 4 * v79;
            v79 -= 4;
            FIELD_U32(v80, 12) = 0;
          }
          while ( v77 != v79 );
        }
      }
    }
    sub_6090B310(dword_60CCF464);
    v81 = FIELD_U16(v26, 66);
    if ( FIELD_U16(v154, 66) )
    {
      v82 = sub_608DE334(8 * v81, (int)heap, 4);
      if ( v82 )
      {
        FIELD_U32(v154, 232) = v81;
        FIELD_U32(v154, 236) = v82;
      }
    }
    v83 = FIELD_U32(v154, 232);
    if ( v83 )
    {
      v84 = 0;
      v85 = 0;
      v86 = (_DWORD *)(FIELD_U32(v154, 236) + 4);
      do
      {
        v87 = FIELD_U32(v154, 76);
        v88 = (_DWORD *)operator_new_8DE25C(0xC8u, heap, 4);
        *(v86 - 1) = sub_604292C8(v88, v87 + v85, *(_DWORD *)(*(_DWORD *)(FIELD_U32(v154, 440) + 4) + 64) + v84);
        *v86 = -1082130432;
        --v83;
        v86 += 2;
        v84 += 184;
        v85 += 72;
      }
      while ( v83 );
    }
    HIDWORD(v89) = FIELD_U16(v154, 64);
    v90 = (int)heap;
    if ( FIELD_U16(v154, 64) )
    {
      v91 = (_QWORD *)sub_608DE334(120 * HIDWORD(v89) + 8, (int)heap, 4);
      if ( v91 )
      {
        LODWORD(v89) = 120;
        v92 = (_DWORD *)v91 + 31;
        v93 = v91 + 1;
        v94 = 120 * HIDWORD(v89);
        *v91 = v89;
        do
        {
          sub_60921340(v92 - 29);
          *(v92 - 1) = 0;
          *v92 = 0;
          v92 += 30;
          v94 -= 120;
        }
        while ( v94 );
        FIELD_U32(v154, 240) = HIDWORD(v89);
        FIELD_U32(v154, 244) = v93;
      }
    }
    v151 = FIELD_U32(v154, 240);
    if ( v151 )
    {
      v95 = 0;
      v152 = FIELD_U32(v154, 244);
      v150 = 0;
      do
      {
        v96 = FIELD_U32(v48, 72);
        v97 = v152 + 120 * v95;
        FIELD_U8(v97, 109) = -1;
        FIELD_U8(v97, 105) = -1;
        FIELD_U8(v97, 101) = -1;
        FIELD_U8(v97, 97) = -1;
        FIELD_U8(v97, 108) = -1;
        FIELD_U8(v97, 111) = -1;
        FIELD_U8(v97, 110) = -1;
        FIELD_U8(v97, 104) = -1;
        FIELD_U8(v97, 107) = -1;
        FIELD_U8(v97, 106) = -1;
        FIELD_U8(v97, 100) = -1;
        FIELD_U8(v97, 103) = -1;
        FIELD_U8(v97, 102) = -1;
        FIELD_U8(v97, 96) = -1;
        FIELD_U8(v97, 99) = -1;
        FIELD_U8(v97, 98) = -1;
        v165 = 15 * v95;
        if ( v95 )
        {
          sub_6092166C(v97, v150);
        }
        else
        {
          sub_609214AC(v97, 2, v90);
          sub_60921540(v97, 6, 3, 0);
          sub_60921540(v97, 1, 1, 0);
          v150 = v97;
        }
        sub_609216EC(v97, v90, 1, 1);
        v153 = v95;
        v98 = (int *)(v96 + 56 * v95);
        v99 = *(unsigned __int8 *)(*v98 + 102);
        sub_60921A90(v97, 0);
        v100 = FIELD_U32(v97, 8);
        v170 = v99;
        sub_60921988(v97, v100, 1, &v170, 0, 1);
        v101 = FIELD_U32(v97, 16);
        v102 = FIELD_U32(v97, 28);
        v103 = FIELD_U32(v97, 32);
        v104 = FIELD_U16(v97, 40) * FIELD_U8(v97, 37);
        v170 = FIELD_U32(v97, 24);
        v171 = v102 + v104 * v101;
        v172 = v103;
        sub_60913B04(&v170, FIELD_U32(v97, 12));
        if ( a9 >= 1 )
        {
          v105 = *v98;
          if ( *(_BYTE *)(*v98 + 104) )
          {
            v106 = *(unsigned __int8 *)(FIELD_U32(v105, 24) + 85);
            if ( *(_BYTE *)(FIELD_U32(v105, 24) + 85) )
            {
              v107 = v152 + 8 * v165;
              v108 = (unsigned int *)(v107 + 112);
              v109 = (_DWORD *)sub_608DE334(72 * v106 + 8, (int)heap, 4);
              if ( !v109 )
                goto LABEL_145;
              v110 = v109 + 2;
              v111 = 72 * v106;
              *v109 = 72;
              v109[1] = v106;
              v112 = (int)(v109 + 2);
              do
              {
                v111 -= 72;
                v112 = sub_608353A4(v112) + 72;
              }
              while ( v111 );
              *v108 = v106;
              FIELD_U32(v107, 116) = v110;
              if ( v106 )
              {
LABEL_145:
                v113 = 0;
                v114 = 0;
                v156 = v106;
                v155 = *(_DWORD *)(*v98 + 24);
                do
                {
                  v159 = *(_DWORD *)(FIELD_U32(v155, 48) + 4 * v114);
                  v115 = *(_DWORD *)(FIELD_U32(v155, 56) + 16 * v114);
                  v161 = *v108;
                  v116 = FIELD_U32(v107, 116);
                  v169 = 0;
                  v168 = 0;
                  v167 = 0;
                  v166 = 0;
                  v163 = v116;
                  sub_6083D5B0(&v166);
                  v167 = 4;
                  v177 = 0;
                  v176 = 0;
                  v175 = 0;
                  v174 = 0;
                  v173 = 0;
                  v172 = 0;
                  v171 = 0;
                  v166 = v115;
                  v170 = 0;
                  v157 = v115;
                  sub_6083D5C0(&v170);
                  v170 = 34;
                  sub_608352A0(FIELD_U32(dword_60CCFC8C, 24), &v166);
                  v117 = v108;
                  v118 = sub_6083650C(FIELD_U32(dword_60CCFC8C, 24), &v170);
                  v119 = sub_60836514(FIELD_U32(dword_60CCFC8C, 24), &v170);
                  v120 = v118;
                  v108 = v117;
                  v121 = (v115 + v119 - 1) & -v119;
                  v122 = (void *)operator_new_8DE2C8(v121, (int)heap, v120);
                  qmemcpy(v122, (const void *)sub_608354C4(v159), v157);
                  v123 = operator_new_8DE25C(0x120u, heap, 4);
                  sub_6083651C(v123, v124);
                  v172 = (int)v122;
                  v171 = v121;
                  sub_60836538(v123, FIELD_U32(dword_60CCFC8C, 24), &v170);
                  v147 = 0;
                  v148 = v121;
                  v125 = v163;
                  if ( v161 > v114 )
                    v125 = v163 + v113;
                  v126 = v125;
                  sub_608353C0(v125, FIELD_U32(dword_60CCFC8C, 24));
                  FIELD_U32(v126, 64) = v123;
                  ++v114;
                  v113 += 72;
                }
                while ( v156 != v114 );
              }
            }
          }
        }
        v48 = v154;
        v90 = (int)heap;
        v95 = v153 + 1;
      }
      while ( v153 + 1 != v151 );
    }
    if ( (FIELD_U8(v48, 316) & 1) != 0 )
    {
      sub_60433168(v48, v149, v90);
      sub_604332D4(v48);
    }
    sub_6090B32C(dword_60CCF464);
    v127 = 0;
    sub_60427A10(dword_60C9BBD4, v48, 0);
    FIELD_U8(v48, 436) = 0;
    v160 = v48 + 200;
    sead__PtrArrayImpl__allocBuffer(v48 + 200, FIELD_U16(v48, 64));
    v158 = v48 + 212;
    sead__PtrArrayImpl__allocBuffer(v48 + 212, FIELD_U16(v48, 64));
    v128 = FIELD_U16(v48, 64);
    if ( FIELD_U16(v48, 64) )
    {
      v129 = sub_608DE334(28 * v128, v90, 4);
      if ( v129 )
      {
        FIELD_U32(v48, 224) = v128;
        FIELD_U32(v48, 228) = v129;
      }
      v127 = FIELD_U16(v48, 64);
    }
    v130 = 1192 * v127;
    v131 = (_DWORD *)operator_new_8DE2C8(1192 * v127 + 8, v90, 4);
    v132 = v131;
    *v131 = 1192;
    v131[1] = v127;
    if ( v127 )
    {
      v133 = v131 + 154;
      do
      {
        *(v133 - 150) = 0;
        untitled_ref(v133 - 146);
        untitled_ref(v133);
        v130 -= 1192;
        v133 += 298;
      }
      while ( v130 );
    }
    v134 = 0;
    FIELD_U32(v48, 348) = 0;
    sub_6090B310(dword_60CCF464);
    if ( FIELD_U16(v48, 64) )
    {
      v135 = v132 + 2;
      v136 = 16;
      v137 = 0;
      v138 = 0;
      do
      {
        v139 = FIELD_U32(v48, 72);
        v162 = FIELD_U32(v48, 76);
        v141 = *(_DWORD *)(v139 + v134);
        v140 = v139 + v134;
        v142 = FIELD_U16(v141, 94);
        v164 = *(_BYTE *)(*(_DWORD *)(FIELD_U32(v48, 440) + 12) + 776 * v142 + 460);
        *v135 = v138;
        v135[1] = v142;
        v143 = *(_DWORD **)(v48 + 228);
        if ( FIELD_U32(v48, 224) > (unsigned int)v138 )
          v143 = (_DWORD *)((char *)v143 + v137);
        v144 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(v48, 440) + 16) + v136);
        *v143 = v144;
        v143[1] = v144 + 76;
        v143[2] = v144 + 80;
        v143[3] = v144 + 84;
        v143[4] = v144 + 88;
        v143[5] = v144 + 72;
        v143[6] = v144 + 68;
        v48 = v154;
        sub_60433658(v154, v135, v162 + 72 * v142, v140, v147, v148);
        if ( (v164 & 6 | 1) == 1 )
        {
          v145 = FIELD_U32(v154, 200);
          if ( v145 < FIELD_U32(v154, 204) )
          {
            *(_DWORD *)(FIELD_U32(v154, 208) + 4 * v145) = v135;
            ++FIELD_U32(v154, 200);
          }
        }
        else
        {
          v146 = FIELD_U32(v154, 212);
          if ( v146 < FIELD_U32(v154, 216) )
          {
            *(_DWORD *)(FIELD_U32(v154, 220) + 4 * v146) = v135;
            ++FIELD_U32(v154, 212);
          }
        }
        ++v138;
        v137 += 28;
        v136 += 3016;
        v135 += 298;
        v134 += 56;
      }
      while ( v138 < FIELD_U16(v154, 64) );
    }
    sub_6090B32C(dword_60CCF464);
    sub_608DECA0(v160, sub_60433F00);
    return sub_608DECA0(v158, sub_60433F00);
  }
  return result;
}
