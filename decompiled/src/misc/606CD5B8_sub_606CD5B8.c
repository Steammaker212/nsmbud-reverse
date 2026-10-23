/* sub_606CD5B8
 * address: 0x606CD5B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606CD5B8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBB2E8 & ~(1617745356 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB2E8) )
  {
    dword_60CBB2E4 = (int)&off_60C1CCEC;
    _cxa_guard_release(&dword_60CBB2E8);
  }
  return &dword_60CBB2E4;
}
