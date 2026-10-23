/* sub_60168440
 * address: 0x60168440   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60168440()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C88A88 & ~(1612088404 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A88) )
  {
    dword_60C88A84 = (int)&off_60BD4AD8;
    _cxa_guard_release(&dword_60C88A88);
  }
  return &dword_60C88A84;
}
