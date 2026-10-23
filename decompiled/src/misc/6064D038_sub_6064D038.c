/* sub_6064D038
 * address: 0x6064D038   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6064D038()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB60EC & ~(1617219660 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB60EC) )
  {
    dword_60CB60E8 = (int)&off_60C13CF8;
    _cxa_guard_release(&dword_60CB60EC);
  }
  return &dword_60CB60E8;
}
