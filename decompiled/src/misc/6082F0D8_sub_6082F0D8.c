/* sub_6082F0D8
 * address: 0x6082F0D8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6082F0D8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC6FB4 & ~(1619194092 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6FB4) )
  {
    dword_60CC6FB0 = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60CC6FB4);
  }
  return &dword_60CC6FB0;
}
