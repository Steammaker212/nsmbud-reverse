/* sub_604654D0
 * address: 0x604654D0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_604654D0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C7B418 & ~(1615221988 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B418) )
  {
    dword_60C7B414 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C7B418);
  }
  return &dword_60C7B414;
}
