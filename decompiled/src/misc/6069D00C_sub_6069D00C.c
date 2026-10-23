/* sub_6069D00C
 * address: 0x6069D00C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6069D00C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB96C4 & ~(1617547296 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB96C4) )
  {
    dword_60CB96C0 = (int)&off_60C13484;
    _cxa_guard_release(&dword_60CB96C4);
  }
  return &dword_60CB96C0;
}
