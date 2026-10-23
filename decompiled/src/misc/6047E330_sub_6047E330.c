/* sub_6047E330
 * address: 0x6047E330   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6047E330()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12
  char v3; // r12

  if ( ((unsigned int)dword_60C9EB38 & ~(1615323988 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C9EB38) )
  {
    if ( ((unsigned int)&dword_60C9D9DC & ~(1615324028 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9DC) )
    {
      if ( ((unsigned int)&dword_60C9D9E4 & ~(1615324068 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9E4) )
      {
        if ( ((unsigned int)&dword_60C9D9D4 & ~(1615324108 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
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
    dword_60C9EB34 = (int)&dword_60C9D9D8;
    _cxa_guard_release(dword_60C9EB38);
  }
  return &dword_60C9EB34;
}
