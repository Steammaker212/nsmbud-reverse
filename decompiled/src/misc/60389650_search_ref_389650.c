/* search_ref_389650
 * address: 0x60389650   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall search_ref_389650(_DWORD *a1)
{
  int v2; // r0
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v2 = a1[1576];
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "search";
  sub_6040F4B8(v2, v4, 1);
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 640))(a1);
}
