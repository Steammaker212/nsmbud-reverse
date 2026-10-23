/* sub_600DAEEC
 * address: 0x600DAEEC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600DAEEC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C84734 & ~(1611509504 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C84734) )
  {
    dword_60C84730 = (int)&off_60BC8314;
    _cxa_guard_release(&dword_60C84734);
  }
  return &dword_60C84730;
}
