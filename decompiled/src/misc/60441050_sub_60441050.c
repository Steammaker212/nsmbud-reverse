/* sub_60441050
 * address: 0x60441050   size: 1020   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60441050(_DWORD *a1, int a2)
{
  int v3; // r1
  int v4; // r7
  int v5; // r0
  int v6; // r7
  int v7; // r7
  _DWORD *v8; // r0
  int v9; // r7
  _DWORD *v10; // r0
  int v11; // r7
  _DWORD *v12; // r0
  int v13; // r7
  int v14; // r0
  int v15; // r7
  int v16; // r0
  int v17; // r7
  int v18; // r0
  int v19; // r7
  int v20; // r0
  _DWORD *v21; // r11
  int v22; // r5
  int v23; // r5
  int v24; // r5
  int v25; // r5
  int v26; // r5
  int v27; // r5
  unsigned int v28; // r1
  _DWORD *v29; // r5
  int v30; // r6
  int v31; // r4
  char *v32; // r1
  _DWORD v35[3]; // [sp+Ch] [bp-6Ch] BYREF
  _DWORD v36[3]; // [sp+18h] [bp-60h] BYREF
  _BYTE v37[12]; // [sp+24h] [bp-54h] BYREF
  _BYTE v38[12]; // [sp+30h] [bp-48h] BYREF
  _BYTE v39[12]; // [sp+3Ch] [bp-3Ch] BYREF
  int v40; // [sp+48h] [bp-30h] BYREF
  int v41; // [sp+4Ch] [bp-2Ch]
  int v42; // [sp+50h] [bp-28h]

  v3 = 0;
  if ( FIELD_U32(dword_60C9CD58, 16) >= 0xCu )
    v3 = *(_DWORD *)(FIELD_U32(dword_60C9CD58, 24) + 44);
  a1[1] = v3;
  sub_60913D88((int)(a1 + 2), 80, 0, 4, 0);
  sub_60913A6C(v39, a1 + 2, 0);
  sub_60913D88((int)(a1 + 9), 12, 0, 4, 0);
  sub_60913A6C(v38, a1 + 9, 0);
  v4 = dword_60CC73E8(a1[5]);
  v5 = sub_60913FB4(a1 + 2);
  *(_DWORD *)(v4 + v5) = -1082130432;
  v6 = v4 + v5;
  FIELD_U32(v6, 4) = 1065353216;
  FIELD_U32(v6, 8) = 0;
  v7 = dword_60CC73E8(a1[5]);
  v8 = (_DWORD *)(v7 + sub_60913FB4(a1 + 2));
  v8[5] = 1065353216;
  v8[6] = 1065353216;
  v8[7] = 0;
  v9 = dword_60CC73E8(a1[5]);
  v10 = (_DWORD *)(v9 + sub_60913FB4(a1 + 2));
  v10[10] = -1082130432;
  v10[11] = -1082130432;
  v10[12] = 0;
  v11 = dword_60CC73E8(a1[5]);
  v12 = (_DWORD *)(v11 + sub_60913FB4(a1 + 2));
  v12[15] = 1065353216;
  v12[16] = -1082130432;
  v12[17] = 0;
  v13 = dword_60CC73E8(a1[5]);
  v14 = v13 + sub_60913FB4(a1 + 2);
  FIELD_U32(v14, 12) = 0;
  FIELD_U32(v14, 16) = 0;
  v15 = dword_60CC73E8(a1[5]);
  v16 = v15 + sub_60913FB4(a1 + 2);
  FIELD_U32(v16, 32) = 1065353216;
  FIELD_U32(v16, 36) = 0;
  v17 = dword_60CC73E8(a1[5]);
  v18 = v17 + sub_60913FB4(a1 + 2);
  FIELD_U32(v18, 52) = 0;
  FIELD_U32(v18, 56) = 1065353216;
  v19 = dword_60CC73E8(a1[5]);
  v20 = v19 + sub_60913FB4(a1 + 2);
  FIELD_U32(v20, 72) = 1065353216;
  FIELD_U32(v20, 76) = 1065353216;
  sub_60913A6C(v37, a1 + 2, 0);
  v21 = a1 + 16;
  sub_609225B8(a1 + 16, v37, 20, 80);
  sub_60922768(a1 + 16, 0, 34, 0, 0);
  sub_60922768(a1 + 16, 1, 22, 12, 0);
  sub_60913A6C(v36, a1 + 2, 0);
  v40 = v36[0];
  v41 = v36[1];
  v42 = v36[2];
  sub_60922794(a1 + 16, &v40, a1[83]);
  sub_60922730(a1 + 16, 0, a1[83]);
  v22 = dword_60CC73E8(a1[12]);
  *(_WORD *)(v22 + sub_60913FB4(a1 + 9)) = 0;
  v23 = dword_60CC73E8(a1[12]);
  *(_WORD *)(v23 + sub_60913FB4(a1 + 9) + 2) = 2;
  v24 = dword_60CC73E8(a1[12]);
  *(_WORD *)(v24 + sub_60913FB4(a1 + 9) + 4) = 1;
  v25 = dword_60CC73E8(a1[12]);
  *(_WORD *)(v25 + sub_60913FB4(a1 + 9) + 6) = 1;
  v26 = dword_60CC73E8(a1[12]);
  *(_WORD *)(v26 + sub_60913FB4(a1 + 9) + 8) = 2;
  v27 = dword_60CC73E8(a1[12]);
  *(_WORD *)(v27 + sub_60913FB4(a1 + 9) + 10) = 3;
  sub_60913A6C(v35, a1 + 9, 0);
  v28 = a1[11];
  v40 = v35[0];
  v41 = v35[1];
  v42 = v35[2];
  sub_60919D48(a1 + 84, &v40, 1, v28 >> 1);
  v29 = a1 + 104;
  a1[86] = 4;
  sub_60921D30(a1 + 104, 1, a2);
  v30 = a1[1];
  sub_6091D95C(v30);
  sub_60921DF0(a1 + 104, **(char **)(v30 + 604), a1 + 16, 0);
  v31 = a1[1];
  sub_6091D95C(v31);
  v32 = *(char **)(v31 + 604);
  if ( FIELD_U32(v31, 600) > 1u )
    v32 += 12;
  sub_60921DF0(v29, *v32, v21, 1);
  return sub_60921F90(v29);
}
