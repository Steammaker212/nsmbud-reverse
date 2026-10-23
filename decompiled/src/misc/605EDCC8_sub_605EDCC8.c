/* sub_605EDCC8
 * address: 0x605EDCC8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605EDCC8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB0614 & ~(1616829660 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0614) )
  {
    dword_60CB0610 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB0614);
  }
  return &dword_60CB0610;
}
