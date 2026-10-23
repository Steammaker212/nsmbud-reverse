/* sub_608533A0
 * address: 0x608533A0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608533A0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9DA34 & ~(1619342260 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA34) )
  {
    dword_60C9DA30 = 0;
    _cxa_guard_release(&dword_60C9DA34);
  }
  return &dword_60C9DA30;
}
