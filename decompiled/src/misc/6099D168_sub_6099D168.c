/* sub_6099D168
 * address: 0x6099D168   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6099D168()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CD0D78 & ~(1620693372 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0D78) )
  {
    dword_60CD0D74 = (int)&off_60C5C940;
    _cxa_guard_release(&dword_60CD0D78);
  }
  return &dword_60CD0D74;
}
