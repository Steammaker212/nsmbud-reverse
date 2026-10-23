/* sub_601765D8
 * address: 0x601765D8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601765D8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C88E3C & ~(1612146156 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C88E3C) )
  {
    dword_60C88E38 = (int)&off_60BD4EC8;
    _cxa_guard_release(&dword_60C88E3C);
  }
  return &dword_60C88E38;
}
