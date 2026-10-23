/* sub_606E4238
 * address: 0x606E4238   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606E4238()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBBF1C & ~(1617838668 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBBF1C) )
  {
    dword_60CBBF18 = (int)&off_60C09CE0;
    _cxa_guard_release(&dword_60CBBF1C);
  }
  return &dword_60CBBF18;
}
