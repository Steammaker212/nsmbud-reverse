/* sub_606196F8
 * address: 0x606196F8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606196F8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB3428 & ~(1617008396 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3428) )
  {
    dword_60CB3424 = (int)&off_60C107F4;
    _cxa_guard_release(&dword_60CB3428);
  }
  return &dword_60CB3424;
}
