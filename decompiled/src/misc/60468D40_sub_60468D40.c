/* sub_60468D40
 * address: 0x60468D40   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60468D40()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9D4DC & ~(1615236436 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D4DC) )
  {
    dword_60C9D4D8 = (int)&off_60BFB4E4;
    _cxa_guard_release(&dword_60C9D4DC);
  }
  return &dword_60C9D4D8;
}
