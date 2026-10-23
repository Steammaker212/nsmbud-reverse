/* sub_6099673C
 * address: 0x6099673C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6099673C()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12
  char v3; // r12

  if ( ((unsigned int)&dword_60CD0C7C & ~(1620666192 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C7C) )
  {
    if ( ((unsigned int)&dword_60CD0C64 & ~(1620666232 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C64) )
    {
      if ( ((unsigned int)&dword_60CD0C6C & ~(1620666272 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C6C) )
      {
        if ( ((unsigned int)&dword_60CD0C74 & ~(1620666312 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C74) )
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
    dword_60CD0C78 = (int)&dword_60CD0C60;
    _cxa_guard_release(&dword_60CD0C7C);
  }
  return &dword_60CD0C78;
}
