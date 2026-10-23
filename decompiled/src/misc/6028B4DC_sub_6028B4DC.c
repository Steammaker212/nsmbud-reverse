/* sub_6028B4DC
 * address: 0x6028B4DC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6028B4DC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8F37C & ~(1613280496 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F37C) )
  {
    dword_60C8F378 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C8F37C);
  }
  return &dword_60C8F378;
}
