/* sub_600EE15C
 * address: 0x600EE15C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600EE15C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C836B8 & ~(1611587952 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C836B8) )
  {
    dword_60C836B4 = (int)&off_60BC9BA0;
    _cxa_guard_release(&dword_60C836B8);
  }
  return &dword_60C836B4;
}
