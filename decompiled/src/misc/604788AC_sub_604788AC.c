/* sub_604788AC
 * address: 0x604788AC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_604788AC()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60C9DA2C & ~(1615300800 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA2C) )
  {
    if ( ((unsigned int)&dword_60C9DA34 & ~(1615300840 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA34) )
    {
      dword_60C9DA30 = 0;
      _cxa_guard_release(&dword_60C9DA34);
    }
    dword_60C9DA28 = (int)&dword_60C9DA30;
    _cxa_guard_release(&dword_60C9DA2C);
  }
  return &dword_60C9DA28;
}
