/* sub_607C8D30
 * address: 0x607C8D30   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_607C8D30()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9D3D4 & ~(1618775364 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3D4) )
  {
    dword_60C9D3D0 = (int)&off_60BFB878;
    _cxa_guard_release(&dword_60C9D3D4);
  }
  return &dword_60C9D3D0;
}
