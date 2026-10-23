/* sub_605D2440
 * address: 0x605D2440   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605D2440(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB1204 & ~(1616716888 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1204) )
  {
    dword_60CB1200 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB1204);
  }
  return a2 == &dword_60CB1200 || sub_60027FB0(a2);
}
