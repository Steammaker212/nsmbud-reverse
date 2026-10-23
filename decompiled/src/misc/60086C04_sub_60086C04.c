/* sub_60086C04
 * address: 0x60086C04   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60086C04(_DWORD *a1)
{
  _DWORD *v1; // r4
  int v2; // r0
  int v3; // r0
  int v4; // r1
  int (**v6)(); // [sp+0h] [bp-28h] BYREF
  const char *v7; // [sp+4h] [bp-24h]

  v1 = a1;
  v2 = a1[1775];
  v6 = &sead__SafeStringBase__vtable;
  v7 = "lkp_shell_out";
  sub_60421AE4(v2, &v6, 0);
  v3 = v1[1903];
  v6 = &sead__SafeStringBase__vtable;
  v7 = "lkp_shell_model_out";
  sub_6040F4B8(v3, &v6, 0);
  v4 = dword_60C81F58;
  v1[34] = dword_60C81F58 ^ 0x80000000;
  v1[30] = 0;
  v1[31] = v4;
  v1[32] = 0;
  v1[25] = dword_60C81F3C;
  v1 += 1583;
  sub_60813430(v1, "SE_VOC_JR_RECORVER", 0);
  return sub_60813430(v1, "SE_BOSS_CMN_SHELL_OUT", 0);
}
