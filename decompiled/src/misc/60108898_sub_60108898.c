/* sub_60108898
 * address: 0x60108898   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60108898()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C86328 & ~(1611696300 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C86328) )
  {
    dword_60C86324 = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60C86328);
  }
  return &dword_60C86324;
}
