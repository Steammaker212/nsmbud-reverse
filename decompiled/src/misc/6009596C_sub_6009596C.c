/* sub_6009596C
 * address: 0x6009596C   size: 1372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6009596C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C81104 & ~(1611226452 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
  {
    dword_60C81100 = (int)&off_60BC66E8;
    _cxa_guard_release(&dword_60C81104);
  }
  if ( a2 == &dword_60C81100 )
    return 1;
  if ( ((unsigned int)&dword_60C8110C & ~(1611226544 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8110C) )
  {
    dword_60C81108 = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C8110C);
  }
  if ( a2 == &dword_60C81108 )
    return 1;
  if ( ((unsigned int)&dword_60C80050 & ~(1611226636 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80050) )
  {
    dword_60C8004C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C80050);
  }
  if ( a2 == &dword_60C8004C )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1611226728 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
