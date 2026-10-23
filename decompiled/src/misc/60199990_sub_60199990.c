/* sub_60199990
 * address: 0x60199990   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60199990()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C81750 & ~(1612290468 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C81750) )
  {
    dword_60C8174C = (int)&off_60BC6E88;
    _cxa_guard_release(&dword_60C81750);
  }
  return &dword_60C8174C;
}
