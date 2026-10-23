/* sub_6012EEC0
 * address: 0x6012EEC0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6012EEC0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C87138 & ~(1611853524 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C87138) )
  {
    dword_60C87134 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C87138);
  }
  return &dword_60C87134;
}
