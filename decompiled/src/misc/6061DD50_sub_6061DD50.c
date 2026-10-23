/* sub_6061DD50
 * address: 0x6061DD50   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6061DD50()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB3680 & ~(1617026404 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3680) )
  {
    dword_60CB367C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB3680);
  }
  return &dword_60CB367C;
}
