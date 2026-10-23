/* sub_60032AC4
 * address: 0x60032AC4   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60032AC4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C7FBF4 & ~(1610820316 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7FBF4) )
  {
    dword_60C7FBF0 = (int)&off_60BC1FE8;
    _cxa_guard_release(&dword_60C7FBF4);
  }
  if ( a2 == &dword_60C7FBF0 )
    return 1;
  if ( ((unsigned int)&dword_60C7FBFC & ~(1610820408 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7FBFC) )
  {
    dword_60C7FBF8 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C7FBFC);
  }
  if ( a2 == &dword_60C7FBF8 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1610820500 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
