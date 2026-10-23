/* sub_602966CC
 * address: 0x602966CC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602966CC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8FC88 & ~(1613326048 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8FC88) )
  {
    dword_60C8FC84 = (int)&off_60BDEC6C;
    _cxa_guard_release(&dword_60C8FC88);
  }
  return &dword_60C8FC84;
}
