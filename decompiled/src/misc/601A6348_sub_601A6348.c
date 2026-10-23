/* sub_601A6348
 * address: 0x601A6348   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A6348(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  v2 = (_DWORD *)a1[102];
  v3 = a1[103];
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "wait2";
  sub_60421938(v2, v3, (int)v5);
  a1[111] = 15;
  return 15;
}
