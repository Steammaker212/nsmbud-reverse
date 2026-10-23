/* sub_606DD5F8
 * address: 0x606DD5F8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606DD5F8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBBB28 & ~(1617810956 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBBB28) )
  {
    dword_60CBBB24 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBBB28);
  }
  return &dword_60CBBB24;
}
