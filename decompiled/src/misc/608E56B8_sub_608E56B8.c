/* sub_608E56B8
 * address: 0x608E56B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608E56B8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CCEBC0 & ~(1619941068 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEBC0) )
  {
    dword_60CCEBBC = (int)&off_60C2A398;
    _cxa_guard_release(&dword_60CCEBC0);
  }
  return &dword_60CCEBBC;
}
