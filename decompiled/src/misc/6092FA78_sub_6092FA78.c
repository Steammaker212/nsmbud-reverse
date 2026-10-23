/* sub_6092FA78
 * address: 0x6092FA78   size: 1224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092FA78(int a1, int a2, int a3)
{
  _BOOL4 v6; // r5
  _BYTE *v7; // r0
  _BOOL4 v8; // r7
  int v9; // r8
  int v10; // r7
  int v11; // r3
  int v12; // r4
  int v13; // r5
  int v14; // r6
  int v15; // r3
  int v16; // r4
  int v17; // r5
  int v18; // r6
  int v19; // r3
  int v20; // r4
  int v21; // r5
  int v22; // r6
  __int16 v23; // r2
  unsigned int *v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r2
  unsigned int v27; // r1
  unsigned int v28; // r7
  unsigned int v29; // r0
  int v30; // r0
  int v31; // r1
  _BYTE *v32; // r0
  unsigned int *v33; // r0
  unsigned int v34; // r1
  int v35; // r0
  unsigned int *v36; // r0
  unsigned int v37; // r1
  unsigned __int8 *v38; // r0
  int v39; // r0
  int v40; // r0
  int *v41; // r0
  bool v42; // zf
  int v43; // r1
  int v44; // r5
  int result; // r0
  int v46; // r3
  int v47; // r4
  int v48; // r5
  int v49; // r6
  int v50; // r3
  int v51; // r4
  int v52; // r5
  int v53; // r6
  float *v54; // r5
  int v55; // r0
  int v56; // r5
  int v57; // r0
  int v58; // [sp+Ch] [bp-12Ch]
  _BYTE v59[24]; // [sp+10h] [bp-128h] BYREF
  _BYTE v60[24]; // [sp+28h] [bp-110h] BYREF
  _DWORD v61[26]; // [sp+40h] [bp-F8h] BYREF
  _DWORD v62[36]; // [sp+A8h] [bp-90h] BYREF

  v6 = 0;
  v7 = *(_BYTE **)(a3 + 12);
  if ( v7[28] )
  {
    if ( !v7[12] )
    {
      v8 = 0;
      if ( byte_60C5E0C8 )
      {
        v8 = 0;
        v6 = v7[76] == 0;
      }
      goto LABEL_10;
    }
LABEL_9:
    v8 = 0;
    goto LABEL_10;
  }
  if ( !v7[12] || v7[44] )
    goto LABEL_9;
  v8 = 0;
  if ( byte_60C5E0C8 )
  {
    v6 = 0;
    v8 = v7[76] == 0;
  }
LABEL_10:
  sub_6090B350((int)v62);
  if ( v6 )
  {
    LOWORD(v62[0]) = 1;
    LOBYTE(v62[22]) = 2;
  }
  else if ( v8 )
  {
    LOWORD(v62[0]) = 1;
    LOBYTE(v62[22]) = 5;
  }
  else
  {
    LOWORD(v62[0]) = 0;
  }
  v62[7] = v62[7] & 0xFFFFFFF0 | 7;
  if ( FIELD_U8(a1, 204) )
  {
    v58 = a1;
    v9 = FIELD_U32(a3, 8);
    FIELD_U32(v9, 716) = v9 + 752;
    v10 = FIELD_U32(a3, 8);
    v11 = FIELD_U32(v10, 1124);
    v12 = FIELD_U32(v10, 1128);
    v13 = FIELD_U32(v10, 1132);
    v14 = FIELD_U32(v10, 1136);
    FIELD_U32(v10, 752) = FIELD_U32(v10, 1120);
    FIELD_U32(v10, 756) = v11;
    FIELD_U32(v10, 760) = v12;
    FIELD_U32(v10, 764) = v13;
    FIELD_U32(v10, 768) = v14;
    v15 = FIELD_U32(v10, 1144);
    v16 = FIELD_U32(v10, 1148);
    v17 = FIELD_U32(v10, 1152);
    v18 = FIELD_U32(v10, 1156);
    FIELD_U32(v10, 772) = FIELD_U32(v10, 1140);
    FIELD_U32(v10, 776) = v15;
    FIELD_U32(v10, 780) = v16;
    FIELD_U32(v10, 784) = v17;
    FIELD_U32(v10, 788) = v18;
    v19 = FIELD_U32(v10, 1164);
    v20 = FIELD_U32(v10, 1168);
    v21 = FIELD_U32(v10, 1172);
    v22 = FIELD_U32(v10, 1176);
    FIELD_U32(v10, 792) = FIELD_U32(v10, 1160);
    FIELD_U32(v10, 796) = v19;
    FIELD_U32(v10, 800) = v20;
    FIELD_U32(v10, 804) = v21;
    FIELD_U32(v10, 808) = v22;
    v23 = FIELD_U16(v10, 1180);
    FIELD_U8(v10, 814) = FIELD_U8(v10, 1182);
    FIELD_U16(v10, 812) = v23;
    sub_60917754(v10 + 816, v10 + 1184);
    FIELD_U32(v10, 1016) = FIELD_U32(v10, 1384);
    v24 = (unsigned int *)(v10 + 1024);
    do
      v25 = __ldrex(v24);
    while ( __strex(v25 | 4, v24) );
    if ( FIELD_U16(v10, 1028) )
    {
      do
        v26 = __ldrex(v24);
      while ( __strex(v26 | 2, v24) );
      FIELD_U16(v10, 1028) = 0;
    }
    if ( FIELD_U8(v10, 1030) )
    {
      do
        v27 = __ldrex(v24);
      while ( __strex(v27 | 1, v24) );
      FIELD_U8(v10, 1030) = 0;
    }
    sub_6091AC94(v10 + 752);
    v28 = 0;
    v29 = FIELD_U16(v9, 1144);
    if ( v29 <= 1 )
      v29 = 1;
    if ( v29 == FIELD_U32(a3, 28) )
    {
      v30 = sub_609200A0(v9 + 1120);
      v28 = 0;
      v31 = FIELD_U16(v9, 1146);
      if ( v30 > v31 )
        v31 = v30;
      if ( v31 == FIELD_U32(a3, 32) )
        v28 = 1;
    }
    sub_60920EC8(FIELD_U32(a3, 8) + 1800, (int *)(v9 + 1120));
    v32 = *(_BYTE **)(a3 + 8);
    v32[2116] = 1;
    v32[2117] = 1;
    v32[2118] = 1;
    v33 = (unsigned int *)(v32 + 2128);
    do
      v34 = __ldrex(v33);
    while ( __strex(v34 | 4, v33) );
    v35 = FIELD_U32(a3, 8);
    FIELD_F32(v35, 2104) = (float)v28;
    FIELD_F32(v35, 2108) = (float)v28;
    FIELD_U32(v35, 2112) = 0;
    v36 = (unsigned int *)(v35 + 2128);
    a1 = v58;
    do
      v37 = __ldrex(v36);
    while ( __strex(v37 | 8, v36) );
    sub_60930034(FIELD_U32(a3, 8), a2, FIELD_U32(a3, 8) + 688, v28, 0);
    qmemcpy(v61, v62, sizeof(v61));
    LOWORD(v61[0]) = 0;
    v61[1] &= ~1u;
    v61[7] |= 0xFu;
    v38 = (unsigned __int8 *)v61;
  }
  else
  {
    v39 = ((int (__fastcall *)(_DWORD *, _DWORD))loc_6090E438)(v61, FIELD_U32(a3, 16));
    sub_6090E560(v39, a2, *(float **)(a3 + 16));
    sub_6090B260(FIELD_U32(a3, 16));
    v38 = (unsigned __int8 *)v62;
  }
  sub_6090B4B0(v38, a2);
  v40 = FIELD_U8(a3, 36);
  if ( FIELD_U32(a1, 1600) == 1 )
  {
    v41 = (int *)(FIELD_U32(a3, 12) + 4 * v40 + 692);
    goto LABEL_47;
  }
  v42 = FIELD_U8(a1, 172) == 0;
  if ( FIELD_U8(a1, 172) )
    v42 = FIELD_U32(a1, 768) == 0;
  if ( v42 )
  {
    v43 = FIELD_U32(a3, 12);
LABEL_44:
    v41 = (int *)(v43 + 4 * v40 + 700);
    goto LABEL_47;
  }
  v43 = FIELD_U32(a3, 12);
  if ( !FIELD_U8(a1, 60) )
    goto LABEL_44;
  v41 = (int *)(v43 + 4 * v40 + 708);
LABEL_47:
  v44 = *v41;
  sub_6091DD8C(*v41, a2);
  ((void (__fastcall *)(int, int, int, int))loc_60930428)(a1, a2, a3, v44);
  if ( *(_BYTE *)(FIELD_U32(a3, 12) + 76) )
    ((void (*)(void))loc_60930AA8)();
  sub_609301A4(a1, a2, a3);
  result = FIELD_U8(a1, 204);
  if ( FIELD_U8(a1, 204) )
  {
    v46 = FIELD_U32(a3, 4);
    v47 = FIELD_U32(a3, 8);
    v48 = FIELD_U32(a3, 12);
    v49 = FIELD_U32(a3, 16);
    v61[0] = *(_DWORD *)a3;
    v61[1] = v46;
    v61[2] = v47;
    v61[3] = v48;
    v61[4] = v49;
    v50 = FIELD_U32(a3, 24);
    v51 = FIELD_U32(a3, 28);
    v52 = FIELD_U32(a3, 32);
    v53 = FIELD_U32(a3, 36);
    v61[5] = FIELD_U32(a3, 20);
    v61[6] = v50;
    v61[7] = v51;
    v61[8] = v52;
    v61[9] = v53;
    v61[1] = 4;
    sub_6090B8B4((unsigned __int8 *)v62, a2);
    sub_6090BAA4((int)v62, a2);
    sub_6090BA14((int)v62, a2);
    sub_6091ADF4(*(_DWORD *)(FIELD_U32(a3, 8) + 716), a2);
    ((void (__fastcall *)(_BYTE *, int))loc_6090E438)(v60, v61[2] + 688);
    v54 = (float *)v61[4];
    v55 = ((int (__fastcall *)(_BYTE *, _DWORD))loc_6090E438)(v59, v61[4]);
    sub_6090E560(v55, a2, v54);
    sub_6090B260((int)v54);
    v56 = *(_DWORD *)(v61[3] + 720);
    v57 = sub_6091DD8C(v56, a2);
    ((void (__fastcall *)(int, int, _DWORD *, int))loc_60930DEC)(v57, a2, v61, v56);
    return sub_609301A4(a1, a2, v61);
  }
  return result;
}
