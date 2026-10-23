/* sub_600F73E0
 * address: 0x600F73E0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600F73E0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C856D0 & ~(1611625460 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C856D0) )
  {
    dword_60C856CC = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C856D0);
  }
  return &dword_60C856CC;
}
