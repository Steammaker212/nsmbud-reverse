/* sub_60337854
 * address: 0x60337854   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60337854()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C94244 & ~(1613985896 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C94244) )
  {
    dword_60C94240 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C94244);
  }
  return &dword_60C94240;
}
