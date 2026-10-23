/* sub_602A63E4
 * address: 0x602A63E4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A63E4(int a1, int a2, int a3, char a4, char a5)
{
  int *v5; // r1
  int v6; // r12
  int v7; // r1
  _DWORD v9[5]; // [sp+0h] [bp-28h] BYREF
  char v10; // [sp+14h] [bp-14h]
  int v11; // [sp+18h] [bp-10h]
  char v12; // [sp+1Ch] [bp-Ch]

  v5 = (int *)(a2 + 8 * a3);
  v6 = *v5;
  v7 = v5[1];
  v9[0] = v6;
  v9[1] = v7;
  v9[2] = -1065353216;
  v9[3] = unk_60C906E8;
  v9[4] = &stru_60C90710;
  v10 = a5;
  v11 = a3;
  v12 = a4;
  return sub_602A852C(a1 + 6104, v9);
}
