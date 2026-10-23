/* sub_6010EA64
 * address: 0x6010EA64   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6010EA64()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C866D8 & ~(1611721336 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C866D8) )
  {
    dword_60C866D4 = (int)&off_60BC8314;
    _cxa_guard_release(&dword_60C866D8);
  }
  return &dword_60C866D4;
}
