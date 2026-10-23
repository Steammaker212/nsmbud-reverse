/* sub_6085B624
 * address: 0x6085B624   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6085B624()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60C9D9CC & ~(1619375672 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9CC) )
  {
    if ( ((unsigned int)&dword_60C9D9D4 & ~(1619375712 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
    {
      dword_60C9D9D0 = 0;
      _cxa_guard_release(&dword_60C9D9D4);
    }
    dword_60C9D9C8 = (int)&dword_60C9D9D0;
    _cxa_guard_release(&dword_60C9D9CC);
  }
  return &dword_60C9D9C8;
}
