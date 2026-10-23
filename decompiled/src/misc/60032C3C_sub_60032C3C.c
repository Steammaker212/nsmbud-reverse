/* sub_60032C3C
 * address: 0x60032C3C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60032C3C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C7FBF4 & ~(1610820688 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7FBF4) )
  {
    dword_60C7FBF0 = (int)&off_60BC1FE8;
    _cxa_guard_release(&dword_60C7FBF4);
  }
  return &dword_60C7FBF0;
}
