/* sub_601119C4
 * address: 0x601119C4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601119C4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C868C4 & ~(1611733464 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C868C4) )
  {
    dword_60C868C0 = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60C868C4);
  }
  return &dword_60C868C0;
}
