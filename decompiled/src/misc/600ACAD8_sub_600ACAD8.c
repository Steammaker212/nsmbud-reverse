/* sub_600ACAD8
 * address: 0x600ACAD8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600ACAD8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C83010 & ~(1611320044 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C83010) )
  {
    dword_60C8300C = (int)&off_60BC8EA4;
    _cxa_guard_release(&dword_60C83010);
  }
  return &dword_60C8300C;
}
