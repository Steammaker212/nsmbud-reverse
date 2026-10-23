/* sub_6058014C
 * address: 0x6058014C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6058014C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAF000 & ~(1616380256 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAF000) )
  {
    dword_60CAEFFC = (int)&off_60C04FBC;
    _cxa_guard_release(&dword_60CAF000);
  }
  return &dword_60CAEFFC;
}
