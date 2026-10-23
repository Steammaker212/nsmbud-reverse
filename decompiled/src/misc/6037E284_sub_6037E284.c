/* sub_6037E284
 * address: 0x6037E284   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6037E284()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C968A8 & ~(1614275224 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C968A8) )
  {
    dword_60C968A4 = (int)&off_60BDEC6C;
    _cxa_guard_release(dword_60C968A8);
  }
  return &dword_60C968A4;
}
