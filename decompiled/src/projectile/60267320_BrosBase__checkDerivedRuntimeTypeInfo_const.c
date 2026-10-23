/* BrosBase__checkDerivedRuntimeTypeInfo_const
 * address: 0x60267320   size: 212   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x60285164
// 
// Overridden by:
//   - 0x602CCD78 : HammerBros
//   - 0x602A9EB0 : FireBros
bool __fastcall BrosBase__checkDerivedRuntimeTypeInfo_const(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C87680 & ~(1613132600 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C87680) )
  {
    dword_60C8767C = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C87680);
  }
  if ( a2 == &dword_60C8767C )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613132692 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}
