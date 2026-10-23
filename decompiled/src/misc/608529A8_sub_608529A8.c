/* sub_608529A8
 * address: 0x608529A8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608529A8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC7F3C & ~(1619339708 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F3C) )
  {
    dword_60CC7F38 = ((int (*)(void))loc_60852A9C)();
    _cxa_guard_release(&dword_60CC7F3C);
  }
  return &dword_60CC7F38;
}
