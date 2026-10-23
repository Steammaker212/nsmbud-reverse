/* sub_608F2324
 * address: 0x608F2324   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608F2324(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60CCEC28 & ~(1619993404 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CCEC28) )
  {
    dword_60CCEC24 = (int)&off_60C5C760;
    _cxa_guard_release(dword_60CCEC28);
  }
  if ( a2 == &dword_60CCEC24 )
    return 1;
  if ( ((unsigned int)&dword_60CCEC18 & ~(1619993496 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CCEC18) )
    {
      dword_60CCEC14 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60CCEC18);
    }
  }
  return a2 == &dword_60CCEC14;
}
