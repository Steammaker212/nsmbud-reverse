/* sub_606C0604
 * address: 0x606C0604   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606C0604()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBA8E8 & ~(1617692184 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA8E8) )
  {
    dword_60CBA8E4 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBA8E8);
  }
  return &dword_60CBA8E4;
}
