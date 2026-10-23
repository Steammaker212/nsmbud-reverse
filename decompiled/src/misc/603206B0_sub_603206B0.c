/* sub_603206B0
 * address: 0x603206B0   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603206B0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C938F4 & ~(1613891272 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C938F4) )
  {
    dword_60C938F0 = (int)&off_60BD05B8;
    _cxa_guard_release(&dword_60C938F4);
  }
  if ( a2 == &dword_60C938F0 )
    return 1;
  if ( ((unsigned int)&dword_60C866E8 & ~(1613891364 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C866E8) )
  {
    dword_60C866E4 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C866E8);
  }
  if ( a2 == &dword_60C866E4 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613891456 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
