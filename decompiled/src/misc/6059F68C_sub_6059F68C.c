/* sub_6059F68C
 * address: 0x6059F68C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6059F68C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAFCEC & ~(1616508576 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAFCEC) )
  {
    dword_60CAFCE8 = (int)&off_60C07AAC;
    _cxa_guard_release(&dword_60CAFCEC);
  }
  return &dword_60CAFCE8;
}
