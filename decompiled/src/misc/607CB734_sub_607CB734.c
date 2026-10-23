/* sub_607CB734
 * address: 0x607CB734   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_607CB734()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBF6E0 & ~(1618786120 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBF6E0) )
  {
    dword_60CBF6DC = (int)&off_60C23E4C;
    _cxa_guard_release(&dword_60CBF6E0);
  }
  return &dword_60CBF6DC;
}
