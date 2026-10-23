/* sub_6082FEE4
 * address: 0x6082FEE4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6082FEE4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC70E8 & ~(1619197688 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC70E8) )
  {
    dword_60CC70E4 = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60CC70E8);
  }
  return &dword_60CC70E4;
}
