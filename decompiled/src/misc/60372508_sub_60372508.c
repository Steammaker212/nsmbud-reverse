/* sub_60372508
 * address: 0x60372508   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60372508()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9616C & ~(1614226716 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9616C) )
  {
    dword_60C96168 = (int)&off_60BF0B70;
    _cxa_guard_release(&dword_60C9616C);
  }
  return &dword_60C96168;
}
