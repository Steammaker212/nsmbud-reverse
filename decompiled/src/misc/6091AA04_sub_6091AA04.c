/* sub_6091AA04
 * address: 0x6091AA04   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6091AA04(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60C9BADC & ~(1620159004 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BADC) )
  {
    dword_60C9BAD8 = (int)&off_60BF9D20;
    _cxa_guard_release(&dword_60C9BADC);
  }
  v4 = 1;
  if ( a2 != &dword_60C9BAD8 )
  {
    if ( ((unsigned int)&dword_60C9BAE4 & ~(1620159100 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BAE4) )
    {
      dword_60C9BAE0 = (int)&off_60BF9D2C;
      _cxa_guard_release(&dword_60C9BAE4);
    }
    if ( a2 != &dword_60C9BAE0 )
    {
      if ( ((unsigned int)&dword_60C9BAEC & ~(1620159192 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BAEC) )
      {
        dword_60C9BAE8 = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C9BAEC);
      }
      return a2 == &dword_60C9BAE8;
    }
  }
  return v4;
}
