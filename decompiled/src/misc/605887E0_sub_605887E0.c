/* sub_605887E0
 * address: 0x605887E0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605887E0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAF218 & ~(1616414708 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAF218) )
  {
    dword_60CAF214 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CAF218);
  }
  return &dword_60CAF214;
}
