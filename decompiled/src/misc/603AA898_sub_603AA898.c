/* sub_603AA898
 * address: 0x603AA898   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603AA898(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C97A50 & ~(1614457008 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C97A50) )
  {
    dword_60C97A4C = (int)&off_60BF4D48;
    _cxa_guard_release(&dword_60C97A50);
  }
  if ( a2 == &dword_60C97A4C )
    return 1;
  if ( ((unsigned int)&dword_60C9797C & ~(1614457100 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9797C) )
  {
    dword_60C97978 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C9797C);
  }
  if ( a2 == &dword_60C97978 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1614457192 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
