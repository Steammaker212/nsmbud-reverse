/* sub_6098A488
 * address: 0x6098A488   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6098A488()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CD0C44 & ~(1620616348 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C44) )
  {
    dword_60CD0C40 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60CD0C44);
  }
  return &dword_60CD0C40;
}
