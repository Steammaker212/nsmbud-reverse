/* jc_wait_ref_8D68C
 * address: 0x6008D68C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_wait_ref_8D68C(_DWORD *a1)
{
  int v2; // r0
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v2 = a1[1576];
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "jc_wait";
  sub_60421AE4(v2, v4, 1);
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 780))(a1, 2);
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[25] = 0;
  a1[2339] = 0;
  a1[2338] = 0;
  return sub_60095218(a1);
}
