/* sub_606CD310
 * address: 0x606CD310   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606CD310()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBB2C8 & ~(1617744676 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB2C8) )
  {
    dword_60CBB2C4 = (int)&off_60C1CCEC;
    _cxa_guard_release(&dword_60CBB2C8);
  }
  return &dword_60CBB2C4;
}
