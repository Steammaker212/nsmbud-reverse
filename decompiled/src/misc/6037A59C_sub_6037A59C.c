/* sub_6037A59C
 * address: 0x6037A59C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6037A59C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9664C & ~(1614259632 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9664C) )
  {
    dword_60C96648 = (int)&off_60BE91C8;
    _cxa_guard_release(&dword_60C9664C);
  }
  return &dword_60C96648;
}
