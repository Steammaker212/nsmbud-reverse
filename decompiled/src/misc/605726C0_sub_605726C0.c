/* sub_605726C0
 * address: 0x605726C0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605726C0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAEA04 & ~(1616324308 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEA04) )
  {
    dword_60CAEA00 = (int)&off_60C01FFC;
    _cxa_guard_release(&dword_60CAEA04);
  }
  return &dword_60CAEA00;
}
