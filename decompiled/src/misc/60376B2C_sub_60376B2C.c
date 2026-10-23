/* sub_60376B2C
 * address: 0x60376B2C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60376B2C()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C96458 & ~(1614244672 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C96458) )
  {
    dword_60C96454 = (int)&off_60BF0B70;
    _cxa_guard_release(dword_60C96458);
  }
  return &dword_60C96454;
}
