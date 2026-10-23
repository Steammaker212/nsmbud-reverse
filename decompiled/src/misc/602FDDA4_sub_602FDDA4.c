/* sub_602FDDA4
 * address: 0x602FDDA4   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602FDDA4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C92BC4 & ~(1613750012 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C92BC4) )
  {
    dword_60C92BC0 = (int)&off_60BE7F90;
    _cxa_guard_release(&dword_60C92BC4);
  }
  if ( a2 == &dword_60C92BC0 )
    return 1;
  if ( ((unsigned int)&dword_60C92AD0 & ~(1613750104 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C92AD0) )
  {
    dword_60C92ACC = (int)&off_60BE7F9C;
    _cxa_guard_release(&dword_60C92AD0);
  }
  if ( a2 == &dword_60C92ACC )
    return 1;
  if ( ((unsigned int)&dword_60C7B428 & ~(1613750196 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B428) )
  {
    dword_60C7B424 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C7B428);
  }
  if ( a2 == &dword_60C7B424 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613750288 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
