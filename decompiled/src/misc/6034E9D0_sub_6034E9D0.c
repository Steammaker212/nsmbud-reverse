/* sub_6034E9D0
 * address: 0x6034E9D0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6034E9D0()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C94CD0 & ~(1614080484 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C94CD0) )
  {
    dword_60C94CCC = (int)&off_60BC3210;
    _cxa_guard_release(dword_60C94CD0);
  }
  return &dword_60C94CCC;
}
