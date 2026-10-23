/* sub_604D7520
 * address: 0x604D7520   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D7520(int a1)
{
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  sub_60502548(a1 + 3640);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = InOut_Pos_ref(0);
  return sub_604741D8((_DWORD *)(a1 + 40), 0, v3, 0);
}
