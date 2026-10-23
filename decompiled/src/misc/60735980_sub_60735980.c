/* sub_60735980
 * address: 0x60735980   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60735980()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBDE5C & ~(1618172308 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDE5C) )
  {
    dword_60CBDE58 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBDE5C);
  }
  return &dword_60CBDE58;
}
