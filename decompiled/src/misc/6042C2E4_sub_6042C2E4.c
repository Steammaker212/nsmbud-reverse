/* sub_6042C2E4
 * address: 0x6042C2E4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6042C2E4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C80410 & ~(1614988024 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C80410) )
  {
    dword_60C8040C = (int)&off_60BC3240;
    _cxa_guard_release(&dword_60C80410);
  }
  return &dword_60C8040C;
}
