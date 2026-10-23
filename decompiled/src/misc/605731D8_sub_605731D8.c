/* sub_605731D8
 * address: 0x605731D8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605731D8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAEA5C & ~(1616327148 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEA5C) )
  {
    dword_60CAEA58 = (int)&off_60C02538;
    _cxa_guard_release(&dword_60CAEA5C);
  }
  return &dword_60CAEA58;
}
