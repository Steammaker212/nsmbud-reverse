/* sub_60144474
 * address: 0x60144474   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60144474()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C87FA4 & ~(1611941000 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C87FA4) )
  {
    dword_60C87FA0 = (int)&off_60BC7C30;
    _cxa_guard_release(&dword_60C87FA4);
  }
  return &dword_60C87FA0;
}
