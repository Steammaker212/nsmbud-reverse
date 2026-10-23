/* sub_6092F064
 * address: 0x6092F064   size: 1164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6092F064(int a1, int a2, int a3)
{
  int v5; // r3
  int v6; // r0
  int v7; // r11
  unsigned __int8 *v8; // r0
  int v9; // r3
  int v10; // r4
  int v11; // r6
  int v12; // r7
  int v13; // r3
  int v14; // r4
  int v15; // r6
  int v16; // r7
  int v17; // r3
  int v18; // r4
  int v19; // r6
  int v20; // r7
  __int16 v21; // r2
  unsigned int *v22; // r0
  unsigned int v23; // r1
  unsigned int v24; // r2
  unsigned int v25; // r2
  _DWORD *v26; // r6
  unsigned int *v27; // r9
  unsigned int v28; // r0
  int v29; // r4
  int v30; // r11
  float v31; // s0
  unsigned int v32; // r0
  char *v33; // r2
  int *v34; // r0
  unsigned int v35; // r7
  int v36; // r0
  unsigned int v37; // r1
  unsigned int v38; // r1
  float v39; // s2
  _DWORD *v40; // r0
  unsigned int v41; // r0
  float v42; // s0
  unsigned int v43; // r0
  unsigned int result; // r0
  int v45; // [sp+8h] [bp-E0h]
  int v46; // [sp+Ch] [bp-DCh]
  int *v47; // [sp+1Ch] [bp-CCh]
  float *v48; // [sp+28h] [bp-C0h]
  int v49; // [sp+2Ch] [bp-BCh]
  int v51; // [sp+34h] [bp-B4h]
  float v52[4]; // [sp+38h] [bp-B0h] BYREF
  __int16 v53; // [sp+48h] [bp-A0h] BYREF
  int v54; // [sp+4Ch] [bp-9Ch]
  unsigned int v55; // [sp+64h] [bp-84h]

  v5 = 0;
  v6 = FIELD_U32(a3, 12);
  if ( FIELD_U8(v6, 140) )
  {
    v5 = 0;
    if ( FIELD_U32(v6, 736) )
    {
      v5 = 0;
      if ( FIELD_U8(v6, 28) )
      {
        v5 = 1;
        if ( (int)FIELD_F32(v6, 284) != (FIELD_F32(v6, 284) < 0.0
                                        && (float)(int)FIELD_F32(v6, 284) != FIELD_F32(v6, 284)) )
        {
          v5 = FIELD_U8(v6, 204);
          if ( FIELD_U8(v6, 204) )
            v5 = 1;
        }
      }
    }
  }
  v46 = v5;
  v7 = FIELD_U32(a3, 8);
  v8 = (unsigned __int8 *)sub_6090B350((int)&v53);
  v54 &= ~1u;
  v55 = (unsigned __int8)(8 * FIELD_U8(a1, 204)) | 7 | v55 & 0xFFFFFFF0;
  v53 = 0;
  sub_6090B4B0(v8, a2);
  v51 = v7 + 688;
  sub_60919F70((_DWORD *)(v7 + 688));
  FIELD_U32(v7, 748) = 0;
  FIELD_U32(v7, 716) = v7 + 752;
  v49 = v7 + 1120;
  v9 = FIELD_U32(v7, 1124);
  v10 = FIELD_U32(v7, 1128);
  v11 = FIELD_U32(v7, 1132);
  v12 = FIELD_U32(v7, 1136);
  FIELD_U32(v7, 752) = FIELD_U32(v7, 1120);
  FIELD_U32(v7, 756) = v9;
  FIELD_U32(v7, 760) = v10;
  FIELD_U32(v7, 764) = v11;
  FIELD_U32(v7, 768) = v12;
  v13 = FIELD_U32(v7, 1144);
  v14 = FIELD_U32(v7, 1148);
  v15 = FIELD_U32(v7, 1152);
  v16 = FIELD_U32(v7, 1156);
  FIELD_U32(v7, 772) = FIELD_U32(v7, 1140);
  FIELD_U32(v7, 776) = v13;
  FIELD_U32(v7, 780) = v14;
  FIELD_U32(v7, 784) = v15;
  FIELD_U32(v7, 788) = v16;
  v17 = FIELD_U32(v7, 1164);
  v18 = FIELD_U32(v7, 1168);
  v19 = FIELD_U32(v7, 1172);
  v20 = FIELD_U32(v7, 1176);
  FIELD_U32(v7, 792) = FIELD_U32(v7, 1160);
  FIELD_U32(v7, 796) = v17;
  FIELD_U32(v7, 800) = v18;
  FIELD_U32(v7, 804) = v19;
  FIELD_U32(v7, 808) = v20;
  v21 = FIELD_U16(v7, 1180);
  FIELD_U8(v7, 814) = FIELD_U8(v7, 1182);
  FIELD_U16(v7, 812) = v21;
  sub_60917754(v7 + 816, v7 + 1184);
  FIELD_U32(v7, 1016) = FIELD_U32(v7, 1384);
  v22 = (unsigned int *)(v7 + 1024);
  do
    v23 = __ldrex(v22);
  while ( __strex(v23 | 4, v22) );
  if ( FIELD_U16(v7, 1028) )
  {
    do
      v24 = __ldrex(v22);
    while ( __strex(v24 | 2, v22) );
    FIELD_U16(v7, 1028) = 0;
  }
  if ( FIELD_U8(v7, 1030) )
  {
    do
      v25 = __ldrex(v22);
    while ( __strex(v25 | 1, v22) );
    FIELD_U8(v7, 1030) = 0;
  }
  v47 = (int *)(v7 + 1104);
  sub_6091AC94(v7 + 752);
  v26 = *(_DWORD **)(FIELD_U32(a3, 12) + 684);
  sub_6091DD8C((int)v26, a2);
  FIELD_U16(v7, 1420) = 257;
  FIELD_U8(v7, 1422) = 1;
  v27 = (unsigned int *)(v7 + 1432);
  do
    v28 = __ldrex(v27);
  while ( __strex(v28 | 4, v27) );
  v45 = v7;
  v29 = FIELD_U8(v7, 1153);
  if ( FIELD_U8(v7, 1153) )
  {
    v30 = 0;
    v48 = (float *)(a1 + 1604);
    while ( !v30 )
    {
      if ( v46 != 1 )
      {
        v33 = (char *)v26[159];
        v34 = *(int **)(a3 + 8);
LABEL_26:
        sub_60920FDC(v34, a2, v33);
        v35 = FIELD_U16(v45, 1144);
        v36 = sub_609200A0(v49);
        v37 = FIELD_U16(v45, 1146);
        if ( v36 <= (int)(v37 >> v30) )
          v36 = v37 >> v30;
        v38 = 1;
        if ( (int)(v35 >> v30) > 1 )
          v38 = v35 >> v30;
        v39 = *v48;
        v52[0] = *v48 * (float)(0.5 / (float)v38);
        v52[1] = v39 * (float)(0.5 / (float)(unsigned int)v36);
        v52[2] = v39 * 0.0;
        v52[3] = v39 * 0.0;
        v40 = (_DWORD *)v26[153];
        if ( v26[152] > 7u )
          v40 += 21;
        if ( *v40 != -1 )
          v40 = (_DWORD *)sub_6091B890(v40, a2, 4, (int)v52);
        sub_60930034(v40, a2, v51, v30, 0);
        sub_609301A4(a1, a2, a3);
        sub_6091ADF4(*(_DWORD *)(FIELD_U32(a3, 8) + 716), a2);
        goto LABEL_35;
      }
      sub_60930034(1, a2, v51, 0, 0);
      sub_6093F664(a2, FIELD_U32(a3, 8));
      sub_6091ADF4(*(_DWORD *)(FIELD_U32(a3, 8) + 716), a2);
      sub_6091DD8C((int)v26, a2);
LABEL_35:
      if ( ++v30 == v29 )
        goto LABEL_36;
    }
    v31 = (float)(unsigned int)(v30 - 1);
    FIELD_F32(v45, 1408) = v31;
    FIELD_F32(v45, 1412) = v31;
    FIELD_U32(v45, 1416) = 0;
    do
      v32 = __ldrex(v27);
    while ( __strex(v32 | 8, v27) );
    v33 = (char *)v26[159];
    v34 = v47;
    goto LABEL_26;
  }
LABEL_36:
  FIELD_U16(v45, 1420) = 257;
  FIELD_U8(v45, 1422) = 2;
  do
    v41 = __ldrex(v27);
  while ( __strex(v41 | 4, v27) );
  v42 = (float)FIELD_U8(v45, 1153);
  FIELD_U32(v45, 1408) = 0;
  FIELD_F32(v45, 1412) = v42 + -1.0;
  FIELD_U32(v45, 1416) = 0;
  do
  {
    v43 = __ldrex(v27);
    result = v43 | 8;
  }
  while ( __strex(result, v27) );
  return result;
}
