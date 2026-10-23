/* sub_60598338
 * address: 0x60598338   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60598338()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9D3DC & ~(1616479052 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3DC) )
  {
    dword_60C9D3D8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C9D3DC);
  }
  return &dword_60C9D3D8;
}
