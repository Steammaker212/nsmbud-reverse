/* sub_605A2A24
 * address: 0x605A2A24   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605A2A24()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAFEB0 & ~(1616521784 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAFEB0) )
  {
    dword_60CAFEAC = (int)&off_60BC8348;
    _cxa_guard_release(&dword_60CAFEB0);
  }
  return &dword_60CAFEAC;
}
