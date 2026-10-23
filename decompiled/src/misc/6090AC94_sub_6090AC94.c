/* sub_6090AC94
 * address: 0x6090AC94   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6090AC94(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CCF458 & ~(1620094124 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CCF458) )
  {
    dword_60CCF454 = (int)&off_60C5D084;
    _cxa_guard_release(&dword_60CCF458);
  }
  v4 = 1;
  if ( a2 != &dword_60CCF454 )
  {
    if ( ((unsigned int)&dword_60C9CD0C & ~(1620094220 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CD0C) )
    {
      dword_60C9CD08 = (int)&off_60BFAD80;
      _cxa_guard_release(&dword_60C9CD0C);
    }
    if ( a2 != &dword_60C9CD08 )
    {
      if ( ((unsigned int)&dword_60C9CD14 & ~(1620094312 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CD14) )
      {
        dword_60C9CD10 = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C9CD14);
      }
      return a2 == &dword_60C9CD10;
    }
  }
  return v4;
}
