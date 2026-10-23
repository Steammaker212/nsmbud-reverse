/* sub_608722BC
 * address: 0x608722BC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608722BC(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v7; // r10
  int v8; // r0
  int v9; // r6
  int v10; // r11
  int v11; // r7
  __int64 v13; // [sp+10h] [bp-38h] BYREF
  int v14; // [sp+18h] [bp-30h]
  int v15; // [sp+1Ch] [bp-2Ch]

  v7 = a1[10];
  v8 = *a1 + 8 * (a3 + a4);
  v9 = *(_DWORD *)(v8 - 8);
  v10 = *(_DWORD *)(v8 - 4);
  v11 = *(_DWORD *)(*a1 + 8 * a3);
  v15 = 0;
  v14 = 0;
  v13 = 0;
  sub_60835528(a1[4], (int)&v13);
  v13 += v11;
  return sub_6083568C(a2, a1[9], a1[10], &v13, v10 + ((v9 - v11) >> v7), a1[12], a5, 0);
}
