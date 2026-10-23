/* sub_603060F4
 * address: 0x603060F4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603060F4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C92EFC & ~(1613783304 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C92EFC) )
  {
    dword_60C92EF8 = (int)&off_60BE9194;
    _cxa_guard_release(&dword_60C92EFC);
  }
  return &dword_60C92EF8;
}
