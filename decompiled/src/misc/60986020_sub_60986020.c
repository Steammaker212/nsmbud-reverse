/* sub_60986020
 * address: 0x60986020   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60986020()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12

  if ( ((unsigned int)&dword_60C9D9DC & ~(1620598836 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9DC) )
  {
    if ( ((unsigned int)&dword_60C9D9E4 & ~(1620598876 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9E4) )
    {
      if ( ((unsigned int)&dword_60C9D9D4 & ~(1620598916 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
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
  return &dword_60C9D9D8;
}
