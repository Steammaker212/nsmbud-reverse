/* sub_605F1610
 * address: 0x605F1610   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605F1610()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB20EC & ~(1616844324 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB20EC) )
  {
    dword_60CB20E8 = (int)&off_60C0BD4C;
    _cxa_guard_release(&dword_60CB20EC);
  }
  return &dword_60CB20E8;
}
