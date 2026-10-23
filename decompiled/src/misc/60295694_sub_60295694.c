/* sub_60295694
 * address: 0x60295694   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60295694()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8FBB4 & ~(1613321896 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8FBB4) )
  {
    dword_60C8FBB0 = (int)&off_60BE031C;
    _cxa_guard_release(&dword_60C8FBB4);
  }
  return &dword_60C8FBB0;
}
