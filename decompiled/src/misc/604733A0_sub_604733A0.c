/* sub_604733A0
 * address: 0x604733A0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_604733A0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9D9AC & ~(1615279028 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9AC) )
  {
    dword_60C9D9A8 = (int)&off_60BF9F1C;
    _cxa_guard_release(&dword_60C9D9AC);
  }
  return &dword_60C9D9A8;
}
