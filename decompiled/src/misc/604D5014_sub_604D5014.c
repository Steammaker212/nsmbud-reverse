/* sub_604D5014
 * address: 0x604D5014   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D5014(int a1)
{
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  sub_604D70FC();
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = Out_Select_Mode_ref(1);
  return sub_604741D8((_DWORD *)(a1 + 60), 1u, v3, 0);
}
