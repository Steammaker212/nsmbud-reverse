/* sub_6041CF7C
 * address: 0x6041CF7C   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041CF7C(_DWORD *a1, _DWORD *a2, void *a3)
{
  _DWORD *v5; // r5
  int v6; // r8
  int v7; // r7
  _DWORD *v8; // r6
  int v9; // r1
  int v10; // r2
  int v11; // r1
  int v12; // r2
  int v14; // [sp+18h] [bp-30h] BYREF
  int v15; // [sp+1Ch] [bp-2Ch]
  int v16; // [sp+20h] [bp-28h]

  v5 = a1 + 728;
  sub_6091FDB0(a1 + 728, 1, 61, *a2, a2[1], 1, 1, 0, 0, 1);
  v6 = a1[737];
  v7 = a1[738];
  v8 = (_DWORD *)operator_new_8DE25C(0x1Cu, a3, 4);
  sub_60913BB4(v8);
  *v8 = off_60BF9C1C;
  sub_60913D88((int)v8, v7, (int)a3, v6, 12);
  sub_60913A6C(&v14, v8, 0);
  v9 = v15;
  v10 = v16;
  a1[907] = v14;
  a1[908] = v9;
  a1[909] = v10;
  v11 = a1[908];
  v12 = a1[909];
  v14 = a1[907];
  v15 = v11;
  v16 = v12;
  sub_609208DC(v5, &v14, 0);
  sub_60920168(v5);
  return sub_60920CDC(v5, a1 + 850);
}
