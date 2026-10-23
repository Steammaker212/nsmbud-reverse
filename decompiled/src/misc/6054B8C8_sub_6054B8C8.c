/* sub_6054B8C8
 * address: 0x6054B8C8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054B8C8(int a1)
{
  _DWORD v2[4]; // [sp+0h] [bp-10h] BYREF

  FIELD_U8(a1, 3594) = 1;
  v2[0] = &sead__SafeStringBase__vtable;
  v2[1] = "Out";
  return sub_60473DE4((_DWORD *)(a1 + 40), 0, v2, 0);
}
