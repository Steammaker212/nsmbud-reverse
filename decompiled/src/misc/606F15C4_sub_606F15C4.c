/* sub_606F15C4
 * address: 0x606F15C4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606F15C4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBC280 & ~(1617892824 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC280) )
  {
    dword_60CBC27C = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CBC280);
  }
  return &dword_60CBC27C;
}
