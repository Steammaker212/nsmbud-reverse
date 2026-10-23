/* sub_60349AFC
 * address: 0x60349AFC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60349AFC()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C94A38 & ~(1614060304 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C94A38) )
  {
    dword_60C94A34 = (int)&off_60BC321C;
    _cxa_guard_release(dword_60C94A38);
  }
  return &dword_60C94A34;
}
