/* sub_60910944
 * address: 0x60910944   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60910944()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CCFAFC & ~(1620117848 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CCFAFC) )
  {
    dword_60CCFAF8 = (int)&off_60C2A1D8;
    _cxa_guard_release(&dword_60CCFAFC);
  }
  return &dword_60CCFAF8;
}
