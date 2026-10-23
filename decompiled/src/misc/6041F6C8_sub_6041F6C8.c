/* sub_6041F6C8
 * address: 0x6041F6C8   size: 1084   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041F6C8(int a1, int a2, int a3, int a4)
{
  _DWORD *v7; // r11
  int v8; // r6
  _DWORD *v9; // r0
  __int64 v10; // kr00_8
  int v11; // r7
  int v12; // r0
  int v13; // r7
  __int64 v14; // r0
  int v15; // r2
  unsigned int v16; // r4
  int v17; // r7
  __int64 v18; // r0
  int v19; // kr0C_4
  int v20; // r8
  int v21; // r5
  unsigned int v22; // r4
  char *v23; // r7
  unsigned int v24; // r4
  char *v25; // r7
  unsigned int v26; // r4
  char *v27; // r7
  int v28; // r0
  int v29; // r5
  int v30; // r0
  unsigned int v32; // [sp+Ch] [bp-44h]
  int v34; // [sp+14h] [bp-3Ch]
  int v35; // [sp+14h] [bp-3Ch]
  __int64 v36; // [sp+18h] [bp-38h] BYREF
  int v37; // [sp+20h] [bp-30h]
  int v38; // [sp+24h] [bp-2Ch]

  v7 = (_DWORD *)dword_60C9BAF4;
  v8 = FIELD_U32(dword_60C9BAF4, 224);
  if ( sub_6083DCFC(a3) == 1 )
  {
    v9 = (_DWORD *)sub_6083DD0C(a3);
    v10 = dword_60CC72C8(FIELD_U32(dword_60CCFC8C, 28), *v9, v7[46]);
    sub_6091D95C(v8);
    if ( FIELD_S32(v8, 632) >= 1 )
    {
      v11 = FIELD_U32(v8, 636);
      if ( FIELD_U8(v11, 1) != 255 )
      {
        v34 = FIELD_U32(a2, 192);
        v12 = sub_60916E38(1);
        dword_60CC783C(v34, v12, FIELD_S8(v11, 1), dword_60CC783C, v10, HIDWORD(v10));
      }
    }
  }
  v32 = FIELD_U32(v8, 616);
  v13 = FIELD_U32(v8, 620);
  v35 = a3;
  LODWORD(v14) = dword_60CC746C(a1 + 4472);
  v15 = FIELD_U16(a1, 4464) * FIELD_U8(a1, 4461);
  if ( a4 == 9 )
    ++v15;
  v36 = v14 + (unsigned int)(v15 * FIELD_U32(a1, 4440));
  if ( v32 > 1 )
    v13 += 12;
  sub_6041FB58(a1 + 4424, a2, &v36, v13, 0, FIELD_U32(a1, 4436));
  v16 = FIELD_U32(v8, 616);
  v17 = FIELD_U32(v8, 620);
  v18 = dword_60CC746C(a1 + 4568);
  v19 = (a4 + FIELD_U16(a1, 4560) * FIELD_U8(a1, 4557)) * FIELD_U32(a1, 4536);
  v36 = v18 + (unsigned int)v19;
  if ( v16 > 2 )
    v17 += 24;
  sub_6041FB58(a1 + 4520, a2, &v36, v17, 0, FIELD_U32(a1, 4532));
  dword_60CC7810(FIELD_U32(a2, 192), v7[108], v7[112]);
  dword_60CC7814(FIELD_U32(a2, 192), v7[107], v7[110]);
  v38 = 0;
  v37 = 0;
  v36 = 0;
  sub_6091D95C(v8);
  v20 = sub_6083DCF0(v35, 0);
  v21 = sub_6083DD1C(v35, 0);
  sub_60835528(v20, &v36);
  dword_60CC781C(FIELD_U32(a2, 192), **(char **)(v8 + 604), v36, HIDWORD(v36), v21);
  if ( sub_6083DCDC(v35, 1) == 1 )
  {
    v20 = sub_6083DCF0(v35, 1);
    v21 = sub_6083DD1C(v35, 1);
  }
  v22 = FIELD_U32(v8, 600);
  v23 = *(char **)(v8 + 604);
  sub_60835528(v20, &v36);
  if ( v22 > 1 )
    v23 += 12;
  dword_60CC781C(FIELD_U32(a2, 192), *v23, v36, HIDWORD(v36), v21);
  if ( sub_6083DCDC(v35, 2) == 1 )
  {
    v20 = sub_6083DCF0(v35, 2);
    v21 = sub_6083DD1C(v35, 2);
  }
  v24 = FIELD_U32(v8, 600);
  v25 = *(char **)(v8 + 604);
  sub_60835528(v20, &v36);
  if ( v24 > 2 )
    v25 += 24;
  dword_60CC781C(FIELD_U32(a2, 192), *v25, v36, HIDWORD(v36), v21);
  if ( sub_6083DCDC(v35, 4) == 1 )
  {
    v20 = sub_6083DCF0(v35, 4);
    v21 = sub_6083DD1C(v35, 4);
  }
  v26 = FIELD_U32(v8, 600);
  v27 = *(char **)(v8 + 604);
  sub_60835528(v20, &v36);
  if ( v26 > 3 )
    v27 += 36;
  dword_60CC781C(FIELD_U32(a2, 192), *v27, v36, HIDWORD(v36), v21);
  v28 = sub_6083DD28(v35);
  sub_60835528(v28, &v36);
  v29 = FIELD_U32(a2, 192);
  v30 = sub_6083DD30(v35);
  return dword_60CC7874(v29, 4, 1, v30, v36, HIDWORD(v36));
}
