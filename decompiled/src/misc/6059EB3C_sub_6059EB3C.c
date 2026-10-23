/* sub_6059EB3C
 * address: 0x6059EB3C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6059EB3C()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CAFC40 & ~(1616505680 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CAFC40) )
  {
    dword_60CAFC3C = (int)&off_60C07994;
    _cxa_guard_release(dword_60CAFC40);
  }
  return &dword_60CAFC3C;
}
