/* sub_601AD758
 * address: 0x601AD758   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601AD758()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8A68C & ~(1612371820 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8A68C) )
  {
    dword_60C8A688 = (int)&off_60BD4E08;
    _cxa_guard_release(&dword_60C8A68C);
  }
  return &dword_60C8A688;
}
