/* sub_6063A260
 * address: 0x6063A260   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6063A260()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB54C4 & ~(1617142388 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB54C4) )
  {
    dword_60CB54C0 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB54C4);
  }
  return &dword_60CB54C0;
}
