/* sub_60806020
 * address: 0x60806020   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60806020()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC64B4 & ~(1619025972 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC64B4) )
  {
    dword_60CC64B0 = (int)&off_60C28040;
    _cxa_guard_release(&dword_60CC64B4);
  }
  return &dword_60CC64B0;
}
