/* sub_606CDF0C
 * address: 0x606CDF0C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606CDF0C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBB348 & ~(1617747744 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB348) )
  {
    dword_60CBB344 = (int)&off_60C1D3A0;
    _cxa_guard_release(&dword_60CBB348);
  }
  return &dword_60CBB344;
}
