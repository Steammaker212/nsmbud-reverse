/* sub_60982BB0
 * address: 0x60982BB0   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60982BB0()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12
  char v3; // r12

  if ( ((unsigned int)&dword_60CD0BEC & ~(1620585416 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BEC) )
  {
    if ( ((unsigned int)&dword_60CD0BA4 & ~(1620585456 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BA4) )
    {
      if ( ((unsigned int)&dword_60C9D9CC & ~(1620585496 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9CC) )
      {
        if ( ((unsigned int)&dword_60C9D9D4 & ~(1620585536 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
        {
          dword_60C9D9D0 = 0;
          _cxa_guard_release(&dword_60C9D9D4);
        }
        dword_60C9D9C8 = (int)&dword_60C9D9D0;
        _cxa_guard_release(&dword_60C9D9CC);
      }
      dword_60CD0BA0 = (int)&dword_60C9D9C8;
      _cxa_guard_release(&dword_60CD0BA4);
    }
    dword_60CD0BE8 = (int)&dword_60CD0BA0;
    _cxa_guard_release(&dword_60CD0BEC);
  }
  return &dword_60CD0BE8;
}
