/* sub_60679938
 * address: 0x60679938   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60679938()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8E648 & ~(1617402188 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E648) )
  {
    dword_60C8E644 = (int)&off_60BDBC48;
    _cxa_guard_release(&dword_60C8E648);
  }
  return &dword_60C8E644;
}
