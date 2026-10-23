/* sub_601F8ABC
 * address: 0x601F8ABC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601F8ABC()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C8BD50 & ~(1612679888 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C8BD50) )
  {
    dword_60C8BD4C = (int)&off_60BD6B64;
    _cxa_guard_release(dword_60C8BD50);
  }
  return &dword_60C8BD4C;
}
