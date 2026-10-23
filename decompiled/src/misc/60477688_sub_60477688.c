/* sub_60477688
 * address: 0x60477688   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60477688()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9DA3C & ~(1615296156 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA3C) )
  {
    dword_60C9DA38 = (int)sub_60477558();
    _cxa_guard_release(&dword_60C9DA3C);
  }
  return &dword_60C9DA38;
}
