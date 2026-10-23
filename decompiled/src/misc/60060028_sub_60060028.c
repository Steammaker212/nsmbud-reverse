/* sub_60060028
 * address: 0x60060028   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60060028()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C80EFC & ~(1611006012 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C80EFC) )
  {
    dword_60C80EF8 = (int)&off_60BC3768;
    _cxa_guard_release(&dword_60C80EFC);
  }
  return &dword_60C80EF8;
}
