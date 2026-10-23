/* sub_603D0108
 * address: 0x603D0108   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603D0108()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C98C90 & ~(1614610716 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C98C90) )
  {
    dword_60C98C8C = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C98C90);
  }
  return &dword_60C98C8C;
}
