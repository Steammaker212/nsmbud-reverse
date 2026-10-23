/* sub_60843FB4
 * address: 0x60843FB4   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60843FB4(_DWORD *a1, int a2)
{
  int v4; // r7
  int v5; // r5
  int v6; // r4
  int v7; // r4
  int v8; // r6
  int v9; // r6
  int v10; // r5
  int v12; // [sp+0h] [bp-28h] BYREF
  int v13; // [sp+4h] [bp-24h]
  int v14; // [sp+8h] [bp-20h]
  int v15; // [sp+Ch] [bp-1Ch]

  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  sub_6083D5B0(&v12);
  v13 = 4;
  v4 = sub_608352A0(a1, (int)&v12);
  v13 = 8;
  v5 = sub_608352A0(a1, (int)&v12);
  --v4;
  v6 = v4 + v4 + sub_60847BD8(a2 + 16, 0);
  v7 = --v5 + v6 + sub_60847BD8(a2 + 16, 1);
  v8 = v4 + v7 + 2 * sub_60847BF0(a2 + 16);
  v9 = v4 + v8 + sub_60847BD8(a2 + 96, 0);
  v10 = v5 + v9 + sub_60847BD8(a2 + 96, 1);
  return v10 + 2 * sub_60847BF0(a2 + 96);
}
