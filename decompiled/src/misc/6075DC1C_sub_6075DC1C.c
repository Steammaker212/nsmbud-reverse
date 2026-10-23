/* sub_6075DC1C
 * address: 0x6075DC1C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6075DC1C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBF2AC & ~(1618336816 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBF2AC) )
  {
    dword_60CBF2A8 = (int)&off_60C23E4C;
    _cxa_guard_release(&dword_60CBF2AC);
  }
  return &dword_60CBF2A8;
}
