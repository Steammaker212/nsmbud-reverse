/* sub_606F2AA4
 * address: 0x606F2AA4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606F2AA4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBC320 & ~(1617898168 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC320) )
  {
    dword_60CBC31C = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CBC320);
  }
  return &dword_60CBC31C;
}
