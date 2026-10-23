/* sub_60671924
 * address: 0x60671924   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60671924()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB7450 & ~(1617369400 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB7450) )
  {
    dword_60CB744C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB7450);
  }
  return &dword_60CB744C;
}
