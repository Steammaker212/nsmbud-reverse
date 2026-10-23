/* sub_60108808
 * address: 0x60108808   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60108808(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C86328 & ~(1611696160 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C86328) )
  {
    dword_60C86324 = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60C86328);
  }
  return a2 == &dword_60C86324 || sub_60027FB0(a2);
}
