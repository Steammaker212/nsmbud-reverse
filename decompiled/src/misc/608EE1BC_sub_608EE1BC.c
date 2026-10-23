/* sub_608EE1BC
 * address: 0x608EE1BC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608EE1BC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC6BD8 & ~(1619976656 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6BD8) )
  {
    dword_60CC6BD4 = (int)&off_60C2A1FC;
    _cxa_guard_release(&dword_60CC6BD8);
  }
  return &dword_60CC6BD4;
}
