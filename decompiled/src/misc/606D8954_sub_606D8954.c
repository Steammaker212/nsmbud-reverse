/* sub_606D8954
 * address: 0x606D8954   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606D8954(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBB7C4 & ~(1617791340 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB7C4) )
  {
    dword_60CBB7C0 = (int)&off_60C1E69C;
    _cxa_guard_release(&dword_60CBB7C4);
  }
  if ( a2 == &dword_60CBB7C0 )
    return 1;
  if ( ((unsigned int)&dword_60C88164 & ~(1617791432 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88164) )
  {
    dword_60C88160 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C88164);
  }
  if ( a2 == &dword_60C88160 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1617791524 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
