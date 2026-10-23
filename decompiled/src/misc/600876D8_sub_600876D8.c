/* sub_600876D8
 * address: 0x600876D8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600876D8(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int result; // r0
  int (**v5)(); // [sp+0h] [bp-28h] BYREF
  const char *v6; // [sp+4h] [bp-24h]

  v2 = a1[1775];
  v5 = &sead__SafeStringBase__vtable;
  v6 = "lkp_shell_out";
  sub_60421AE4(v2, &v5, 0);
  v3 = a1[1903];
  v5 = &sead__SafeStringBase__vtable;
  v6 = "lkp_shell_model_out";
  result = sub_6040F4B8(v3, &v5, 0);
  a1[26] = 0;
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[33] = 0;
  return result;
}
