/* sub_60476568
 * address: 0x60476568   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60476568()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60C9D9B4 & ~(1615291772 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9B4) )
  {
    if ( ((unsigned int)&dword_60C9D9BC & ~(1615291812 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9BC) )
    {
      dword_60C9D9B8 = 0;
      _cxa_guard_release(&dword_60C9D9BC);
    }
    dword_60C9D9B0 = (int)&dword_60C9D9B8;
    _cxa_guard_release(&dword_60C9D9B4);
  }
  return &dword_60C9D9B0;
}
