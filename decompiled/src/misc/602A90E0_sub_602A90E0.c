/* sub_602A90E0
 * address: 0x602A90E0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602A90E0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C908B0 & ~(1613402356 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C908B0) )
  {
    dword_60C908AC = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C908B0);
  }
  return &dword_60C908AC;
}
