/* sub_606AF7C4
 * address: 0x606AF7C4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606AF7C4()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CBA220 & ~(1617623000 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CBA220) )
  {
    dword_60CBA21C = (int)&off_60BC00BC;
    _cxa_guard_release(dword_60CBA220);
  }
  return &dword_60CBA21C;
}
