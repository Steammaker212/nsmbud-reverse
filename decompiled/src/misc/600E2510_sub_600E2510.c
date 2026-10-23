/* sub_600E2510
 * address: 0x600E2510   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600E2510()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C84B4C & ~(1611539748 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B4C) )
  {
    dword_60C84B48 = (int)&off_60BCCA60;
    _cxa_guard_release(&dword_60C84B4C);
  }
  return &dword_60C84B48;
}
