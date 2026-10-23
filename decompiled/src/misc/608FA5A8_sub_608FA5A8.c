/* sub_608FA5A8
 * address: 0x608FA5A8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608FA5A8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CCEE78 & ~(1620026816 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEE78) )
  {
    dword_60CCEE74 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60CCEE78);
  }
  return a2 == &dword_60CCEE74;
}
