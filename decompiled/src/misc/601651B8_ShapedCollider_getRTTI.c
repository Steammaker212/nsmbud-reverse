/* ShapedCollider_getRTTI
 * address: 0x601651B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *ShapedCollider_getRTTI()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C803C8 & ~(1612075468 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C803C8) )
  {
    dword_60C803C4 = (int)&off_60BC3188;
    _cxa_guard_release(&dword_60C803C8);
  }
  return &dword_60C803C4;
}
