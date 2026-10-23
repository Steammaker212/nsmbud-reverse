/* sub_603C7304
 * address: 0x603C7304   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603C7304(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C98908 & ~(1614574364 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C98908) )
  {
    dword_60C98904 = (int)&off_60BDE8BC;
    _cxa_guard_release(&dword_60C98908);
  }
  if ( a2 == &dword_60C98904 )
    return 1;
  if ( ((unsigned int)&dword_60C8F5A0 & ~(1614574456 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F5A0) )
  {
    dword_60C8F59C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C8F5A0);
  }
  if ( a2 == &dword_60C8F59C )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1614574548 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
