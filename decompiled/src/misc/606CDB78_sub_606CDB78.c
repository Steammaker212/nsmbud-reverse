/* sub_606CDB78
 * address: 0x606CDB78   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606CDB78()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBB328 & ~(1617746828 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB328) )
  {
    dword_60CBB324 = (int)&off_60C1CCEC;
    _cxa_guard_release(&dword_60CBB328);
  }
  return &dword_60CBB324;
}
