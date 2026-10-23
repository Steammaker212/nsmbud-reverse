/* sub_606DF778
 * address: 0x606DF778   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606DF778()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CBBCD0 & ~(1617819532 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CBBCD0) )
  {
    dword_60CBBCCC = (int)&off_60C09CE0;
    _cxa_guard_release(dword_60CBBCD0);
  }
  return &dword_60CBBCCC;
}
