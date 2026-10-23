/* sub_606580A0
 * address: 0x606580A0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606580A0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB65A4 & ~(1617264820 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB65A4) )
  {
    dword_60CB65A0 = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60CB65A4);
  }
  return &dword_60CB65A0;
}
