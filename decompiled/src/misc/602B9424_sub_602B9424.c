/* sub_602B9424
 * address: 0x602B9424   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602B9424()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C91050 & ~(1613468728 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C91050) )
  {
    dword_60C9104C = (int)&off_60BE43EC;
    _cxa_guard_release(dword_60C91050);
  }
  return &dword_60C9104C;
}
