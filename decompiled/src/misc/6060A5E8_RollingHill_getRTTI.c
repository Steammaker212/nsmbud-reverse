/* RollingHill_getRTTI
 * address: 0x6060A5E8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *RollingHill_getRTTI()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB2D18 & ~(1616946684 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2D18) )
  {
    dword_60CB2D14 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CB2D18);
  }
  return &dword_60CB2D14;
}
