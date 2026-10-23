/* sub_606862A0
 * address: 0x606862A0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606862A0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB8394 & ~(1617453748 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB8394) )
  {
    dword_60CB8390 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB8394);
  }
  return &dword_60CB8390;
}
