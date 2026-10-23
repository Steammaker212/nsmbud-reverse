/* sub_6059B0CC
 * address: 0x6059B0CC   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6059B0CC(int *a1)
{
  char v1; // r12
  int v3; // r5

  if ( ((unsigned int)&dword_60C7B410 & ~(1616490724 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
  {
    dword_60C7B40C = (int)&off_60BC00D4;
    _cxa_guard_release(&dword_60C7B410);
  }
  v3 = 1;
  if ( a1 != &dword_60C7B40C )
  {
    if ( ((unsigned int)&dword_60C7B394 & ~(1616490820 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B394) )
    {
      CollisionActor_RTTI = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B394);
    }
    if ( a1 != &CollisionActor_RTTI )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1616490912 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( a1 != &StageActor_RTTI )
      {
        if ( ((unsigned int)&dword_60C7B36C & ~(1616491004 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
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
