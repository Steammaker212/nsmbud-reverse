/* sub_60984484
 * address: 0x60984484   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60984484()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12
  char v3; // r12

  if ( ((unsigned int)&dword_60CD0BFC & ~(1620591772 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BFC) )
  {
    if ( ((unsigned int)&dword_60CD0BAC & ~(1620591812 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BAC) )
    {
      if ( ((unsigned int)&dword_60C9D9F4 & ~(1620591852 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9F4) )
      {
        if ( ((unsigned int)&dword_60C9D9D4 & ~(1620591892 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
        {
          dword_60C9D9D0 = 0;
          _cxa_guard_release(&dword_60C9D9D4);
        }
        dword_60C9D9F0 = (int)&dword_60C9D9D0;
        _cxa_guard_release(&dword_60C9D9F4);
      }
      dword_60CD0BA8 = (int)&dword_60C9D9F0;
      _cxa_guard_release(&dword_60CD0BAC);
    }
    dword_60CD0BF8 = (int)&dword_60CD0BA8;
    _cxa_guard_release(&dword_60CD0BFC);
  }
  return &dword_60CD0BF8;
}
