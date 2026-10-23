/* jc_wait_ref_8E5F0
 * address: 0x6008E5F0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_wait_ref_8E5F0(_DWORD *a1)
{
  _WORD *v2; // r5
  int v3; // r0
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  v2 = a1 + 1569;
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 780))(a1, 1);
  v3 = a1[1576];
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "jc_wait";
  sub_60421AE4(v3, v5, 1);
  a1[2339] = dword_60C82348;
  *v2 = 10;
  return 10;
}
