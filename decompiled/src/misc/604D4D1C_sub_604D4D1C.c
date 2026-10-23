/* sub_604D4D1C
 * address: 0x604D4D1C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D4D1C(int a1)
{
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  sub_604D70FC();
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = Out_Select_Mode_ref(0);
  return sub_60473DE4((_DWORD *)(a1 + 60), 0, v3, 0);
}
