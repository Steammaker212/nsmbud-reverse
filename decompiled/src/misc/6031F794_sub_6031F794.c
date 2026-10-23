/* sub_6031F794
 * address: 0x6031F794   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6031F794(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C938A8 & ~(1613887404 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C938A8) )
  {
    dword_60C938A4 = (int)&off_60BEAD2C;
    _cxa_guard_release(&dword_60C938A8);
  }
  if ( a2 == &dword_60C938A4 )
    return 1;
  if ( ((unsigned int)dword_60C93780 & ~(1613887496 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C93780) )
  {
    dword_60C9377C = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C93780);
  }
  if ( a2 == &dword_60C9377C )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613887588 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
