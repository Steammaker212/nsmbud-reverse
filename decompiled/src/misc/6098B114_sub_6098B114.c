/* sub_6098B114
 * address: 0x6098B114   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6098B114(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CD0C4C & ~(1620619564 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C4C) )
  {
    dword_60CD0C48 = (int)&off_60BF9F1C;
    _cxa_guard_release(&dword_60CD0C4C);
  }
  v4 = 1;
  if ( a2 != &dword_60CD0C48 )
  {
    if ( ((unsigned int)&dword_60C9BB0C & ~(1620619660 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB0C) )
    {
      dword_60C9BB08 = (int)&off_60BF9F28;
      _cxa_guard_release(&dword_60C9BB0C);
    }
    if ( a2 != &dword_60C9BB08 )
    {
      if ( ((unsigned int)&dword_60C9BB14 & ~(1620619752 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB14) )
      {
        dword_60C9BB10 = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C9BB14);
      }
      return a2 == &dword_60C9BB10;
    }
  }
  return v4;
}
