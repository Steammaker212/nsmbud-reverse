/* sub_60430380
 * address: 0x60430380   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60430380(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60C80408 & ~(1615004568 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80408) )
  {
    dword_60C80404 = (int)&off_60BC3234;
    _cxa_guard_release(&dword_60C80408);
  }
  v4 = 1;
  if ( a2 != &dword_60C80404 )
  {
    if ( ((unsigned int)&dword_60C80410 & ~(1615004664 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80410) )
    {
      dword_60C8040C = (int)&off_60BC3240;
      _cxa_guard_release(&dword_60C80410);
    }
    if ( a2 != &dword_60C8040C )
    {
      if ( ((unsigned int)&dword_60C80418 & ~(1615004756 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80418) )
      {
        dword_60C80414 = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C80418);
      }
      return a2 == &dword_60C80414;
    }
  }
  return v4;
}
