/* sub_60749BD8
 * address: 0x60749BD8   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60749BD8(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CBE7E8 & ~(1618254972 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE7E8) )
  {
    dword_60CBE7E4 = (int)&off_60C23598;
    _cxa_guard_release(&dword_60CBE7E8);
  }
  v4 = 1;
  if ( a2 != &dword_60CBE7E4 )
  {
    if ( ((unsigned int)&dword_60CBE6A0 & ~(1618255068 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE6A0) )
    {
      dword_60CBE69C = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60CBE6A0);
    }
    if ( a2 != &dword_60CBE69C )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1618255160 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( a2 != &StageActor_RTTI )
      {
        if ( ((unsigned int)&dword_60C7B36C & ~(1618255252 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
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
