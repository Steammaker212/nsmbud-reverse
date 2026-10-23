/* sub_601F3E3C
 * address: 0x601F3E3C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601F3E3C()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C8B9F4 & ~(1612660304 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C8B9F4) )
  {
    dword_60C8B9F0 = (int)&off_60BD6B64;
    _cxa_guard_release(dword_60C8B9F4);
  }
  return &dword_60C8B9F0;
}
