/* sub_60365E3C
 * address: 0x60365E3C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60365E3C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C83100 & ~(1614175824 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C83100) )
  {
    dword_60C830FC = (int)&off_60BC9040;
    _cxa_guard_release(&dword_60C83100);
  }
  return &dword_60C830FC;
}
