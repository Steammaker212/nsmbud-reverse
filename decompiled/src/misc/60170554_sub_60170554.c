/* sub_60170554
 * address: 0x60170554   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60170554(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)dword_60C88AE0 & ~(1612121604 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C88AE0) )
  {
    dword_60C88ADC = (int)&off_60BD4BA4;
    _cxa_guard_release(dword_60C88AE0);
  }
  v4 = 1;
  if ( a2 != &dword_60C88ADC )
  {
    if ( ((unsigned int)&dword_60C88AA0 & ~(1612121700 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
    {
      dword_60C88A9C = (int)&off_60BD4BB0;
      _cxa_guard_release(&dword_60C88AA0);
    }
    if ( a2 != &dword_60C88A9C )
    {
      if ( ((unsigned int)&dword_60C88A90 & ~(1612121792 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A90) )
      {
        dword_60C88A8C = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C88A90);
      }
      if ( a2 != &dword_60C88A8C )
      {
        if ( ((unsigned int)&dword_60C7B36C & ~(1612121884 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B36C) )
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
