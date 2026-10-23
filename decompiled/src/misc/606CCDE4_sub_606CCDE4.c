/* sub_606CCDE4
 * address: 0x606CCDE4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606CCDE4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBB290 & ~(1617743352 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB290) )
  {
    dword_60CBB28C = (int)&off_60C15488;
    _cxa_guard_release(&dword_60CBB290);
  }
  return &dword_60CBB28C;
}
