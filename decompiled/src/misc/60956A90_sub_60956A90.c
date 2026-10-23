/* sub_60956A90
 * address: 0x60956A90   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60956A90()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C81758 & ~(1620404900 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C81758) )
  {
    dword_60C81754 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60C81758);
  }
  return &dword_60C81754;
}
