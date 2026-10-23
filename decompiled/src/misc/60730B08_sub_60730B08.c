/* sub_60730B08
 * address: 0x60730B08   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60730B08()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBDBDC & ~(1618152220 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDBDC) )
  {
    dword_60CBDBD8 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CBDBDC);
  }
  return &dword_60CBDBD8;
}
