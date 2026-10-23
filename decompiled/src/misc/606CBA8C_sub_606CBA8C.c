/* sub_606CBA8C
 * address: 0x606CBA8C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606CBA8C()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CBAE18 & ~(1617738400 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CBAE18) )
  {
    dword_60CBAE14 = (int)&off_60C12DF0;
    _cxa_guard_release(dword_60CBAE18);
  }
  return &dword_60CBAE14;
}
