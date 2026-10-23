/* sub_603626B4
 * address: 0x603626B4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603626B4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C958CC & ~(1614161608 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C958CC) )
  {
    dword_60C958C8 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C958CC);
  }
  return &dword_60C958C8;
}
