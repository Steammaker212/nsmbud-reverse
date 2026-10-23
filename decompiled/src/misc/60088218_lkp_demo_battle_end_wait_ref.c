/* lkp_demo_battle_end_wait_ref
 * address: 0x60088218   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_demo_battle_end_wait_ref(_DWORD *a1)
{
  int v2; // r0
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v2 = a1[1775];
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "lkp_demo_battle_end_wait";
  sub_60421AE4(v2, v4, 1);
  a1[1777] = 0;
  a1[1778] = 0;
  a1[1779] = 0;
  return 7116;
}
