/* sub_606C96F8
 * address: 0x606C96F8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606C96F8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C88A50 & ~(1617729292 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A50) )
  {
    dword_60C88A4C = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C88A50);
  }
  return &dword_60C88A4C;
}
