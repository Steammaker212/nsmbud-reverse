/* sub_6026EF8C
 * address: 0x6026EF8C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6026EF8C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8E87C & ~(1613164448 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E87C) )
  {
    dword_60C8E878 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C8E87C);
  }
  return &dword_60C8E878;
}
