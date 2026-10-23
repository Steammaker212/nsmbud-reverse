/* sub_60149EDC
 * address: 0x60149EDC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60149EDC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C881F4 & ~(1611964144 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C881F4) )
  {
    dword_60C881F0 = (int)&off_60BD20C4;
    _cxa_guard_release(&dword_60C881F4);
  }
  return &dword_60C881F0;
}
