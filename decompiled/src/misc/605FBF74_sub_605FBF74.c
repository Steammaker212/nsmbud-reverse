/* sub_605FBF74
 * address: 0x605FBF74   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605FBF74(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB2610 & ~(1616887692 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2610) )
  {
    dword_60CB260C = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB2610);
  }
  return a2 == &dword_60CB260C || sub_60026DC8(a2);
}
