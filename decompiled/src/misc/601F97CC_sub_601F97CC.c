/* sub_601F97CC
 * address: 0x601F97CC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601F97CC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8BE5C & ~(1612683232 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8BE5C) )
  {
    dword_60C8BE58 = (int)&off_60BD6B64;
    _cxa_guard_release(&dword_60C8BE5C);
  }
  return &dword_60C8BE58;
}
