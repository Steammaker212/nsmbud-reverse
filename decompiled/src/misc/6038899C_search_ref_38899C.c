/* search_ref_38899C
 * address: 0x6038899C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall search_ref_38899C(_DWORD *a1)
{
  int v2; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  v2 = a1[1576];
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "search";
  sub_6040F4B8(v2, v4, 1);
  a1[30] = 0;
  a1[2046] = 0;
  a1[2047] = -1082130432;
  a1[31] = -1082130432;
  a1[2054] = 1;
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 640))(a1);
}
