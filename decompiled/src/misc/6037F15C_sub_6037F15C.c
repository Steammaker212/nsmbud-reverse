/* sub_6037F15C
 * address: 0x6037F15C   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6037F15C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C969A0 & ~(1614279028 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C969A0) )
  {
    dword_60C9699C = (int)&off_60BF3314;
    _cxa_guard_release(&dword_60C969A0);
  }
  if ( a2 == &dword_60C9699C )
    return 1;
  if ( ((unsigned int)&dword_60C908B0 & ~(1614279120 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C908B0) )
  {
    dword_60C908AC = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C908B0);
  }
  if ( a2 == &dword_60C908AC )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1614279212 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
