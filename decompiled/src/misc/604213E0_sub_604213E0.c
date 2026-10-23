/* sub_604213E0
 * address: 0x604213E0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_604213E0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9BB04 & ~(1614943220 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB04) )
  {
    dword_60C9BB00 = (int)&off_60BF9F1C;
    _cxa_guard_release(&dword_60C9BB04);
  }
  return &dword_60C9BB00;
}
