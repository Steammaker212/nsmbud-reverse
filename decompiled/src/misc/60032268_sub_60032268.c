/* sub_60032268
 * address: 0x60032268   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60032268(int *a1)
{
  char v1; // r12

  if ( ((unsigned int)&dword_60C7FBE4 & ~(1610818176 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7FBE4) )
  {
    dword_60C7FBE0 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C7FBE4);
  }
  if ( a1 == &dword_60C7FBE0 )
    return 1;
  if ( ((unsigned int)&dword_60C7F664 & ~(1610818268 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7F664) )
  {
    dword_60C7F660 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C7F664);
  }
  if ( a1 == &dword_60C7F660 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1610818360 << v1) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a1 == &Enemy_RTTI || sub_60026DC8(a1);
}
