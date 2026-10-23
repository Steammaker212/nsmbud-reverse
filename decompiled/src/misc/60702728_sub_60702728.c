/* sub_60702728
 * address: 0x60702728   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60702728()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBC764 & ~(1617962812 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC764) )
  {
    dword_60CBC760 = (int)&off_60C20B78;
    _cxa_guard_release(&dword_60CBC764);
  }
  return &dword_60CBC760;
}
