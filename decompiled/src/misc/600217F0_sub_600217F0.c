/* sub_600217F0
 * address: 0x600217F0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600217F0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C7F524 & ~(1610749956 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7F524) )
  {
    dword_60C7F520 = (int)&off_60BC1480;
    _cxa_guard_release(&dword_60C7F524);
  }
  return &dword_60C7F520;
}
