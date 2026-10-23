/* sub_6069ACDC
 * address: 0x6069ACDC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6069ACDC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB9550 & ~(1617538292 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9550) )
  {
    dword_60CB954C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB9550);
  }
  return a2 == &dword_60CB954C || sub_60027FB0(a2);
}
