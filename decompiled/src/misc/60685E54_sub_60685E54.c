/* sub_60685E54
 * address: 0x60685E54   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60685E54()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CB82F8 & ~(1617452648 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CB82F8) )
  {
    dword_60CB82F4 = (int)&off_60BC2CE0;
    _cxa_guard_release(dword_60CB82F8);
  }
  return &dword_60CB82F4;
}
