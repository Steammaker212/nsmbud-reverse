/* sub_6011242C
 * address: 0x6011242C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6011242C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8693C & ~(1611736128 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8693C) )
  {
    dword_60C86938 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C8693C);
  }
  return &dword_60C86938;
}
