/* sub_6097B2F8
 * address: 0x6097B2F8   size: 1792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6097B2F8(unsigned int a1, int a2, unsigned int a3, int a4)
{
  unsigned int v4; // r3
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r2
  int v9; // r1
  int v10; // r0
  int v11; // r0
  unsigned int v12; // r2
  unsigned int v13; // r1
  unsigned int v14; // r1
  unsigned int v15; // r0
  int v16; // r2
  unsigned int v17; // r1
  unsigned int v18; // r0
  unsigned __int16 *v19; // r7
  int v20; // r9
  int v21; // r4
  int i; // r10
  unsigned int v23; // r0
  int v24; // r4
  int v25; // r1
  unsigned int v26; // r6
  unsigned int v27; // r7
  bool v28; // cc
  int v29; // r0
  unsigned int v30; // r3
  int v31; // r0
  unsigned int v32; // r2
  int v33; // r0
  int v34; // r1
  int v35; // r1
  _DWORD *v36; // r1
  int v37; // r3
  unsigned int v38; // r0
  unsigned int v39; // r2
  unsigned int v40; // r1
  unsigned int v41; // r1
  unsigned int v42; // r0
  char *v43; // r2
  int *v44; // r0
  char *v45; // r8
  unsigned int v46; // r8
  char *v47; // r5
  char *v48; // r3
  unsigned int v49; // r5
  unsigned int v50; // r1
  unsigned int result; // r0
  unsigned int v52; // r9
  unsigned int v53; // r0
  float v54; // s0
  int v55; // r0
  unsigned int *v56; // r1
  unsigned int v57; // r2
  int v58; // r0
  unsigned int *v59; // r1
  unsigned int v60; // r2
  int v61; // r0
  unsigned int *v62; // r1
  unsigned int v63; // r2
  int v64; // r0
  unsigned int *v65; // r1
  unsigned int v66; // r2
  int v67; // r0
  unsigned int *v68; // r1
  unsigned int v69; // r2
  int v70; // r0
  unsigned int *v71; // r1
  unsigned int v72; // r2
  int v73; // r0
  unsigned int v74; // r0
  int v75; // r10
  unsigned int v76; // r11
  int v77; // r5
  unsigned int v78; // r4
  char *v79; // r7
  __int64 v80; // r0
  int v81; // kr04_4
  int v82; // r0
  int v83; // r6
  int v84; // r7
  int v85; // r5
  int v86; // r8
  __int64 v87; // r0
  int v88; // [sp+0h] [bp-78h]
  int v89; // [sp+4h] [bp-74h]
  int v90; // [sp+18h] [bp-60h]
  int v93; // [sp+24h] [bp-54h]
  int v94; // [sp+24h] [bp-54h]
  int v95; // [sp+28h] [bp-50h]
  unsigned __int16 *v96; // [sp+28h] [bp-50h]
  int v97; // [sp+2Ch] [bp-4Ch]
  int v98; // [sp+30h] [bp-48h]
  int v99; // [sp+30h] [bp-48h]
  unsigned int v100; // [sp+34h] [bp-44h]
  _QWORD v101[8]; // [sp+38h] [bp-40h] BYREF

  v4 = a1;
  v6 = FIELD_S8(a1, 845);
  v100 = v4;
  if ( v6 != -1 )
  {
    v7 = FIELD_U32(v4, 204);
    v8 = FIELD_U32(v7, 400);
    v9 = FIELD_U32(v7, 404);
    if ( v8 > v6 )
      v9 += 2088 * (__int16)v6;
    v98 = v9;
    do
    {
      v10 = v9;
      v9 = FIELD_U32(v9, 208);
    }
    while ( v9 );
    v11 = FIELD_U32(v10, 1956);
    v12 = v4;
    do
    {
      v13 = v12;
      v12 = FIELD_U32(v12, 208);
    }
    while ( v12 );
    if ( v11 == FIELD_U32(v13, 1956) )
    {
      v14 = v4;
      do
      {
        v15 = v14;
        v14 = FIELD_U32(v14, 208);
      }
      while ( v14 );
      v16 = 6;
      if ( FIELD_U32(v15, 1956) != 2 )
      {
        v17 = v4;
        do
        {
          v18 = v17;
          v17 = FIELD_U32(v17, 208);
        }
        while ( v17 );
        v16 = 2;
        if ( !FIELD_U32(v18, 1956) )
          v16 = 1;
      }
      v19 = (unsigned __int16 *)(v4 + 568);
      v20 = 0;
      v95 = FIELD_S8(v98, 842) * (__int16)v16;
      v97 = v16;
      v93 = FIELD_S8(v4, 842) * (__int16)v16;
      do
      {
        v21 = FIELD_U8(v4, 601);
        if ( FIELD_U8(v98, 273) < (unsigned int)v21 )
          v21 = FIELD_U8(v98, 273);
        if ( v21 >= 1 )
        {
          for ( i = 0; i < v21; ++i )
            sub_60920328((unsigned __int16 *)(v98 + 240), a2, v19, v20 + v93, i, v20 + v95, i);
        }
        v4 = v100;
        ++v20;
      }
      while ( v20 < v97 );
    }
  }
  v23 = FIELD_U32(v4, 212);
  v24 = FIELD_U32(v4, 216);
  v25 = FIELD_U8(v4, 843);
  v26 = v4;
  do
  {
    v27 = v4;
    v4 = FIELD_U32(v4, 208);
  }
  while ( v4 );
  v28 = v23 > a3;
  v29 = FIELD_U32(v27, 1956);
  if ( v28 )
    v24 += 2224 * a3;
  if ( v25 )
  {
    v30 = v26;
    v31 = (v29 << 6) - 8;
    do
    {
      v32 = v30;
      v30 = FIELD_U32(v30, 208);
    }
    while ( v30 );
    v33 = v31 + 8 * v25;
    v34 = FIELD_U32(v32, 1764);
    switch ( v34 )
    {
      case 1:
        v33 |= 2u;
        break;
      case 2:
        v33 |= 6u;
        break;
      case 3:
        v33 |= 4u;
        break;
    }
    v29 = (FIELD_U8(v26, 1780) ^ 1) + v33;
    v35 = 85;
  }
  else
  {
    v35 = 86;
  }
  v36 = *(_DWORD **)(*(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 4 * v35) + 4);
  if ( v29 <= 0 )
  {
    v99 = v36[3];
  }
  else
  {
    v37 = v36[5];
    v38 = v29 - 1;
    if ( v36[4] > v38 )
      v37 += 936 * v38;
    v99 = v37;
  }
  v39 = v26;
  do
  {
    v40 = v39;
    v39 = FIELD_U32(v39, 208);
  }
  while ( v39 );
  sub_6090B4B0(
    (unsigned __int8 *)(104 * (FIELD_U8(v26, 845) != 255) + *(_DWORD *)a4 + 208 * FIELD_U32(v40, 1956)),
    a2);
  sub_6091DD8C(v99, a2);
  v41 = v26;
  do
  {
    v42 = v41;
    v41 = FIELD_U32(v41, 208);
  }
  while ( v41 );
  v43 = *(char **)(v99 + 636);
  v44 = *(int **)(a4 + 4 * FIELD_U32(v42, 1956) + 4);
  if ( FIELD_U32(v99, 632) > 1u )
    v43 += 12;
  sub_60920FDC(v44, a2, v43);
  sub_60920FDC(*(int **)(a4 + 16), a2, *(char **)(v99 + 636));
  v45 = *(char **)(v99 + 620);
  v101[0] = FIELD_U16(v26, 1664) * (unsigned int)FIELD_U8(v26, 1661) * FIELD_U32(v26, 1640)
          + dword_60CC746C(v26 + 1672);
  sub_6041FB58(v26 + 1624, a2, v101, v45, 0, FIELD_U32(v26, 1636));
  v46 = FIELD_U32(v99, 616);
  v47 = *(char **)(v99 + 620);
  v101[0] = FIELD_U16(v24, 2168) * (unsigned int)FIELD_U8(v24, 2165) * FIELD_U32(v24, 2144)
          + dword_60CC746C(v24 + 2176);
  if ( v46 > 1 )
    v47 += 12;
  v48 = v47;
  v49 = v26;
  sub_6041FB58(v24 + 2128, a2, v101, v48, 0, FIELD_U32(v24, 2140));
  sub_60922278(dword_60CD0A28 + 2712, a2);
  v50 = v26;
  do
  {
    result = v50;
    v50 = FIELD_U32(v50, 208);
  }
  while ( v50 );
  if ( FIELD_U8(v26, 601) )
  {
    v52 = 0;
    v94 = v24;
    v90 = FIELD_U32(result, 1956);
    v96 = (unsigned __int16 *)(v26 + 592);
    do
    {
      v53 = *v96;
      if ( v53 <= 1 )
        v53 = 1;
      v54 = (float)(v53 >> v52);
      FIELD_F32(v24, 4) = v54;
      FIELD_F32(v24, 8) = v54;
      FIELD_U32(v24, 12) = 0;
      FIELD_U32(v24, 16) = 0;
      FIELD_F32(v24, 20) = v54;
      FIELD_F32(v24, 24) = v54;
      v55 = FIELD_U32(v24, 28);
      if ( FIELD_U8(v55, 278) != v52 )
      {
        v56 = (unsigned int *)(v55 + 272);
        do
          v57 = __ldrex(v56);
        while ( __strex(v57 | 1, v56) );
        FIELD_U8(v55, 278) = v52;
      }
      if ( (unsigned int)(v90 - 1) <= 1 )
      {
        v58 = FIELD_U32(v24, 32);
        if ( FIELD_U8(v58, 278) != v52 )
        {
          v59 = (unsigned int *)(v58 + 272);
          do
            v60 = __ldrex(v59);
          while ( __strex(v60 | 1, v59) );
          FIELD_U8(v58, 278) = v52;
        }
        if ( v90 == 2 )
        {
          v61 = FIELD_U32(v24, 36);
          if ( FIELD_U8(v61, 278) != v52 )
          {
            v62 = (unsigned int *)(v61 + 272);
            do
              v63 = __ldrex(v62);
            while ( __strex(v63 | 1, v62) );
            FIELD_U8(v61, 278) = v52;
          }
          v64 = FIELD_U32(v24, 40);
          if ( FIELD_U8(v64, 278) != v52 )
          {
            v65 = (unsigned int *)(v64 + 272);
            do
              v66 = __ldrex(v65);
            while ( __strex(v66 | 1, v65) );
            FIELD_U8(v64, 278) = v52;
          }
          v67 = FIELD_U32(v24, 44);
          if ( FIELD_U8(v67, 278) != v52 )
          {
            v68 = (unsigned int *)(v67 + 272);
            do
              v69 = __ldrex(v68);
            while ( __strex(v69 | 1, v68) );
            FIELD_U8(v67, 278) = v52;
          }
          v70 = FIELD_U32(v24, 48);
          if ( FIELD_U8(v70, 278) != v52 )
          {
            v71 = (unsigned int *)(v70 + 272);
            do
              v72 = __ldrex(v71);
            while ( __strex(v72 | 1, v71) );
            FIELD_U8(v70, 278) = v52;
          }
        }
      }
      sub_6090B260(v24);
      v73 = ((int (__fastcall *)(_QWORD *, int))loc_6090E438)(v101, v24);
      sub_6090E560(v73, a2, (float *)v24);
      v74 = FIELD_U32(v49, 1720);
      v75 = a2;
      v76 = v49;
      v77 = FIELD_U32(v49, 1724);
      if ( v74 > v52 )
        v77 += 96 * v52;
      v78 = FIELD_U32(v99, 616);
      v79 = *(char **)(v99 + 620);
      v80 = dword_60CC746C(v77 + 48);
      v81 = FIELD_U16(v77, 40) * FIELD_U8(v77, 37) * FIELD_U32(v77, 16);
      v101[0] = v80 + (unsigned int)v81;
      if ( v78 > 2 )
        v79 += 24;
      v89 = FIELD_U32(v77, 12);
      v82 = v77;
      v49 = v76;
      a2 = v75;
      sub_6041FB58(v82, v75, v101, v79, 0, v89);
      v83 = dword_60CD0A0C;
      v84 = FIELD_U32(dword_60CD0A0C, 920);
      if ( v84 )
      {
        v85 = FIELD_U32(v75, 192);
        v86 = FIELD_U32(dword_60CD0A0C, 904);
        v87 = dword_60CC746C(dword_60CD0A0C + 928);
        v88 = v87;
        LODWORD(v87) = v85;
        v49 = v100;
        dword_60CC7874(v87, v86, FIELD_U32(v83, 900), v84, v88, HIDWORD(v87));
      }
      result = FIELD_U8(v49, 601);
      v24 = v94;
      ++v52;
    }
    while ( v52 < result );
  }
  return result;
}
