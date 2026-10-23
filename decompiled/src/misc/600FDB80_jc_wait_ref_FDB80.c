/* jc_wait_ref_FDB80
 * address: 0x600FDB80   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_wait_ref_FDB80(_DWORD *a1)
{
  int v2; // r0
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  a1[33] = 1084227584;
  a1[26] = 1036831949;
  a1[31] = 0;
  a1[2339] = dword_60C86020;
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 780))(a1, 1);
  v2 = a1[1576];
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "jc_wait";
  return sub_60421AE4(v2, v4, 1);
}
