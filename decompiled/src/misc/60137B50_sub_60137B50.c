/* sub_60137B50
 * address: 0x60137B50   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60137B50()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C878D8 & ~(1611889508 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C878D8) )
  {
    dword_60C878D4 = (int)&off_60BC7C24;
    _cxa_guard_release(&dword_60C878D8);
  }
  return &dword_60C878D4;
}
