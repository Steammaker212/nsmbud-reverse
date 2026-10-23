/* sub_6038DC54
 * address: 0x6038DC54   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6038DC54()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C86B48 & ~(1614339176 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B48) )
  {
    dword_60C86B44 = (int)&off_60BD0CA4;
    _cxa_guard_release(&dword_60C86B48);
  }
  return &dword_60C86B44;
}
