/* sub_603D2D08
 * address: 0x603D2D08   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603D2D08()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C98E40 & ~(1614621980 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C98E40) )
  {
    dword_60C98E3C = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C98E40);
  }
  return &dword_60C98E3C;
}
