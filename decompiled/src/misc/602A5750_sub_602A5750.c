/* sub_602A5750
 * address: 0x602A5750   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602A5750()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C906C0 & ~(1613387620 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C906C0) )
  {
    dword_60C906BC = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C906C0);
  }
  return &dword_60C906BC;
}
