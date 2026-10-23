/* sub_609038D0
 * address: 0x609038D0   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_609038D0(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60C9BB1C & ~(1620064628 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB1C) )
  {
    dword_60C9BB18 = (int)&off_60BF9F34;
    _cxa_guard_release(&dword_60C9BB1C);
  }
  v4 = 1;
  if ( a2 != &dword_60C9BB18 )
  {
    if ( ((unsigned int)&dword_60C9BB24 & ~(1620064724 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB24) )
    {
      dword_60C9BB20 = (int)&off_60BF9F40;
      _cxa_guard_release(&dword_60C9BB24);
    }
    if ( a2 != &dword_60C9BB20 )
    {
      if ( ((unsigned int)&dword_60C9BB2C & ~(1620064816 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB2C) )
      {
        dword_60C9BB28 = (int)&off_60BF9F4C;
        _cxa_guard_release(&dword_60C9BB2C);
      }
      if ( a2 != &dword_60C9BB28 )
      {
        if ( ((unsigned int)&dword_60C9BB34 & ~(1620064908 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB34) )
        {
          dword_60C9BB30 = (int)&off_60BC00A4;
          _cxa_guard_release(&dword_60C9BB34);
        }
        return a2 == &dword_60C9BB30;
      }
    }
  }
  return v4;
}
