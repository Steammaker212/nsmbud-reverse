/* sub_600E5CE4
 * address: 0x600E5CE4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600E5CE4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C84B5C & ~(1611554040 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B5C) )
  {
    dword_60C84B58 = (int)&off_60BCCA60;
    _cxa_guard_release(&dword_60C84B5C);
  }
  return &dword_60C84B58;
}
