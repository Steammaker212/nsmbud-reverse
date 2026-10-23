/* sub_6047A790
 * address: 0x6047A790   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6047A790()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60C9D9FC & ~(1615308708 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9FC) )
  {
    if ( ((unsigned int)&dword_60C9DA04 & ~(1615308748 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA04) )
    {
      dword_60C9DA00 = 0;
      _cxa_guard_release(&dword_60C9DA04);
    }
    dword_60C9D9F8 = (int)&dword_60C9DA00;
    _cxa_guard_release(&dword_60C9D9FC);
  }
  return &dword_60C9D9F8;
}
