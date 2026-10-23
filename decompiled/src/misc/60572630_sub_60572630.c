/* sub_60572630
 * address: 0x60572630   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60572630(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CAEA04 & ~(1616324168 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEA04) )
  {
    dword_60CAEA00 = (int)&off_60C01FFC;
    _cxa_guard_release(&dword_60CAEA04);
  }
  if ( a2 != &dword_60CAEA00 )
    JUMPOUT(0x605632C0);
  return 1;
}
