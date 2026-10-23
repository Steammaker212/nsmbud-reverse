/* sub_6012A358
 * address: 0x6012A358   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6012A358()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C87130 & ~(1611834220 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C87130) )
  {
    dword_60C8712C = (int)&off_60BC8314;
    _cxa_guard_release(&dword_60C87130);
  }
  return &dword_60C8712C;
}
