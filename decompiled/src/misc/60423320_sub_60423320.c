/* sub_60423320
 * address: 0x60423320   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60423320()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C80418 & ~(1614951220 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C80418) )
  {
    dword_60C80414 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60C80418);
  }
  return &dword_60C80414;
}
