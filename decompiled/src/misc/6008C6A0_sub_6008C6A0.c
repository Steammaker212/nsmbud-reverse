/* sub_6008C6A0
 * address: 0x6008C6A0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008C6A0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C81760 & ~(1611187896 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81760) )
  {
    dword_60C8175C = (int)&off_60BC6E94;
    _cxa_guard_release(&dword_60C81760);
  }
  if ( a2 == &dword_60C8175C )
    return 1;
  else
    return sub_6008CBD8(a2);
}
