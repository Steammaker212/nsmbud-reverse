/* sub_60217F4C
 * address: 0x60217F4C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60217F4C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8B0E4 & ~(1612808032 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B0E4) )
  {
    dword_60C8B0E0 = (int)&off_60BD4E08;
    _cxa_guard_release(&dword_60C8B0E4);
  }
  return &dword_60C8B0E0;
}
