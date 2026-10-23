/* sub_6069AD6C
 * address: 0x6069AD6C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6069AD6C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB9550 & ~(1617538432 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9550) )
  {
    dword_60CB954C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB9550);
  }
  return &dword_60CB954C;
}
