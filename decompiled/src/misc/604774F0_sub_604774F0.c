/* sub_604774F0
 * address: 0x604774F0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_604774F0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9DA1C & ~(1615295748 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA1C) )
  {
    dword_60C9DA18 = sub_60477558();
    _cxa_guard_release(&dword_60C9DA1C);
  }
  return &dword_60C9DA18;
}
