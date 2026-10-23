/* sub_608F2424
 * address: 0x608F2424   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608F2424()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CCEC28 & ~(1619993656 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CCEC28) )
  {
    dword_60CCEC24 = (int)&off_60C5C760;
    _cxa_guard_release(dword_60CCEC28);
  }
  return &dword_60CCEC24;
}
