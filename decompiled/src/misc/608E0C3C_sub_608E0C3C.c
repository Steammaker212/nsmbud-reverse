/* sub_608E0C3C
 * address: 0x608E0C3C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608E0C3C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8C224 & ~(1619922000 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
  {
    dword_60C8C220 = (int)&off_60BD84A8;
    _cxa_guard_release(&dword_60C8C224);
  }
  return &dword_60C8C220;
}
