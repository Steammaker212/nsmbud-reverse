/* sub_6013570C
 * address: 0x6013570C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6013570C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C87670 & ~(1611880224 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C87670) )
  {
    dword_60C8766C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C87670);
  }
  return &dword_60C8766C;
}
