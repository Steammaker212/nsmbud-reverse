/* sub_6097D8B0
 * address: 0x6097D8B0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6097D8B0()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12

  if ( ((unsigned int)&dword_60CD0BB4 & ~(1620564164 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BB4) )
  {
    if ( ((unsigned int)&dword_60C9D9EC & ~(1620564204 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9EC) )
    {
      if ( ((unsigned int)&dword_60C9D9D4 & ~(1620564244 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
      {
        dword_60C9D9D0 = 0;
        _cxa_guard_release(&dword_60C9D9D4);
      }
      dword_60C9D9E8 = (int)&dword_60C9D9D0;
      _cxa_guard_release(&dword_60C9D9EC);
    }
    dword_60CD0BB0 = (int)&dword_60C9D9E8;
    _cxa_guard_release(&dword_60CD0BB4);
  }
  return &dword_60CD0BB0;
}
