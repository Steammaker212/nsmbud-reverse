/* sub_60951358
 * address: 0x60951358   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60951358(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4
  int v4; // r7
  int v5; // r6
  int v6; // r0
  _DWORD *v7; // r6
  int v8; // r6
  int v9; // r0
  _DWORD *v10; // r6
  int v11; // r5
  int v12; // r0
  _DWORD *v13; // r5
  _DWORD v15[3]; // [sp+4h] [bp-3Ch] BYREF
  _DWORD v16[12]; // [sp+10h] [bp-30h] BYREF

  v2 = a1;
  v4 = (int)(a1 + 210);
  sub_60913D88((int)(a1 + 210), 16, a2, 4, 0);
  sub_60913A6C(v16, v4, 0);
  v5 = dword_60CC73E8(v2[213]);
  v6 = sub_60913FB4(v4);
  *(_DWORD *)(v5 + v6) = 1065353216;
  v7 = (_DWORD *)(v5 + v6);
  v7[1] = 1065353216;
  v7[2] = 1065353216;
  v7[3] = 1065353216;
  sub_60913A6C(v15, v4, 0);
  sub_609225B8((int)(v2 + 6), v15, 0, 0x10u);
  sub_60922768((int)(v2 + 6), 0, 46, 0, 0);
  sub_60913D88((int)(v2 + 217), 16, a2, 4, 0);
  sub_60913A6C(v16, (int)(v2 + 217), 0);
  v8 = dword_60CC73E8(v2[220]);
  v9 = sub_60913FB4((int)(v2 + 217));
  *(_DWORD *)(v8 + v9) = 0;
  v10 = (_DWORD *)(v8 + v9);
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 1065353216;
  sub_60913A6C(v15, (int)(v2 + 217), 0);
  sub_609225B8((int)(v2 + 74), v15, 0, 0x10u);
  sub_60922768((int)(v2 + 74), 0, 46, 0, 0);
  sub_60913D88((int)(v2 + 224), 16, a2, 4, 0);
  sub_60913A6C(v16, (int)(v2 + 224), 0);
  v11 = dword_60CC73E8(v2[227]);
  v12 = sub_60913FB4((int)(v2 + 224));
  *(_DWORD *)(v11 + v12) = 0;
  v13 = (_DWORD *)(v11 + v12);
  v13[1] = 0;
  v13[2] = 0;
  v13[3] = 0;
  sub_60913A6C(v15, (int)(v2 + 224), 0);
  v2 += 142;
  sub_609225B8((int)v2, v15, 0, 0x10u);
  return sub_60922768((int)v2, 0, 46, 0, 0);
}
