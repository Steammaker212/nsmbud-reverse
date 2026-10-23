/* sub_607D62D4
 * address: 0x607D62D4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_607D62D4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC4B70 & ~(1618830056 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC4B70) )
  {
    dword_60CC4B6C = (int)&off_60C23E58;
    _cxa_guard_release(&dword_60CC4B70);
  }
  return &dword_60CC4B6C;
}
