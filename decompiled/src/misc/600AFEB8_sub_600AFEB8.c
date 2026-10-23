/* sub_600AFEB8
 * address: 0x600AFEB8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600AFEB8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C82EAC & ~(1611333324 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C82EAC) )
  {
    dword_60C82EA8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C82EAC);
  }
  return &dword_60C82EA8;
}
