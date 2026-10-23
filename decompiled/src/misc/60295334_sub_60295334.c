/* sub_60295334
 * address: 0x60295334   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60295334()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8FB88 & ~(1613321032 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8FB88) )
  {
    dword_60C8FB84 = (int)&off_60BDFFDC;
    _cxa_guard_release(&dword_60C8FB88);
  }
  return &dword_60C8FB84;
}
