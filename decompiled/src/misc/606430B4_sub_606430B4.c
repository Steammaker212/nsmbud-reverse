/* sub_606430B4
 * address: 0x606430B4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606430B4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB5A58 & ~(1617178824 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5A58) )
  {
    dword_60CB5A54 = (int)&off_60C13484;
    _cxa_guard_release(&dword_60CB5A58);
  }
  return &dword_60CB5A54;
}
