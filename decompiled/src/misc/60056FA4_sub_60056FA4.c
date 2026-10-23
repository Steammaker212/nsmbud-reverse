/* sub_60056FA4
 * address: 0x60056FA4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60056FA4()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C80A14 & ~(1610969016 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C80A14) )
  {
    dword_60C80A10 = (int)&off_60BC45B8;
    _cxa_guard_release(dword_60C80A14);
  }
  return &dword_60C80A10;
}
