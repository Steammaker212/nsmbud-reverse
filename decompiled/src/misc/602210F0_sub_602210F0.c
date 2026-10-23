/* sub_602210F0
 * address: 0x602210F0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602210F0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8967C & ~(1612845316 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8967C) )
  {
    dword_60C89678 = (int)&off_60BD5510;
    _cxa_guard_release(&dword_60C8967C);
  }
  return &dword_60C89678;
}
