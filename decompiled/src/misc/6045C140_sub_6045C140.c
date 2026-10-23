/* sub_6045C140
 * address: 0x6045C140   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6045C140(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60C9CFC0 & ~(1615184216 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CFC0) )
  {
    dword_60C9CFBC = (int)&off_60BFB228;
    _cxa_guard_release(&dword_60C9CFC0);
  }
  v4 = 1;
  if ( a2 != &dword_60C9CFBC )
  {
    if ( ((unsigned int)&dword_60C9CFC8 & ~(1615184312 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CFC8) )
    {
      dword_60C9CFC4 = (int)&off_60BD84B4;
      _cxa_guard_release(&dword_60C9CFC8);
    }
    if ( a2 != &dword_60C9CFC4 )
    {
      if ( ((unsigned int)&dword_60C8C234 & ~(1615184404 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C234) )
      {
        dword_60C8C230 = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C8C234);
      }
      return a2 == &dword_60C8C230;
    }
  }
  return v4;
}
