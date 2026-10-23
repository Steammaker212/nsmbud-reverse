/* sub_60857B10
 * address: 0x60857B10   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60857B10()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9DA04 & ~(1619360548 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA04) )
  {
    dword_60C9DA00 = 0;
    _cxa_guard_release(&dword_60C9DA04);
  }
  return &dword_60C9DA00;
}
