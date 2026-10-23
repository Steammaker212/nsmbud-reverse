/* sub_606F0FAC
 * address: 0x606F0FAC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606F0FAC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBC240 & ~(1617891264 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC240) )
  {
    dword_60CBC23C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBC240);
  }
  return &dword_60CBC23C;
}
