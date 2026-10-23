/* sub_60682728
 * address: 0x60682728   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60682728()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C80068 & ~(1617438524 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C80068) )
  {
    dword_60C80064 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C80068);
  }
  return &dword_60C80064;
}
