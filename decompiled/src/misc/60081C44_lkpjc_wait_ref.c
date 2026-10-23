/* lkpjc_wait_ref
 * address: 0x60081C44   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkpjc_wait_ref(int a1)
{
  int v2; // r0
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v2 = FIELD_U32(a1, 7100);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "lkpjc_wait";
  sub_60421AE4(v2, v4, 1);
  FIELD_U8(a1, 535) = 0;
  return 0;
}
