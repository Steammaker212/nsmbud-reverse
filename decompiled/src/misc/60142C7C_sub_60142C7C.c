/* sub_60142C7C
 * address: 0x60142C7C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60142C7C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C823D4 & ~(1611934864 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C823D4) )
  {
    dword_60C823D0 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C823D4);
  }
  return &dword_60C823D0;
}
