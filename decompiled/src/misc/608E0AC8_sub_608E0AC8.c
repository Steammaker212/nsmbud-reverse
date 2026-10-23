/* sub_608E0AC8
 * address: 0x608E0AC8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608E0AC8(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60C8C224 & ~(1619921632 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
  {
    dword_60C8C220 = (int)&off_60BD84A8;
    _cxa_guard_release(&dword_60C8C224);
  }
  v4 = 1;
  if ( a2 != &dword_60C8C220 )
  {
    if ( ((unsigned int)&dword_60C8C22C & ~(1619921728 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C22C) )
    {
      dword_60C8C228 = (int)&off_60BD84B4;
      _cxa_guard_release(&dword_60C8C22C);
    }
    if ( a2 != &dword_60C8C228 )
    {
      if ( ((unsigned int)&dword_60C8C234 & ~(1619921820 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C234) )
      {
        dword_60C8C230 = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C8C234);
      }
      return a2 == &dword_60C8C230;
    }
  }
  return v4;
}
