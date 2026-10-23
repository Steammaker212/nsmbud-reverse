/* sub_60949640
 * address: 0x60949640   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60949640(_DWORD *a1, int a2)
{
  unsigned int v4; // r5
  int v5; // r10
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
  int v17; // r5
  int v18; // r5
  int v19; // r5
  int result; // r0
  _DWORD v21[3]; // [sp+4h] [bp-CCh] BYREF
  _DWORD v22[3]; // [sp+10h] [bp-C0h] BYREF
  _DWORD v23[3]; // [sp+1Ch] [bp-B4h] BYREF
  _DWORD v24[3]; // [sp+28h] [bp-A8h] BYREF
  _DWORD v25[3]; // [sp+34h] [bp-9Ch] BYREF
  int v26; // [sp+40h] [bp-90h] BYREF
  int v27; // [sp+44h] [bp-8Ch]
  int v28; // [sp+48h] [bp-88h]
  int v29; // [sp+4Ch] [bp-84h]
  int v30; // [sp+50h] [bp-80h]
  _DWORD v31[19]; // [sp+54h] [bp-7Ch] BYREF
  int v32; // [sp+A0h] [bp-30h] BYREF

  v4 = 0;
  v5 = (int)(a1 + 134);
  sub_60913D88((int)(a1 + 134), 96, a2, 4, 0);
  sub_60913A6C(&v32, v5, 0);
  v26 = -1090519040;
  v27 = 1056964608;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31[0] = 1065353216;
  v31[1] = 0;
  v31[2] = 0;
  v31[3] = 1069547520;
  v31[4] = 1056964608;
  memset(&v31[5], 0, 12);
  v31[8] = 1065353216;
  v31[9] = 0x40000000;
  v31[10] = 0;
  v31[11] = -1090519040;
  v31[12] = -1077936128;
  memset(&v31[13], 0, 12);
  v31[16] = 1065353216;
  v31[17] = 0;
  v31[18] = 0x40000000;
  do
  {
    v6 = dword_60CC73E8(a1[137]);
    v7 = v6 + sub_60913FB4(v5);
    v8 = (char *)&v26 + v4;
    *(_DWORD *)(v7 + v4) = *(int *)((char *)&v26 + v4);
    v9 = v7 + v4;
    FIELD_U32(v9, 4) = *(int *)((char *)&v26 + v4 + 4);
    FIELD_U32(v9, 8) = *(int *)((char *)&v28 + v4);
    v10 = dword_60CC73E8(a1[137]);
    v11 = (_DWORD *)(v10 + sub_60913FB4(v5) + v4);
    v11[3] = *(int *)((char *)&v29 + v4);
    v11[4] = v31[v4 / 4 - 1];
    v11[5] = v31[v4 / 4];
    v12 = dword_60CC73E8(a1[137]);
    v13 = v12 + sub_60913FB4(v5) + v4;
    v4 += 32;
    FIELD_U32(v13, 24) = *((_DWORD *)v8 + 6);
    FIELD_U32(v13, 28) = *((_DWORD *)v8 + 7);
  }
  while ( v4 != 96 );
  sub_60913A6C(v25, v5, 0);
  sub_609225B8((int)(a1 + 156), v25, 0x20u, 0x60u);
  sub_60922768((int)(a1 + 156), 0, 34, 0, 0);
  sub_60922768((int)(a1 + 156), 1u, 34, 12, 0);
  sub_60922768((int)(a1 + 156), 2u, 22, 24, 0);
  sub_60913D88((int)(a1 + 141), 6, a2, 4, 0);
  sub_60913A6C(v24, (int)(a1 + 141), 0);
  v14 = dword_60CC73E8(a1[144]);
  *(_WORD *)(v14 + sub_60913FB4((int)(a1 + 141))) = 0;
  v15 = dword_60CC73E8(a1[144]);
  *(_WORD *)(v15 + sub_60913FB4((int)(a1 + 141)) + 2) = 2;
  v16 = dword_60CC73E8(a1[144]);
  *(_WORD *)(v16 + sub_60913FB4((int)(a1 + 141)) + 4) = 1;
  sub_60913A6C(v23, (int)(a1 + 141), 0);
  v26 = v23[0];
  v27 = v23[1];
  v28 = v23[2];
  sub_60919D48(a1 + 224, &v26, 1, 3);
  sub_60913D88((int)(a1 + 148), 6, a2, 4, 0);
  sub_60913A6C(v22, (int)(a1 + 148), 0);
  v17 = dword_60CC73E8(a1[151]);
  *(_WORD *)(v17 + sub_60913FB4((int)(a1 + 148))) = 0;
  v18 = dword_60CC73E8(a1[151]);
  *(_WORD *)(v18 + sub_60913FB4((int)(a1 + 148)) + 2) = 2;
  v19 = dword_60CC73E8(a1[151]);
  *(_WORD *)(v19 + sub_60913FB4((int)(a1 + 148)) + 4) = 1;
  sub_60913A6C(v21, (int)(a1 + 148), 0);
  v26 = v21[0];
  v27 = v21[1];
  v28 = v21[2];
  result = sub_60919D48(a1 + 244, &v26, 1, 3);
  a1[246] = 2;
  return result;
}
