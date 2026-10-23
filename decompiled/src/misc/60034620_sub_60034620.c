/* sub_60034620
 * address: 0x60034620   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60034620()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C7FDBC & ~(1610827316 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7FDBC) )
  {
    dword_60C7FDB8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C7FDBC);
  }
  return &dword_60C7FDB8;
}
