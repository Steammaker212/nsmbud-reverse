/* sub_60949218
 * address: 0x60949218   size: 1056   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60949218(_DWORD *a1, int a2)
{
  unsigned int v4; // r5
  int v5; // r11
  int v6; // r7
  int v7; // r0
  char *v8; // r6
  int v9; // r0
  int v10; // r7
  _DWORD *v11; // r0
  int v12; // r7
  int v13; // r0
  int v14; // r7
  int v15; // r7
  int v16; // r7
  int v17; // r7
  int v18; // r7
  int v19; // r7
  int v20; // r5
  int v21; // r5
  int v22; // r5
  int v23; // r5
  int result; // r0
  _DWORD v25[3]; // [sp+8h] [bp-E0h] BYREF
  int v26; // [sp+14h] [bp-D4h] BYREF
  int v27; // [sp+18h] [bp-D0h]
  int v28; // [sp+1Ch] [bp-CCh]
  _DWORD v29[3]; // [sp+20h] [bp-C8h] BYREF
  _DWORD v30[3]; // [sp+2Ch] [bp-BCh] BYREF
  int v31; // [sp+38h] [bp-B0h] BYREF
  int v32; // [sp+3Ch] [bp-ACh]
  int v33; // [sp+40h] [bp-A8h]
  int v34; // [sp+44h] [bp-A4h]
  int v35; // [sp+48h] [bp-A0h]
  _DWORD v36[27]; // [sp+4Ch] [bp-9Ch] BYREF
  int v37; // [sp+B8h] [bp-30h] BYREF

  v4 = 0;
  v5 = (int)(a1 + 5);
  sub_60913D88((int)(a1 + 5), 128, a2, 4, 0);
  sub_60913A6C(&v37, v5, 0);
  v31 = -1090519040;
  v32 = 1056964608;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36[0] = 1065353216;
  v36[1] = 0;
  v36[2] = 0;
  v36[3] = 1056964608;
  v36[4] = 1056964608;
  memset(&v36[5], 0, 12);
  v36[8] = 1065353216;
  v36[9] = 1065353216;
  v36[10] = 0;
  v36[11] = -1090519040;
  v36[12] = -1090519040;
  memset(&v36[13], 0, 12);
  v36[16] = 1065353216;
  v36[17] = 0;
  v36[18] = 1065353216;
  v36[19] = 1056964608;
  v36[20] = -1090519040;
  memset(&v36[21], 0, 12);
  v36[24] = 1065353216;
  v36[25] = 1065353216;
  v36[26] = 1065353216;
  do
  {
    v6 = dword_60CC73E8(a1[8]);
    v7 = v6 + sub_60913FB4(v5);
    v8 = (char *)&v31 + v4;
    *(_DWORD *)(v7 + v4) = *(int *)((char *)&v31 + v4);
    v9 = v7 + v4;
    FIELD_U32(v9, 4) = *(int *)((char *)&v31 + v4 + 4);
    FIELD_U32(v9, 8) = *(int *)((char *)&v33 + v4);
    v10 = dword_60CC73E8(a1[8]);
    v11 = (_DWORD *)(v10 + sub_60913FB4(v5) + v4);
    v11[3] = *(int *)((char *)&v34 + v4);
    v11[4] = v36[v4 / 4 - 1];
    v11[5] = v36[v4 / 4];
    v12 = dword_60CC73E8(a1[8]);
    v13 = v12 + sub_60913FB4(v5) + v4;
    v4 += 32;
    FIELD_U32(v13, 24) = *((_DWORD *)v8 + 6);
    FIELD_U32(v13, 28) = *((_DWORD *)v8 + 7);
  }
  while ( v4 != 128 );
  sub_60913A6C(v30, v5, 0);
  sub_609225B8((int)(a1 + 26), v30, 0x20u, 0x80u);
  sub_60922768((int)(a1 + 26), 0, 34, 0, 0);
  sub_60922768((int)(a1 + 26), 1u, 34, 12, 0);
  sub_60922768((int)(a1 + 26), 2u, 22, 24, 0);
  sub_60913D88((int)(a1 + 12), 12, a2, 4, 0);
  sub_60913A6C(v29, (int)(a1 + 12), 0);
  v14 = dword_60CC73E8(a1[15]);
  *(_WORD *)(v14 + sub_60913FB4((int)(a1 + 12))) = 0;
  v15 = dword_60CC73E8(a1[15]);
  *(_WORD *)(v15 + sub_60913FB4((int)(a1 + 12)) + 2) = 2;
  v16 = dword_60CC73E8(a1[15]);
  *(_WORD *)(v16 + sub_60913FB4((int)(a1 + 12)) + 4) = 1;
  v17 = dword_60CC73E8(a1[15]);
  *(_WORD *)(v17 + sub_60913FB4((int)(a1 + 12)) + 6) = 1;
  v18 = dword_60CC73E8(a1[15]);
  *(_WORD *)(v18 + sub_60913FB4((int)(a1 + 12)) + 8) = 2;
  v19 = dword_60CC73E8(a1[15]);
  *(_WORD *)(v19 + sub_60913FB4((int)(a1 + 12)) + 10) = 3;
  sub_60913A6C(&v26, (int)(a1 + 12), 0);
  v31 = v26;
  v32 = v27;
  v33 = v28;
  sub_60919D48(a1 + 94, &v31, 1, 6);
  sub_60913D88((int)(a1 + 19), 8, a2, 4, 0);
  sub_60913A6C(v25, (int)(a1 + 19), 0);
  v20 = dword_60CC73E8(a1[22]);
  *(_WORD *)(v20 + sub_60913FB4((int)(a1 + 19))) = 0;
  v21 = dword_60CC73E8(a1[22]);
  *(_WORD *)(v21 + sub_60913FB4((int)(a1 + 19)) + 2) = 1;
  v22 = dword_60CC73E8(a1[22]);
  *(_WORD *)(v22 + sub_60913FB4((int)(a1 + 19)) + 4) = 3;
  v23 = dword_60CC73E8(a1[22]);
  *(_WORD *)(v23 + sub_60913FB4((int)(a1 + 19)) + 6) = 2;
  sub_60913A6C(&v26, (int)(a1 + 19), 0);
  v31 = v26;
  v32 = v27;
  v33 = v28;
  result = sub_60919D48(a1 + 114, &v31, 1, 4);
  a1[116] = 2;
  return result;
}
