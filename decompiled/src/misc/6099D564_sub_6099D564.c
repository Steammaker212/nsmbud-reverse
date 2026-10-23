/* sub_6099D564
 * address: 0x6099D564   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6099D564()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CD0C94 & ~(1620694392 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C94) )
  {
    dword_60CD0C90 = (int)&off_60BFB228;
    _cxa_guard_release(&dword_60CD0C94);
  }
  return &dword_60CD0C90;
}
