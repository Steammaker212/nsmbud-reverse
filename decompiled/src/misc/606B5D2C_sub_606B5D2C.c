/* sub_606B5D2C
 * address: 0x606B5D2C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606B5D2C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBA45C & ~(1617648960 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA45C) )
  {
    dword_60CBA458 = (int)&off_60C1AF7C;
    _cxa_guard_release(&dword_60CBA45C);
  }
  return &dword_60CBA458;
}
