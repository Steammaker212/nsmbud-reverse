/* sub_60902268
 * address: 0x60902268   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60902268()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9BB2C & ~(1620058748 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB2C) )
  {
    dword_60C9BB28 = (int)&off_60BF9F4C;
    _cxa_guard_release(&dword_60C9BB2C);
  }
  return &dword_60C9BB28;
}
