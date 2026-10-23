/* sub_60757100
 * address: 0x60757100   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60757100()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBEC88 & ~(1618309396 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBEC88) )
  {
    dword_60CBEC84 = (int)&off_60C23E4C;
    _cxa_guard_release(&dword_60CBEC88);
  }
  return &dword_60CBEC84;
}
