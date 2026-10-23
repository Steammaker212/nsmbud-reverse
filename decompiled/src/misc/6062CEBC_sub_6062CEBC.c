/* sub_6062CEBC
 * address: 0x6062CEBC   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6062CEBC(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60C8619C & ~(1617088344 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8619C) )
  {
    dword_60C86198 = (int)&off_60BC00D4;
    _cxa_guard_release(&dword_60C8619C);
  }
  v4 = 1;
  if ( a2 != &dword_60C86198 )
  {
    if ( ((unsigned int)&dword_60C7B394 & ~(1617088440 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B394) )
    {
      CollisionActor_RTTI = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B394);
    }
    if ( a2 != &CollisionActor_RTTI )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1617088532 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( a2 != &StageActor_RTTI )
      {
        if ( ((unsigned int)&dword_60C7B36C & ~(1617088624 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
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
