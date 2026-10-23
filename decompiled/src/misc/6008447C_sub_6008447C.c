/* sub_6008447C
 * address: 0x6008447C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008447C(int *a1)
{
  int *v1; // r4
  int v2; // r0
  int v3; // r0
  int v4; // t1
  int (**v6)(); // [sp+0h] [bp-28h] BYREF
  const char *v7; // [sp+4h] [bp-24h]

  v1 = a1;
  v2 = a1[1775];
  v6 = &sead__SafeStringBase__vtable;
  v7 = "lkp_shell_in";
  sub_60421AE4(v2, &v6, 0);
  v3 = v1[1903];
  v6 = &sead__SafeStringBase__vtable;
  v7 = "lkp_shell_model_in";
  sub_6040F4B8(v3, &v6, 0);
  v4 = v1[1904];
  v1 += 1904;
  *v1 = v4 | 2;
  return sub_60813430(v1 - 321, "SE_BOSS_CMN_SHELL_IN", 0);
}
