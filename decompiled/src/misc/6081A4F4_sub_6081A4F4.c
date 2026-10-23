/* sub_6081A4F4
 * address: 0x6081A4F4   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6081A4F4(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CC6C04 & ~(1619109304 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6C04) )
  {
    dword_60CC6C00 = (int)&off_60C2A380;
    _cxa_guard_release(&dword_60CC6C04);
  }
  v4 = 1;
  if ( a2 != &dword_60CC6C00 )
  {
    if ( ((unsigned int)&dword_60CC6C0C & ~(1619109400 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6C0C) )
    {
      dword_60CC6C08 = (int)&off_60C2A38C;
      _cxa_guard_release(&dword_60CC6C0C);
    }
    if ( a2 != &dword_60CC6C08 )
    {
      if ( ((unsigned int)&dword_60CC6C14 & ~(1619109492 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6C14) )
      {
        dword_60CC6C10 = (int)&off_60C2A398;
        _cxa_guard_release(&dword_60CC6C14);
      }
      if ( a2 != &dword_60CC6C10 )
      {
        if ( ((unsigned int)&dword_60CC6C1C & ~(1619109584 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6C1C) )
        {
          dword_60CC6C18 = (int)&off_60BC00A4;
          _cxa_guard_release(&dword_60CC6C1C);
        }
        return a2 == &dword_60CC6C18;
      }
    }
  }
  return v4;
}
