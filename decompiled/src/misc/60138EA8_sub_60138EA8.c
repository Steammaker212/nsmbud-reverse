/* sub_60138EA8
 * address: 0x60138EA8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60138EA8()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C87964 & ~(1611894460 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C87964) )
  {
    dword_60C87960 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60C87964);
  }
  return &dword_60C87960;
}
