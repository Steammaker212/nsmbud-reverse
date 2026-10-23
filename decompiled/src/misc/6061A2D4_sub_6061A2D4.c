/* sub_6061A2D4
 * address: 0x6061A2D4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6061A2D4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB3474 & ~(1617011432 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3474) )
  {
    dword_60CB3470 = (int)&off_60C108F0;
    _cxa_guard_release(&dword_60CB3474);
  }
  return &dword_60CB3470;
}
