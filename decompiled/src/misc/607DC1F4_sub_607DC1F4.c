/* sub_607DC1F4
 * address: 0x607DC1F4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_607DC1F4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC575C & ~(1618854408 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC575C) )
  {
    dword_60CC5758 = (int)&off_60BF942C;
    _cxa_guard_release(&dword_60CC575C);
  }
  return &dword_60CC5758;
}
