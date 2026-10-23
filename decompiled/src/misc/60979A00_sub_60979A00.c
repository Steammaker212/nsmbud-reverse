/* sub_60979A00
 * address: 0x60979A00   size: 1108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60979A00(int a1, int *a2)
{
  int v2; // r8
  int v4; // r3
  int v5; // r5
  int v6; // r6
  int v7; // r7
  int v8; // r3
  int v9; // r5
  int v10; // r6
  int v11; // r7
  int v12; // r3
  int v13; // r5
  int v14; // r6
  int v15; // r7
  int v16; // r7
  __int16 v17; // r2
  int v18; // r0
  int v19; // r1
  int v20; // r0
  int v21; // r0
  int v22; // r1
  int v23; // r1
  int v24; // r0
  int v25; // r2
  int v26; // r4
  int v27; // r8
  unsigned int v28; // r0
  int v29; // r10
  int v30; // r9
  unsigned __int16 *v31; // r10
  int v32; // t1
  _BYTE *v33; // r11
  int v34; // r5
  int v35; // r3
  int v36; // r4
  int v37; // r6
  int v38; // r7
  unsigned __int16 *v39; // r0
  int v40; // r3
  int v41; // r4
  int v42; // r6
  int v43; // r7
  unsigned __int16 *v44; // r0
  int v45; // r3
  int v46; // r4
  int v47; // r6
  int v48; // r7
  unsigned __int16 *v49; // r0
  unsigned __int16 v50; // r2
  unsigned int *v51; // r6
  int v52; // r4
  unsigned int v53; // r1
  unsigned int v54; // r0
  unsigned int v55; // r0
  unsigned int v56; // r0
  unsigned int v57; // r0
  char v58; // r0
  unsigned int *v59; // r0
  unsigned int v60; // r1
  unsigned int v62; // [sp+0h] [bp-88h]
  int v63; // [sp+4h] [bp-84h]
  unsigned __int16 *v64; // [sp+8h] [bp-80h]
  int v65; // [sp+Ch] [bp-7Ch]
  int v66; // [sp+10h] [bp-78h]
  int v67; // [sp+14h] [bp-74h]
  unsigned __int16 *v68; // [sp+18h] [bp-70h]
  int v69; // [sp+1Ch] [bp-6Ch]
  int v70; // [sp+20h] [bp-68h]
  int v72; // [sp+28h] [bp-60h]
  int v73; // [sp+2Ch] [bp-5Ch]
  int v74; // [sp+30h] [bp-58h]
  int v75; // [sp+34h] [bp-54h]
  unsigned __int16 *v76; // [sp+38h] [bp-50h]
  int v77; // [sp+3Ch] [bp-4Ch]
  int v78[3]; // [sp+40h] [bp-48h] BYREF
  int v79; // [sp+4Ch] [bp-3Ch] BYREF
  int v80; // [sp+50h] [bp-38h]
  int v81; // [sp+54h] [bp-34h]
  int v82[12]; // [sp+58h] [bp-30h] BYREF

  v2 = FIELD_U32(a1, 208);
  if ( !v2 || (*(_BYTE *)(FIELD_U32(a1, 204) + 9748) & 4) != 0 )
  {
    v79 = *a2;
    v80 = a2[1];
    v81 = a2[2];
    sub_60913AE8((int)&v79, FIELD_U32(a1, 604));
    v82[0] = v79;
    v82[1] = v80;
    v82[2] = v81;
    sub_609208DC((int *)(a1 + 568), v82, 0);
    v80 += FIELD_U32(a1, 608);
    sub_60913AE8((int)&v79, FIELD_U32(a1, 604));
    v78[0] = v79;
    v78[1] = v80;
    v78[2] = v81;
    v16 = a1;
    sub_60920AAC((_DWORD *)(a1 + 568), v78);
    v18 = v80 + FIELD_U32(a1, 612) - a2[1];
  }
  else
  {
    v4 = FIELD_U32(v2, 572);
    v5 = FIELD_U32(v2, 576);
    v6 = FIELD_U32(v2, 580);
    v7 = FIELD_U32(v2, 584);
    FIELD_U32(a1, 568) = FIELD_U32(v2, 568);
    FIELD_U32(a1, 572) = v4;
    FIELD_U32(a1, 576) = v5;
    FIELD_U32(a1, 580) = v6;
    FIELD_U32(a1, 584) = v7;
    v8 = FIELD_U32(v2, 592);
    v9 = FIELD_U32(v2, 596);
    v10 = FIELD_U32(v2, 600);
    v11 = FIELD_U32(v2, 604);
    FIELD_U32(a1, 588) = FIELD_U32(v2, 588);
    FIELD_U32(a1, 592) = v8;
    FIELD_U32(a1, 596) = v9;
    FIELD_U32(a1, 600) = v10;
    FIELD_U32(a1, 604) = v11;
    v12 = FIELD_U32(v2, 612);
    v13 = FIELD_U32(v2, 616);
    v14 = FIELD_U32(v2, 620);
    v15 = FIELD_U32(v2, 624);
    FIELD_U32(a1, 608) = FIELD_U32(v2, 608);
    FIELD_U32(a1, 612) = v12;
    FIELD_U32(a1, 616) = v13;
    FIELD_U32(a1, 620) = v14;
    FIELD_U32(a1, 624) = v15;
    v16 = a1;
    v17 = FIELD_U16(v2, 628);
    FIELD_U8(a1, 630) = FIELD_U8(v2, 630);
    FIELD_U16(a1, 628) = v17;
    sub_60917754(a1 + 632, v2 + 632);
    FIELD_U32(a1, 832) = FIELD_U32(v2, 832);
    v18 = 0;
  }
  v19 = v16;
  v63 = v18;
  do
  {
    v20 = v19;
    v19 = FIELD_U32(v19, 208);
  }
  while ( v19 );
  v21 = FIELD_U32(v20, 1764);
  if ( v21 == 2 )
  {
    v22 = 5;
  }
  else if ( v21 == 1 )
  {
    v22 = 3;
  }
  else
  {
    v22 = 1;
    if ( !v21 )
      v22 = (FIELD_U8(v16, 840) & 1) + 1;
  }
  v62 = v22;
  v70 = v16 + 568;
  sub_60920064(v16 + 568, v22, 1);
  v23 = v16;
  do
  {
    v24 = v23;
    v23 = FIELD_U32(v23, 208);
  }
  while ( v23 );
  v66 = FIELD_U32(v16, 212);
  if ( v66 )
  {
    v25 = 0;
    v77 = dword_60B7267C[FIELD_U32(v24, 1956)];
    v65 = FIELD_U32(v16, 216);
    v69 = v16 + 632;
    v68 = (unsigned __int16 *)(v16 + 596);
    v64 = (unsigned __int16 *)(v16 + 592);
    do
    {
      v67 = v25;
      v26 = v65 + 2224 * v25;
      sub_60919F70((_DWORD *)v26);
      v27 = 0;
      FIELD_U32(v26, 60) = 0;
      v28 = *v64;
      if ( v28 <= 1 )
        v28 = 1;
      FIELD_F32(v26, 4) = (float)v28;
      FIELD_F32(v26, 8) = (float)v28;
      FIELD_U32(v26, 12) = 0;
      FIELD_U32(v26, 16) = 0;
      FIELD_F32(v26, 20) = (float)v28;
      v72 = v26;
      FIELD_F32(v26, 24) = (float)v28;
      do
      {
        v29 = v72 + 344 * v27;
        v73 = FIELD_S8(v16, 842);
        v30 = sub_609200B8(v70);
        v32 = FIELD_U16(v29, 340);
        v31 = (unsigned __int16 *)(v29 + 340);
        v74 = v32;
        v33 = v31 + 1;
        v75 = *((unsigned __int8 *)v31 + 2);
        v34 = *v68;
        v76 = v31 - 138;
        v35 = FIELD_U32(v70, 4);
        v36 = FIELD_U32(v70, 8);
        v37 = FIELD_U32(v70, 12);
        v38 = FIELD_U32(v70, 16);
        *(_DWORD *)v76 = *(_DWORD *)v70;
        *((_DWORD *)v76 + 1) = v35;
        *((_DWORD *)v76 + 2) = v36;
        *((_DWORD *)v76 + 3) = v37;
        *((_DWORD *)v76 + 4) = v38;
        v39 = v31 - 128;
        v40 = FIELD_U32(v70, 24);
        v41 = FIELD_U32(v70, 28);
        v42 = FIELD_U32(v70, 32);
        v43 = FIELD_U32(v70, 36);
        *(_DWORD *)v39 = FIELD_U32(v70, 20);
        *((_DWORD *)v39 + 1) = v40;
        *((_DWORD *)v39 + 2) = v41;
        *((_DWORD *)v39 + 3) = v42;
        *((_DWORD *)v39 + 4) = v43;
        v44 = v31 - 118;
        v45 = FIELD_U32(v70, 44);
        v46 = FIELD_U32(v70, 48);
        v47 = FIELD_U32(v70, 52);
        v48 = FIELD_U32(v70, 56);
        *(_DWORD *)v44 = FIELD_U32(v70, 40);
        *((_DWORD *)v44 + 1) = v45;
        *((_DWORD *)v44 + 2) = v46;
        *((_DWORD *)v44 + 3) = v47;
        *((_DWORD *)v44 + 4) = v48;
        v49 = v31 - 108;
        v50 = FIELD_U16(v70, 60);
        v16 = a1;
        *((_BYTE *)v49 + 2) = FIELD_U8(v70, 62);
        *v49 = v50;
        sub_60917754((int)(v31 - 106), v69);
        v51 = (unsigned int *)(v31 - 2);
        if ( v30 > v34 )
          v34 = v30;
        v52 = v34 - 1;
        *((_DWORD *)v31 - 3) = FIELD_U32(a1, 832);
        do
          v53 = __ldrex(v51);
        while ( __strex(v53 | 4, v51) );
        if ( v27 + v73 * v77 < v52 )
          v52 = v27 + v73 * v77;
        if ( *v31 != v74 )
        {
          do
            v54 = __ldrex(v51);
          while ( __strex(v54 | 2, v51) );
          *v31 = v74;
        }
        if ( (unsigned __int8)*v33 != v75 )
        {
          do
            v55 = __ldrex(v51);
          while ( __strex(v55 | 1, v51) );
          *v33 = v75;
        }
        sub_6091AC94((int)v76);
        if ( *v31 != v52 )
        {
          do
            v56 = __ldrex(v51);
          while ( __strex(v56 | 2, v51) );
          *v31 = v52;
        }
        if ( *v33 )
        {
          do
            v57 = __ldrex(v51);
          while ( __strex(v57 | 1, v51) );
          *v33 = 0;
        }
        if ( v27 < v77 )
          *(_DWORD *)(v72 + 4 * v27 + 28) = v76;
        ++v27;
      }
      while ( v27 != 6 );
      v25 = v67 + 1;
    }
    while ( v67 + 1 != v66 );
  }
  FIELD_U8(v16, 540) = 1;
  FIELD_U8(v16, 541) = 1;
  v58 = 0;
  if ( v62 > 1 )
    v58 = 2;
  FIELD_U8(v16, 542) = v58;
  v59 = (unsigned int *)(v16 + 552);
  do
    v60 = __ldrex(v59);
  while ( __strex(v60 | 4, v59) );
  sub_60920EC8(v16 + 224, (int *)v70);
  FIELD_U8(v16, 840) |= 8u;
  return v63;
}
