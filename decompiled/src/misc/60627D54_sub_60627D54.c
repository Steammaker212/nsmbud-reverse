/* sub_60627D54
 * address: 0x60627D54   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60627D54()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB3BF8 & ~(1617067368 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3BF8) )
  {
    dword_60CB3BF4 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB3BF8);
  }
  return &dword_60CB3BF4;
}
