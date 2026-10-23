/* sub_607407C4
 * address: 0x607407C4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_607407C4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBE274 & ~(1618216920 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE274) )
  {
    dword_60CBE270 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CBE274);
  }
  return &dword_60CBE270;
}
