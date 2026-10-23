/* sub_600D6AEC
 * address: 0x600D6AEC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600D6AEC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C83FAC & ~(1611492096 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C83FAC) )
  {
    dword_60C83FA8 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C83FAC);
  }
  return &dword_60C83FA8;
}
