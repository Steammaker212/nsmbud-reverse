/* sub_600974C0
 * address: 0x600974C0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600974C0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C81F10 & ~(1611232468 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C81F10) )
  {
    dword_60C81F0C = (int)&off_60BC763C;
    _cxa_guard_release(&dword_60C81F10);
  }
  return &dword_60C81F0C;
}
