/* sub_60913960
 * address: 0x60913960   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60913960()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CCFC7C & ~(1620130164 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CCFC7C) )
  {
    dword_60CCFC78 = (int)&off_60C5D4D8;
    _cxa_guard_release(&dword_60CCFC7C);
  }
  return &dword_60CCFC78;
}
