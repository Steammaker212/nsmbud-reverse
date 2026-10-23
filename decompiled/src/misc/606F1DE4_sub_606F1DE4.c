/* sub_606F1DE4
 * address: 0x606F1DE4   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606F1DE4(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CBC300 & ~(1617895084 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC300) )
  {
    dword_60CBC2FC = (int)&off_60BC00D4;
    _cxa_guard_release(&dword_60CBC300);
  }
  v4 = 1;
  if ( a2 != &dword_60CBC2FC )
  {
    if ( ((unsigned int)&dword_60C7B394 & ~(1617895180 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B394) )
    {
      CollisionActor_RTTI = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B394);
    }
    if ( a2 != &CollisionActor_RTTI )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1617895272 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( a2 != &StageActor_RTTI )
      {
        if ( ((unsigned int)&dword_60C7B36C & ~(1617895364 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
        {
          Actor_RTTI = (int)&off_60BC00A4;
          _cxa_guard_release(&dword_60C7B36C);
        }
        return a2 == &Actor_RTTI;
      }
    }
  }
  return v4;
}
