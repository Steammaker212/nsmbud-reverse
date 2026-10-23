/* sub_600BC608
 * address: 0x600BC608   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600BC608()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C83740 & ~(1611384348 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C83740) )
  {
    dword_60C8373C = (int)&off_60BC9D8C;
    _cxa_guard_release(&dword_60C83740);
  }
  return &dword_60C8373C;
}
