/* sub_608F22B0
 * address: 0x608F22B0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608F22B0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CCEC20 & ~(1619993284 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEC20) )
  {
    dword_60CCEC1C = (int)&off_60BF9D20;
    _cxa_guard_release(&dword_60CCEC20);
  }
  return &dword_60CCEC1C;
}
