/* sub_60642600
 * address: 0x60642600   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60642600()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB5A14 & ~(1617176084 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5A14) )
  {
    dword_60CB5A10 = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60CB5A14);
  }
  return &dword_60CB5A10;
}
