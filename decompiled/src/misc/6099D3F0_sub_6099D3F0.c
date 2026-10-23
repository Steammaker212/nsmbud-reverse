/* sub_6099D3F0
 * address: 0x6099D3F0   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6099D3F0(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CD0C94 & ~(1620694024 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C94) )
  {
    dword_60CD0C90 = (int)&off_60BFB228;
    _cxa_guard_release(&dword_60CD0C94);
  }
  v4 = 1;
  if ( a2 != &dword_60CD0C90 )
  {
    if ( ((unsigned int)&dword_60C9CFC8 & ~(1620694120 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CFC8) )
    {
      dword_60C9CFC4 = (int)&off_60BD84B4;
      _cxa_guard_release(&dword_60C9CFC8);
    }
    if ( a2 != &dword_60C9CFC4 )
    {
      if ( ((unsigned int)&dword_60C8C234 & ~(1620694212 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C234) )
      {
        dword_60C8C230 = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C8C234);
      }
      return a2 == &dword_60C8C230;
    }
  }
  return v4;
}
