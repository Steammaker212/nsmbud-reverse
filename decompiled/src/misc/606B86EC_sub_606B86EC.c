/* sub_606B86EC
 * address: 0x606B86EC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606B86EC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBA4E4 & ~(1617659648 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA4E4) )
  {
    dword_60CBA4E0 = (int)&off_60C1AF7C;
    _cxa_guard_release(&dword_60CBA4E4);
  }
  return &dword_60CBA4E0;
}
