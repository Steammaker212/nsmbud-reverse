/* BobOmb_vf0
 * address: 0x60261114   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall BobOmb_vf0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C803F0 & ~(1613107500 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F0) )
  {
    dword_60C803EC = (int)&off_60BC321C;
    _cxa_guard_release(&dword_60C803F0);
  }
  if ( a2 == &dword_60C803EC )
    return 1;
  if ( ((unsigned int)&dword_60C803F8 & ~(1613107592 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F8) )
  {
    CarryableEnemy_RTTI = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C803F8);
  }
  if ( a2 == &CarryableEnemy_RTTI )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613107684 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
