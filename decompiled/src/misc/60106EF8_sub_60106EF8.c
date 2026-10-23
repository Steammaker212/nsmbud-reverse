/* sub_60106EF8
 * address: 0x60106EF8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60106EF8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8624C & ~(1611689740 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8624C) )
  {
    dword_60C86248 = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60C8624C);
  }
  return &dword_60C86248;
}
