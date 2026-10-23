/* sub_603D33A4
 * address: 0x603D33A4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603D33A4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C987EC & ~(1614623672 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C987EC) )
  {
    dword_60C987E8 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C987EC);
  }
  return &dword_60C987E8;
}
