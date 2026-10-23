/* sub_606C1C50
 * address: 0x606C1C50   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606C1C50()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBA968 & ~(1617697892 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA968) )
  {
    dword_60CBA964 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBA968);
  }
  return &dword_60CBA964;
}
