/* sub_605686B4
 * address: 0x605686B4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605686B4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAE550 & ~(1616283336 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE550) )
  {
    dword_60CAE54C = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CAE550);
  }
  return &dword_60CAE54C;
}
