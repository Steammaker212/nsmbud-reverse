/* sub_6046D2C4
 * address: 0x6046D2C4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6046D2C4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9D684 & ~(1615254232 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D684) )
  {
    dword_60C9D680 = (int)&off_60BFB4E4;
    _cxa_guard_release(&dword_60C9D684);
  }
  return &dword_60C9D680;
}
