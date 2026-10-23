/* sub_605A2C94
 * address: 0x605A2C94   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605A2C94()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAFEB8 & ~(1616522408 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAFEB8) )
  {
    dword_60CAFEB4 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60CAFEB8);
  }
  return &dword_60CAFEB4;
}
