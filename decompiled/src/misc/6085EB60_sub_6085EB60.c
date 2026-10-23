/* sub_6085EB60
 * address: 0x6085EB60   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6085EB60()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60C9D9E4 & ~(1619389300 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9E4) )
  {
    if ( ((unsigned int)&dword_60C9D9D4 & ~(1619389340 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
    {
      dword_60C9D9D0 = 0;
      _cxa_guard_release(&dword_60C9D9D4);
    }
    dword_60C9D9E0 = (int)&dword_60C9D9D0;
    _cxa_guard_release(&dword_60C9D9E4);
  }
  return &dword_60C9D9E0;
}
