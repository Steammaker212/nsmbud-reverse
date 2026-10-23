/* sub_6084C42C
 * address: 0x6084C42C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6084C42C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC7EDC & ~(1619313728 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7EDC) )
  {
    dword_60CC7ED8 = 0;
    _cxa_guard_release(&dword_60CC7EDC);
  }
  return &dword_60CC7ED8;
}
