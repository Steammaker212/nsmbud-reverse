/* sub_606C5834
 * address: 0x606C5834   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606C5834()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBABDC & ~(1617713224 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBABDC) )
  {
    dword_60CBABD8 = (int)&off_60C09BC4;
    _cxa_guard_release(&dword_60CBABDC);
  }
  return &dword_60CBABD8;
}
