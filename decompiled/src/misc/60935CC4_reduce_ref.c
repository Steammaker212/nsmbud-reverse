/* reduce_ref
 * address: 0x60935CC4   size: 1096   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall reduce_ref(int a1, int a2, unsigned int a3, int a4)
{
  unsigned int v4; // r7
  int v7; // r6
  int v8; // r9
  _WORD *v9; // r8
  int v10; // r11
  int v11; // r3
  int v12; // r4
  int v13; // r5
  int v14; // r7
  int v15; // r3
  int v16; // r4
  int v17; // r5
  int v18; // r7
  int v19; // r3
  int v20; // r4
  int v21; // r5
  int v22; // r7
  __int16 v23; // r2
  unsigned int *v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r1
  unsigned int v27; // r1
  float v28; // s0
  float v29; // s2
  float v30; // r0
  float v31; // r1
  bool v32; // cc
  float v33; // r2
  float v34; // r2
  int v35; // r0
  int v36; // r0
  unsigned int v37; // r0
  int v38; // r0
  signed int v39; // r1
  int v40; // r5
  _DWORD *v41; // r0
  char *v42; // r2
  int v43; // r7
  int v44; // r5
  int v45; // r8
  int v46; // r6
  __int64 v47; // r0
  int v49; // [sp+4h] [bp-8Ch]
  int v50; // [sp+8h] [bp-88h]
  int v51; // [sp+Ch] [bp-84h]
  int v52; // [sp+20h] [bp-70h]
  int v53; // [sp+24h] [bp-6Ch]
  int v55; // [sp+2Ch] [bp-64h]
  float *v56; // [sp+30h] [bp-60h]
  int v57; // [sp+38h] [bp-58h]
  float v58; // [sp+40h] [bp-50h] BYREF
  float v59; // [sp+44h] [bp-4Ch]
  float v60; // [sp+58h] [bp-38h] BYREF
  float v61; // [sp+5Ch] [bp-34h]

  v4 = FIELD_U32(a1, 1560);
  v7 = FIELD_U32(a1, 1564);
  v55 = FIELD_U32(a4, 4);
  v56 = *(float **)a4;
  v57 = FIELD_U32(a4, 8);
  sub_6090E7FC(v55, &v60, *(float **)a4);
  v58 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v59 = COERCE_FLOAT("reduce");
  v8 = sub_6093E338(
         dword_60CD09F8,
         a2,
         &v58,
         29,
         (unsigned int)(float)(v60 * 0.5),
         (unsigned int)(float)(v61 * 0.5),
         1,
         0,
         0,
         1,
         0);
  if ( v4 > a3 )
    v7 += 3608 * a3;
  sub_60920EC8(v7 + 760, (int *)v8);
  v9 = (_WORD *)(v7 + 348);
  v10 = FIELD_U16(v7, 348);
  v52 = FIELD_U8(v7, 350);
  v11 = FIELD_U32(v8, 4);
  v12 = FIELD_U32(v8, 8);
  v13 = FIELD_U32(v8, 12);
  v14 = FIELD_U32(v8, 16);
  FIELD_U32(v7, 72) = *(_DWORD *)v8;
  FIELD_U32(v7, 76) = v11;
  FIELD_U32(v7, 80) = v12;
  FIELD_U32(v7, 84) = v13;
  FIELD_U32(v7, 88) = v14;
  v15 = FIELD_U32(v8, 24);
  v16 = FIELD_U32(v8, 28);
  v17 = FIELD_U32(v8, 32);
  v18 = FIELD_U32(v8, 36);
  FIELD_U32(v7, 92) = FIELD_U32(v8, 20);
  FIELD_U32(v7, 96) = v15;
  FIELD_U32(v7, 100) = v16;
  FIELD_U32(v7, 104) = v17;
  FIELD_U32(v7, 108) = v18;
  v19 = FIELD_U32(v8, 44);
  v20 = FIELD_U32(v8, 48);
  v21 = FIELD_U32(v8, 52);
  v22 = FIELD_U32(v8, 56);
  FIELD_U32(v7, 112) = FIELD_U32(v8, 40);
  FIELD_U32(v7, 116) = v19;
  FIELD_U32(v7, 120) = v20;
  FIELD_U32(v7, 124) = v21;
  FIELD_U32(v7, 128) = v22;
  v23 = FIELD_U16(v8, 60);
  FIELD_U8(v7, 134) = FIELD_U8(v8, 62);
  FIELD_U16(v7, 132) = v23;
  sub_60917754(v7 + 136, v8 + 64);
  FIELD_U32(v7, 336) = FIELD_U32(v8, 264);
  v24 = (unsigned int *)(v7 + 344);
  do
    v25 = __ldrex(v24);
  while ( __strex(v25 | 4, v24) );
  if ( (unsigned __int16)*v9 != v10 )
  {
    do
      v26 = __ldrex(v24);
    while ( __strex(v26 | 2, v24) );
    *v9 = v10;
  }
  if ( FIELD_U8(v7, 350) != v52 )
  {
    do
      v27 = __ldrex(v24);
    while ( __strex(v27 | 1, v24) );
    FIELD_U8(v7, 350) = v52;
  }
  v53 = v7 + 72;
  sub_6091AC94(v7 + 72);
  v28 = v60 * 0.5;
  v29 = v61 * 0.5;
  v30 = v60 * 0.5;
  v31 = v60 * 0.5;
  if ( (float)(v60 * 0.5) > 0.0 )
    v31 = 0.0;
  v32 = (float)(v61 * 0.5) <= 0.0;
  FIELD_F32(v7, 16) = v31;
  v33 = v29;
  if ( !v32 )
    v33 = 0.0;
  FIELD_F32(v7, 20) = v33;
  v34 = 0.0;
  if ( v28 <= 0.0 )
    v30 = 0.0;
  FIELD_F32(v7, 24) = v30;
  if ( v29 > 0.0 )
    v34 = v29;
  FIELD_F32(v7, 28) = v34;
  FIELD_F32(v7, 8) = v28;
  FIELD_F32(v7, 12) = v29;
  FIELD_U32(v7, 32) = v53;
  sub_6090B260(v7 + 4);
  v35 = ((int (__fastcall *)(float *, int))loc_6090E438)(&v58, v7 + 4);
  sub_6090E560(v35, a2, (float *)(v7 + 4));
  sub_6093F214(a2, v57, v55, &dword_60B3B954, &dword_60B3B944, v49, v50, v51);
  sub_6091ADF4(v53, a2);
  if ( FIELD_U8(a1, 1549) )
    sub_6091A0C8((int)v56, a2, 255);
  else
    sub_6090B260((int)v56);
  v36 = ((int (__fastcall *)(float *, int))loc_6090E438)(&v58, v7 + 4);
  sub_6090E888(v36, a2, v56);
  sub_6090E95C(v55, a2, v56);
  v37 = FIELD_U16(v57, 40);
  if ( v37 <= 1 )
    v37 = 1;
  v58 = 1.0 / (float)v37;
  v38 = sub_609200A0(v57 + 16);
  v39 = FIELD_U16(v57, 42);
  v40 = 0;
  if ( v38 > v39 )
    v39 = v38;
  v59 = 1.0 / (float)(unsigned int)v39;
  if ( FIELD_U32(dword_60CD0B60, 20) >= 0x4Eu )
    v40 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 308);
  sub_6091DD8C(v40, a2);
  v41 = *(_DWORD **)(v40 + 612);
  if ( *v41 != -1 )
    sub_6091B890(v41, a2, 2, (int)&v58);
  sub_60920FDC((int *)v57, a2, *(char **)(v40 + 636));
  v42 = *(char **)(v40 + 636);
  if ( FIELD_U32(v40, 632) > 1u )
    v42 += 12;
  sub_60920FDC((int *)(v7 + 760), a2, v42);
  sub_60922278(dword_60CD0A28 + 2376, a2);
  v43 = dword_60CD0A0C;
  v44 = FIELD_U32(dword_60CD0A0C, 400);
  if ( v44 )
  {
    v45 = FIELD_U32(a2, 192);
    v46 = FIELD_U32(dword_60CD0A0C, 384);
    v47 = dword_60CC746C(dword_60CD0A0C + 408);
    dword_60CC7874(v45, v46, FIELD_U32(v43, 380), v44, v47, HIDWORD(v47));
  }
  return sub_6093EA98(dword_60CD09F8, v8);
}
