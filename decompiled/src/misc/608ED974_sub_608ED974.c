/* sub_608ED974
 * address: 0x608ED974   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608ED974()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC6BE0 & ~(1619974536 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6BE0) )
  {
    dword_60CC6BDC = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60CC6BE0);
  }
  return &dword_60CC6BDC;
}
