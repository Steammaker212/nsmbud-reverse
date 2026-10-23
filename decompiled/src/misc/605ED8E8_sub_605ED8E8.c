/* sub_605ED8E8
 * address: 0x605ED8E8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605ED8E8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8EDDC & ~(1616828668 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8EDDC) )
  {
    dword_60C8EDD8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C8EDDC);
  }
  return &dword_60C8EDD8;
}
