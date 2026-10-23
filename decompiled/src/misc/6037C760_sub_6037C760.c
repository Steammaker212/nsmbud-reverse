/* sub_6037C760
 * address: 0x6037C760   size: 808   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6037C760(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C96780 & ~(1614268692 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C96780) )
  {
    dword_60C9677C = (int)&off_60BDEFC0;
    _cxa_guard_release(dword_60C96780);
  }
  if ( a2 == &dword_60C9677C )
    return 1;
  if ( ((unsigned int)&dword_60C8FA4C & ~(1614268784 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8FA4C) )
  {
    dword_60C8FA48 = (int)&off_60BDEC6C;
    _cxa_guard_release(&dword_60C8FA4C);
  }
  if ( a2 == &dword_60C8FA48 )
    return 1;
  if ( ((unsigned int)dword_60C8FA54 & ~(1614268876 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8FA54) )
  {
    dword_60C8FA50 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C8FA54);
  }
  if ( a2 == &dword_60C8FA50 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1614268968 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
