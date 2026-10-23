/* sub_609918F0
 * address: 0x609918F0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_609918F0()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12

  if ( ((unsigned int)&dword_60CD0C64 & ~(1620646148 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C64) )
  {
    if ( ((unsigned int)&dword_60CD0C6C & ~(1620646188 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C6C) )
    {
      if ( ((unsigned int)&dword_60CD0C74 & ~(1620646228 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C74) )
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
  return &dword_60CD0C60;
}
