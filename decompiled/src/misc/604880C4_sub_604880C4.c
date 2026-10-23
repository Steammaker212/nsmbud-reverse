/* sub_604880C4
 * address: 0x604880C4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604880C4(int a1)
{
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = sub_604923E4(2);
  sub_60473DE4((_DWORD *)(a1 + 36), 4u, v3, 0);
  return sub_608169AC(dword_60CC6B68);
}
