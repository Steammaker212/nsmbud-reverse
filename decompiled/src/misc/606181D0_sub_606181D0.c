/* sub_606181D0
 * address: 0x606181D0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606181D0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB3360 & ~(1617002980 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3360) )
  {
    dword_60CB335C = (int)&off_60C1028C;
    _cxa_guard_release(&dword_60CB3360);
  }
  return &dword_60CB335C;
}
