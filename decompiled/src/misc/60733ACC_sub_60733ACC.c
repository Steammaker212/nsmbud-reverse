/* sub_60733ACC
 * address: 0x60733ACC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60733ACC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C99D80 & ~(1618164448 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C99D80) )
  {
    dword_60C99D7C = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C99D80);
  }
  return &dword_60C99D7C;
}
