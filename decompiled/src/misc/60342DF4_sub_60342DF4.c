/* sub_60342DF4
 * address: 0x60342DF4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60342DF4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C94730 & ~(1614032392 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C94730) )
  {
    dword_60C9472C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C94730);
  }
  return &dword_60C9472C;
}
