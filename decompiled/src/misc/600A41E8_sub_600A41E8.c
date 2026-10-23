/* sub_600A41E8
 * address: 0x600A41E8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600A41E8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C82858 & ~(1611284988 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C82858) )
  {
    dword_60C82854 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C82858);
  }
  return &dword_60C82854;
}
