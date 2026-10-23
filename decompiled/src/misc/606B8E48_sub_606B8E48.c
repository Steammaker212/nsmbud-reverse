/* sub_606B8E48
 * address: 0x606B8E48   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606B8E48()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBA504 & ~(1617661532 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA504) )
  {
    dword_60CBA500 = (int)&off_60C1B310;
    _cxa_guard_release(&dword_60CBA504);
  }
  return &dword_60CBA500;
}
