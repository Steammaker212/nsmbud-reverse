/* sub_608EEF34
 * address: 0x608EEF34   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608EEF34()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CCEBE0 & ~(1619980104 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEBE0) )
  {
    dword_60CCEBDC = (int)&off_60C5C3A8;
    _cxa_guard_release(&dword_60CCEBE0);
  }
  return &dword_60CCEBDC;
}
