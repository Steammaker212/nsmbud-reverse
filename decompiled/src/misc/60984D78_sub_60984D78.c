/* sub_60984D78
 * address: 0x60984D78   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60984D78()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12
  char v3; // r12

  if ( ((unsigned int)&dword_60CD0C14 & ~(1620594064 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C14) )
  {
    if ( ((unsigned int)&dword_60C9D9DC & ~(1620594104 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9DC) )
    {
      if ( ((unsigned int)&dword_60C9D9E4 & ~(1620594144 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9E4) )
      {
        if ( ((unsigned int)&dword_60C9D9D4 & ~(1620594184 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
        {
          dword_60C9D9D0 = 0;
          _cxa_guard_release(&dword_60C9D9D4);
        }
        dword_60C9D9E0 = (int)&dword_60C9D9D0;
        _cxa_guard_release(&dword_60C9D9E4);
      }
      dword_60C9D9D8 = (int)&dword_60C9D9E0;
      _cxa_guard_release(&dword_60C9D9DC);
    }
    dword_60CD0C10 = (int)&dword_60C9D9D8;
    _cxa_guard_release(&dword_60CD0C14);
  }
  return &dword_60CD0C10;
}
