/* sub_6091AB78
 * address: 0x6091AB78   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6091AB78()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9BADC & ~(1620159372 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BADC) )
  {
    dword_60C9BAD8 = (int)&off_60BF9D20;
    _cxa_guard_release(&dword_60C9BADC);
  }
  return &dword_60C9BAD8;
}
