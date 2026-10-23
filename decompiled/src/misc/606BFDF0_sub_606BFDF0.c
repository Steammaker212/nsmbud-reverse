/* sub_606BFDF0
 * address: 0x606BFDF0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606BFDF0()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CBA880 & ~(1617690116 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CBA880) )
  {
    dword_60CBA87C = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60CBA880);
  }
  return &dword_60CBA87C;
}
