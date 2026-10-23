/* sub_605AED0C
 * address: 0x605AED0C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605AED0C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB02B4 & ~(1616571680 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB02B4) )
  {
    dword_60CB02B0 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB02B4);
  }
  return &dword_60CB02B0;
}
