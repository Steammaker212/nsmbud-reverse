/* sub_60872358
 * address: 0x60872358   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60872358(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v8; // r10
  int v9; // r0
  int v10; // r7
  int v11; // r6
  int v12; // r4
  __int64 v14; // [sp+10h] [bp-30h] BYREF
  int v15; // [sp+18h] [bp-28h]
  int v16; // [sp+1Ch] [bp-24h]

  v8 = a1[10];
  v9 = *a1 + 8 * (a3 + a4);
  v10 = *(_DWORD *)(*a1 + 8 * a3);
  v11 = *(_DWORD *)(v9 - 8);
  v12 = *(_DWORD *)(v9 - 4);
  v16 = 0;
  v15 = 0;
  v14 = 0;
  sub_60835528(a1[4], (int)&v14);
  v14 += v10;
  return sub_6083568C(a2, a1[9], a1[10], &v14, v12 + ((v11 - v10) >> v8), a1[12], a5, a6);
}
