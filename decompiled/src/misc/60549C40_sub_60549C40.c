/* sub_60549C40
 * address: 0x60549C40   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60549C40(int a1)
{
  _DWORD v2[4]; // [sp+0h] [bp-10h] BYREF

  v2[0] = &sead__SafeStringBase__vtable;
  v2[1] = "Out";
  return sub_60473DE4((_DWORD *)(a1 + 40), 0, v2, 0);
}
