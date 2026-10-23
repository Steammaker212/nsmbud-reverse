/* sub_6070FEA0
 * address: 0x6070FEA0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6070FEA0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBD1AC & ~(1618017972 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD1AC) )
  {
    dword_60CBD1A8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CBD1AC);
  }
  return &dword_60CBD1A8;
}
