/* sub_601ACCE0
 * address: 0x601ACCE0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601ACCE0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8A660 & ~(1612369140 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8A660) )
  {
    dword_60C8A65C = (int)&off_60BD4E08;
    _cxa_guard_release(&dword_60C8A660);
  }
  return &dword_60C8A65C;
}
