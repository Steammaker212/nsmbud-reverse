/* FloatingBubble_vf1
 * address: 0x607040B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *FloatingBubble_vf1()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CBC824 & ~(1617969356 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CBC824) )
  {
    dword_60CBC820 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60CBC824);
  }
  return &dword_60CBC820;
}
