/* sub_60374A1C
 * address: 0x60374A1C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60374A1C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C96300 & ~(1614236208 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C96300) )
  {
    dword_60C962FC = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C96300);
  }
  return &dword_60C962FC;
}
