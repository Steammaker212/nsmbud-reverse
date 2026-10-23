/* sub_60294B08
 * address: 0x60294B08   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60294B08(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8FB30 & ~(1613319264 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8FB30) )
  {
    dword_60C8FB2C = (int)&off_60BDEFC0;
    _cxa_guard_release(&dword_60C8FB30);
  }
  if ( a2 == &dword_60C8FB2C )
    return 1;
  if ( ((unsigned int)&dword_60C8FA4C & ~(1613319356 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8FA4C) )
  {
    dword_60C8FA48 = (int)&off_60BDEC6C;
    _cxa_guard_release(&dword_60C8FA4C);
  }
  if ( a2 == &dword_60C8FA48 )
    return 1;
  if ( ((unsigned int)dword_60C8FA54 & ~(1613319448 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8FA54) )
  {
    dword_60C8FA50 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C8FA54);
  }
  if ( a2 == &dword_60C8FA50 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613319540 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
