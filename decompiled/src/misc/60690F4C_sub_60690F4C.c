/* sub_60690F4C
 * address: 0x60690F4C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60690F4C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB900C & ~(1617497952 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB900C) )
  {
    dword_60CB9008 = (int)&off_60C1777C;
    _cxa_guard_release(&dword_60CB900C);
  }
  return &dword_60CB9008;
}
