/* sub_608ED210
 * address: 0x608ED210   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608ED210(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CCEBF0 & ~(1619972648 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEBF0) )
  {
    dword_60CCEBEC = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60CCEBF0);
  }
  return a2 == &dword_60CCEBEC;
}
