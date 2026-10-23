/* sub_606AD9D8
 * address: 0x606AD9D8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606AD9D8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBA178 & ~(1617615340 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA178) )
  {
    dword_60CBA174 = (int)&off_60C158E4;
    _cxa_guard_release(&dword_60CBA178);
  }
  return &dword_60CBA174;
}
