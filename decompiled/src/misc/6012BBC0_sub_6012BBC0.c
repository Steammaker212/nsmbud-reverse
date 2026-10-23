/* sub_6012BBC0
 * address: 0x6012BBC0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6012BBC0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8731C & ~(1611840468 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8731C) )
  {
    dword_60C87318 = (int)&off_60BC317C;
    _cxa_guard_release(&dword_60C8731C);
  }
  return &dword_60C87318;
}
