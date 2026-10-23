/* sub_60995B28
 * address: 0x60995B28   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60995B28()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12
  char v3; // r12

  if ( ((unsigned int)&dword_60CD0C5C & ~(1620663100 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C5C) )
  {
    if ( ((unsigned int)&dword_60CD0C64 & ~(1620663140 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C64) )
    {
      if ( ((unsigned int)&dword_60CD0C6C & ~(1620663180 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C6C) )
      {
        if ( ((unsigned int)&dword_60CD0C74 & ~(1620663220 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C74) )
        {
          dword_60CD0C70 = 0;
          _cxa_guard_release(&dword_60CD0C74);
        }
        dword_60CD0C68 = (int)&dword_60CD0C70;
        _cxa_guard_release(&dword_60CD0C6C);
      }
      dword_60CD0C60 = (int)&dword_60CD0C68;
      _cxa_guard_release(&dword_60CD0C64);
    }
    dword_60CD0C58 = (int)&dword_60CD0C60;
    _cxa_guard_release(&dword_60CD0C5C);
  }
  return &dword_60CD0C58;
}
