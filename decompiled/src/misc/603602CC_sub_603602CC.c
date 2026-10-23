/* sub_603602CC
 * address: 0x603602CC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603602CC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C86B38 & ~(1614152416 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B38) )
  {
    dword_60C86B34 = (int)&off_60BD0CA4;
    _cxa_guard_release(&dword_60C86B38);
  }
  return &dword_60C86B34;
}
