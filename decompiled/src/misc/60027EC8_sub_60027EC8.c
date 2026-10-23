/* sub_60027EC8
 * address: 0x60027EC8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60027EC8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C7F710 & ~(1610776284 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7F710) )
  {
    dword_60C7F70C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C7F710);
  }
  return &dword_60C7F70C;
}
