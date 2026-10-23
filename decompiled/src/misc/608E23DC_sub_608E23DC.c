/* sub_608E23DC
 * address: 0x608E23DC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608E23DC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CCEBB0 & ~(1619928048 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEBB0) )
  {
    dword_60CCEBAC = (int)&off_60C5BEF8;
    _cxa_guard_release(&dword_60CCEBB0);
  }
  return &dword_60CCEBAC;
}
