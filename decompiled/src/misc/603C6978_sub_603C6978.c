/* sub_603C6978
 * address: 0x603C6978   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603C6978()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C987E4 & ~(1614571916 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C987E4) )
  {
    dword_60C987E0 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C987E4);
  }
  return &dword_60C987E0;
}
