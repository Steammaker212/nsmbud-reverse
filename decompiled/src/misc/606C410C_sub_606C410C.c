/* sub_606C410C
 * address: 0x606C410C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606C410C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBAB1C & ~(1617707296 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBAB1C) )
  {
    dword_60CBAB18 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBAB1C);
  }
  return &dword_60CBAB18;
}
