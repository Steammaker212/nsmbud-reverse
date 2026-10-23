/* sub_6037AFCC
 * address: 0x6037AFCC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6037AFCC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C96674 & ~(1614262240 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C96674) )
  {
    dword_60C96670 = (int)&off_60BE43EC;
    _cxa_guard_release(&dword_60C96674);
  }
  return &dword_60C96670;
}
