/* sub_608F85B8
 * address: 0x608F85B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608F85B8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CCEE70 & ~(1620018636 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEE70) )
  {
    dword_60CCEE6C = (int)&off_60C5C940;
    _cxa_guard_release(&dword_60CCEE70);
  }
  return &dword_60CCEE6C;
}
