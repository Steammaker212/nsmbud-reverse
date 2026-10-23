/* sub_60708314
 * address: 0x60708314   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60708314()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBC944 & ~(1617986344 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC944) )
  {
    dword_60CBC940 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBC944);
  }
  return &dword_60CBC940;
}
