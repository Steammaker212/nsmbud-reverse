/* sub_607E0588
 * address: 0x607E0588   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_607E0588()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC5820 & ~(1618871708 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC5820) )
  {
    dword_60CC581C = (int)&off_60C266E0;
    _cxa_guard_release(&dword_60CC5820);
  }
  return &dword_60CC581C;
}
