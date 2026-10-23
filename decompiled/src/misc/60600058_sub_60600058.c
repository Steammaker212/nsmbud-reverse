/* sub_60600058
 * address: 0x60600058   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60600058()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB2798 & ~(1616904300 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2798) )
  {
    dword_60CB2794 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB2798);
  }
  return &dword_60CB2794;
}
