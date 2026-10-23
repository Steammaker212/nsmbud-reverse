/* SE_BOSS_JR_DEMO_CROWN_ATTACKSIGN_ref
 * address: 0x600FCCD0   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_DEMO_CROWN_ATTACKSIGN_ref(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  a1[2339] = dword_60C86020;
  v2 = a1 + 2369;
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 780))(a1, 1);
  v3 = a1[1576];
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "jc_wait";
  sub_60421AE4(v3, v5, 1);
  return sub_60813430(v2, "SE_BOSS_JR_DEMO_CROWN_ATTACKSIGN", 0);
}
