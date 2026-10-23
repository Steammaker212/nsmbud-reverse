/* sub_60488470
 * address: 0x60488470   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60488470(int a1)
{
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  ((void (__fastcall *)(_DWORD))loc_6049567C)(FIELD_U32(a1, 14240));
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = sub_604923E4(2);
  return sub_604741D8((_DWORD *)(a1 + 36), 4u, v3, 0);
}
