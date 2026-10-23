/* sub_6058F3E4
 * address: 0x6058F3E4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6058F3E4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAF62C & ~(1616442360 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAF62C) )
  {
    dword_60CAF628 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CAF62C);
  }
  return &dword_60CAF628;
}
