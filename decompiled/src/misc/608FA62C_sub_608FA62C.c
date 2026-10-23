/* sub_608FA62C
 * address: 0x608FA62C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608FA62C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CCEE78 & ~(1620026944 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEE78) )
  {
    dword_60CCEE74 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60CCEE78);
  }
  return &dword_60CCEE74;
}
