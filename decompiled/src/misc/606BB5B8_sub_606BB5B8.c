/* sub_606BB5B8
 * address: 0x606BB5B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606BB5B8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBA5C4 & ~(1617671628 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA5C4) )
  {
    dword_60CBA5C0 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CBA5C4);
  }
  return &dword_60CBA5C0;
}
