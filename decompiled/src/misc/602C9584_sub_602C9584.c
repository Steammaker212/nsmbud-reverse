/* sub_602C9584
 * address: 0x602C9584   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602C9584()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C91794 & ~(1613534616 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C91794) )
  {
    dword_60C91790 = (int)&off_60BE5584;
    _cxa_guard_release(&dword_60C91794);
  }
  return &dword_60C91790;
}
