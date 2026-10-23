/* sub_600552F8
 * address: 0x600552F8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600552F8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C7FBFC & ~(1610961676 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7FBFC) )
  {
    dword_60C7FBF8 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C7FBFC);
  }
  return &dword_60C7FBF8;
}
