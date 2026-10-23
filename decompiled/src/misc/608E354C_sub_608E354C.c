/* sub_608E354C
 * address: 0x608E354C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608E354C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC6C14 & ~(1619932512 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6C14) )
  {
    dword_60CC6C10 = (int)&off_60C2A398;
    _cxa_guard_release(&dword_60CC6C14);
  }
  return &dword_60CC6C10;
}
