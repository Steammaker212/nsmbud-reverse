/* sub_608056C0
 * address: 0x608056C0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608056C0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC648C & ~(1619023572 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC648C) )
  {
    dword_60CC6488 = (int)&off_60C27F70;
    _cxa_guard_release(&dword_60CC648C);
  }
  return &dword_60CC6488;
}
