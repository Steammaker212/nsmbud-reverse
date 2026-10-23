/* sub_605F65EC
 * address: 0x605F65EC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605F65EC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB2334 & ~(1616864768 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2334) )
  {
    dword_60CB2330 = (int)&off_60C075D4;
    _cxa_guard_release(&dword_60CB2334);
  }
  return &dword_60CB2330;
}
