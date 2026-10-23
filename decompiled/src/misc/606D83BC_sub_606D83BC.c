/* sub_606D83BC
 * address: 0x606D83BC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606D83BC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CAEAC8 & ~(1617789908 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEAC8) )
  {
    dword_60CAEAC4 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CAEAC8);
  }
  return a2 == &dword_60CAEAC4 || sub_60026DC8(a2);
}
