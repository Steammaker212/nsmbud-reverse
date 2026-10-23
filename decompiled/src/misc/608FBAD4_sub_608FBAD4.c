/* sub_608FBAD4
 * address: 0x608FBAD4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608FBAD4()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CCEF14 & ~(1620032232 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CCEF14) )
  {
    dword_60CCEF10 = (int)&off_60C5C940;
    _cxa_guard_release(dword_60CCEF14);
  }
  return &dword_60CCEF10;
}
