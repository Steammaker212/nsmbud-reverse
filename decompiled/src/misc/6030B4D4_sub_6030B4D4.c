/* sub_6030B4D4
 * address: 0x6030B4D4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6030B4D4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C92F24 & ~(1613804776 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F24) )
  {
    dword_60C92F20 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C92F24);
  }
  return &dword_60C92F20;
}
