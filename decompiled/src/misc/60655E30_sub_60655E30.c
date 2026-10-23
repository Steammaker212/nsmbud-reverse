/* sub_60655E30
 * address: 0x60655E30   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60655E30()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB6408 & ~(1617256004 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6408) )
  {
    dword_60CB6404 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB6408);
  }
  return &dword_60CB6404;
}
