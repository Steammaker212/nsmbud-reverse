/* sub_60688B20
 * address: 0x60688B20   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60688B20()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C80060 & ~(1617464116 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C80060) )
  {
    dword_60C8005C = (int)&off_60BC2CE0;
    _cxa_guard_release(&dword_60C80060);
  }
  return &dword_60C8005C;
}
