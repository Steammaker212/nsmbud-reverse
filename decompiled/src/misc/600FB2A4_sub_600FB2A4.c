/* sub_600FB2A4
 * address: 0x600FB2A4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600FB2A4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C85C44 & ~(1611641528 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C85C44) )
  {
    dword_60C85C40 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C85C44);
  }
  return &dword_60C85C40;
}
