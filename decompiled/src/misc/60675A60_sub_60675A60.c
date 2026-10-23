/* sub_60675A60
 * address: 0x60675A60   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60675A60()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CB7BD4 & ~(1617386100 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CB7BD4) )
  {
    dword_60CB7BD0 = (int)&off_60C158F0;
    _cxa_guard_release(dword_60CB7BD4);
  }
  return &dword_60CB7BD0;
}
