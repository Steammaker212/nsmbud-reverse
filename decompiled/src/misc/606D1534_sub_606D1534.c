/* sub_606D1534
 * address: 0x606D1534   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606D1534()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBB4B8 & ~(1617761608 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB4B8) )
  {
    dword_60CBB4B4 = (int)&off_60C12DFC;
    _cxa_guard_release(&dword_60CBB4B8);
  }
  return &dword_60CBB4B4;
}
