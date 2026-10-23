/* sub_60478A50
 * address: 0x60478A50   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60478A50()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12

  if ( ((unsigned int)&dword_60C9DA44 & ~(1615301220 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA44) )
  {
    if ( ((unsigned int)&dword_60C9DA2C & ~(1615301260 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA2C) )
    {
      if ( ((unsigned int)&dword_60C9DA34 & ~(1615301300 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA34) )
      {
        dword_60C9DA30 = 0;
        _cxa_guard_release(&dword_60C9DA34);
      }
      dword_60C9DA28 = (int)&dword_60C9DA30;
      _cxa_guard_release(&dword_60C9DA2C);
    }
    dword_60C9DA40 = (int)&dword_60C9DA28;
    _cxa_guard_release(&dword_60C9DA44);
  }
  return &dword_60C9DA40;
}
