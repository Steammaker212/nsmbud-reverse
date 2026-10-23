/* sub_60700E24
 * address: 0x60700E24   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60700E24()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBC690 & ~(1617956408 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC690) )
  {
    dword_60CBC68C = (int)&off_60C20A40;
    _cxa_guard_release(&dword_60CBC690);
  }
  return &dword_60CBC68C;
}
