/* sub_601A655C
 * address: 0x601A655C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A655C(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  v2 = *(_DWORD **)(a1 + 408);
  v3 = FIELD_U32(a1, 412);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "wait2";
  sub_60421938(v2, v3, (int)v5);
  FIELD_U8(a1, 370) = 1;
  return 1;
}
