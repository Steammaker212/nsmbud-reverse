/* sub_60026DC8
 * address: 0x60026DC8   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60026DC8(int *a1)
{
  char v1; // r12
  int v3; // r5

  if ( ((unsigned int)&dword_60C7B38C & ~(1610771936 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B38C) )
  {
    MultiStateActor_RTTI = (int)&off_60BC00D4;
    _cxa_guard_release(&dword_60C7B38C);
  }
  v3 = 1;
  if ( a1 != &MultiStateActor_RTTI )
  {
    if ( ((unsigned int)&dword_60C7B394 & ~(1610772032 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B394) )
    {
      CollisionActor_RTTI = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B394);
    }
    if ( a1 != &CollisionActor_RTTI )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1610772124 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( a1 != &StageActor_RTTI )
      {
        if ( ((unsigned int)&dword_60C7B36C & ~(1610772216 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
        {
          Actor_RTTI = (int)&off_60BC00A4;
          _cxa_guard_release(&dword_60C7B36C);
        }
        return a1 == &Actor_RTTI;
      }
    }
  }
  return v3;
}
