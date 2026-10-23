/* sub_6098325C
 * address: 0x6098325C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098325C(int a1, int a2, int a3)
{
  int v3; // r0
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  v3 = FIELD_U32(a1, 8);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = a3;
  return sub_60986A5C(v3, v5);
}
