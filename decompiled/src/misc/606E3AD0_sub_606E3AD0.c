/* sub_606E3AD0
 * address: 0x606E3AD0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606E3AD0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBBECC & ~(1617836772 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBBECC) )
  {
    dword_60CBBEC8 = (int)&off_60C09CE0;
    _cxa_guard_release(&dword_60CBBECC);
  }
  return &dword_60CBBEC8;
}
