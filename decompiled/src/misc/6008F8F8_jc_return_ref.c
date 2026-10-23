/* jc_return_ref
 * address: 0x6008F8F8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_return_ref(_DWORD *a1)
{
  int v2; // r0
  int result; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  v2 = a1[1576];
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "jc_return";
  result = sub_60421AE4(v2, v4, 0);
  a1[41] = 0;
  return result;
}
