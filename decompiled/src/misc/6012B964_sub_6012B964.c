/* sub_6012B964
 * address: 0x6012B964   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6012B964()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C87314 & ~(1611839864 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C87314) )
  {
    dword_60C87310 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C87314);
  }
  return &dword_60C87310;
}
