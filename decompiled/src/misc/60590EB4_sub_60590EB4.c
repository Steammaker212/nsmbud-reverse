/* sub_60590EB4
 * address: 0x60590EB4   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60590EB4(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CAF6F0 & ~(1616449420 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAF6F0) )
  {
    dword_60CAF6EC = (int)&off_60C07380;
    _cxa_guard_release(&dword_60CAF6F0);
  }
  v4 = 1;
  if ( a2 != &dword_60CAF6EC )
  {
    if ( ((unsigned int)dword_60CAF698 & ~(1616449516 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CAF698) )
    {
      dword_60CAF694 = (int)&off_60BC00BC;
      _cxa_guard_release(dword_60CAF698);
    }
    if ( a2 != &dword_60CAF694 )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1616449608 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( a2 != &StageActor_RTTI )
      {
        if ( ((unsigned int)&dword_60C7B36C & ~(1616449700 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
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
