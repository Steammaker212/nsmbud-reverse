/* sub_602C77DC
 * address: 0x602C77DC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602C77DC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C916FC & ~(1613527024 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C916FC) )
  {
    dword_60C916F8 = (int)&off_60BE5584;
    _cxa_guard_release(&dword_60C916FC);
  }
  return &dword_60C916F8;
}
