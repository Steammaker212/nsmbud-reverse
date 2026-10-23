/* sub_6080554C
 * address: 0x6080554C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6080554C(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CC648C & ~(1619023204 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC648C) )
  {
    dword_60CC6488 = (int)&off_60C27F70;
    _cxa_guard_release(&dword_60CC648C);
  }
  v4 = 1;
  if ( a2 != &dword_60CC6488 )
  {
    if ( ((unsigned int)&dword_60CC6494 & ~(1619023300 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6494) )
    {
      dword_60CC6490 = (int)&off_60C27F7C;
      _cxa_guard_release(&dword_60CC6494);
    }
    if ( a2 != &dword_60CC6490 )
    {
      if ( ((unsigned int)&dword_60CC649C & ~(1619023392 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC649C) )
      {
        dword_60CC6498 = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60CC649C);
      }
      return a2 == &dword_60CC6498;
    }
  }
  return v4;
}
