/* sub_600B8E68
 * address: 0x600B8E68   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600B8E68()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C83018 & ~(1611370108 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C83018) )
  {
    dword_60C83014 = (int)&off_60BC210C;
    _cxa_guard_release(&dword_60C83018);
  }
  return &dword_60C83014;
}
