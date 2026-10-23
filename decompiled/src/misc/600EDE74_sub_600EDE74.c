/* sub_600EDE74
 * address: 0x600EDE74   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600EDE74()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C836A8 & ~(1611587208 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C836A8) )
  {
    dword_60C836A4 = (int)&off_60BC9BA0;
    _cxa_guard_release(&dword_60C836A8);
  }
  return &dword_60C836A4;
}
