/* sub_606D8ACC
 * address: 0x606D8ACC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606D8ACC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBB7C4 & ~(1617791712 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB7C4) )
  {
    dword_60CBB7C0 = (int)&off_60C1E69C;
    _cxa_guard_release(&dword_60CBB7C4);
  }
  return &dword_60CBB7C0;
}
