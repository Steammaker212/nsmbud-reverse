/* sub_6013958C
 * address: 0x6013958C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6013958C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C87A5C & ~(1611896224 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C87A5C) )
  {
    dword_60C87A58 = (int)&off_60BD28A8;
    _cxa_guard_release(&dword_60C87A5C);
  }
  return &dword_60C87A58;
}
