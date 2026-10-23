/* sub_6047679C
 * address: 0x6047679C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6047679C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9D9C4 & ~(1615292336 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9C4) )
  {
    dword_60C9D9C0 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60C9D9C4);
  }
  return &dword_60C9D9C0;
}
