/* sub_606C131C
 * address: 0x606C131C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606C131C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB1080 & ~(1617695540 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1080) )
  {
    dword_60CB107C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB1080);
  }
  return a2 == &dword_60CB107C || sub_60027FB0(a2);
}
