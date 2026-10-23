/* RiverPiranha__collisionGroundPoundYoshi
 * address: 0x603DF290   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A65D4
// 
// Overridden by: None
int __fastcall RiverPiranha__collisionGroundPoundYoshi(float *a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r5

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a3 + 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1614672556 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v5 && (**v5)(v5, &dword_60C7B378) )
  {
    sub_602A3520(a1, "SE_EMY_CMN_STEP", 0);
    Enemy__vf17C((Enemy *)a1);
    return 1;
  }
  else
  {
    sub_602A3520(a1, "SE_EMY_CMN_STEP", 0);
    return 1;
  }
}
