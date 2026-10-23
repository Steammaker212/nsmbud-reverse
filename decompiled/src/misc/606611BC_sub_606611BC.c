/* sub_606611BC
 * address: 0x606611BC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606611BC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB69AC & ~(1617301968 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB69AC) )
  {
    dword_60CB69A8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB69AC);
  }
  return &dword_60CB69A8;
}
