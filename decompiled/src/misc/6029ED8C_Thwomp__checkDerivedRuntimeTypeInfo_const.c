/* Thwomp__checkDerivedRuntimeTypeInfo_const
 * address: 0x6029ED8C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x60285164
// 
// Overridden by: None
bool __fastcall Thwomp__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C901B0 & ~(1613360548 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C901B0) )
  {
    dword_60C901AC = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C901B0);
  }
  if ( a2 == &dword_60C901AC )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613360640 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
