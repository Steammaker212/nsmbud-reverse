/* sub_6070DED4
 * address: 0x6070DED4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6070DED4()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CBCBB8 & ~(1618009832 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CBCBB8) )
  {
    dword_60CBCBB4 = (int)&off_60C0AB94;
    _cxa_guard_release(dword_60CBCBB8);
  }
  return &dword_60CBCBB4;
}
