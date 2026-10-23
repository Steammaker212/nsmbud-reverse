/* RectCollider_getRTTI
 * address: 0x6004BA34   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *RectCollider_getRTTI()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C803B8 & ~(1610922568 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C803B8) )
  {
    dword_60C803B4 = (int)&off_60BC3170;
    _cxa_guard_release(&dword_60C803B8);
  }
  return &dword_60C803B4;
}
