/* sub_603E4DC4
 * address: 0x603E4DC4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603E4DC4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8DC28 & ~(1614695896 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DC28) )
  {
    dword_60C8DC24 = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C8DC28);
  }
  return &dword_60C8DC24;
}
