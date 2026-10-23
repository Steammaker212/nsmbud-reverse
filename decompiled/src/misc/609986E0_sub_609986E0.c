/* sub_609986E0
 * address: 0x609986E0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_609986E0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CD0C54 & ~(1620674292 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C54) )
  {
    dword_60CD0C50 = (int)sub_60995B28();
    _cxa_guard_release(&dword_60CD0C54);
  }
  return &dword_60CD0C50;
}
