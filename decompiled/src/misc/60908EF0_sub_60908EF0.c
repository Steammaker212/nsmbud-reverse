/* sub_60908EF0
 * address: 0x60908EF0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60908EF0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8C22C & ~(1620086532 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C22C) )
  {
    dword_60C8C228 = (int)&off_60BD84B4;
    _cxa_guard_release(&dword_60C8C22C);
  }
  return &dword_60C8C228;
}
