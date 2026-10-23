/* sub_60912028
 * address: 0x60912028   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60912028()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CCFC64 & ~(1620123708 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CCFC64) )
  {
    dword_60CCFC60 = (int)&off_60C2A38C;
    _cxa_guard_release(&dword_60CCFC64);
  }
  return &dword_60CCFC60;
}
