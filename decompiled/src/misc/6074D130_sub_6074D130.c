/* sub_6074D130
 * address: 0x6074D130   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6074D130(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CBE990 & ~(1618268628 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE990) )
  {
    dword_60CBE98C = (int)&off_60C23AA8;
    _cxa_guard_release(&dword_60CBE990);
  }
  v4 = 1;
  if ( a2 != &dword_60CBE98C )
  {
    if ( ((unsigned int)dword_60CBE950 & ~(1618268724 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CBE950) )
    {
      dword_60CBE94C = (int)&off_60BC00BC;
      _cxa_guard_release(dword_60CBE950);
    }
    if ( a2 != &dword_60CBE94C )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1618268816 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( a2 != &StageActor_RTTI )
      {
        if ( ((unsigned int)&dword_60C7B36C & ~(1618268908 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
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
