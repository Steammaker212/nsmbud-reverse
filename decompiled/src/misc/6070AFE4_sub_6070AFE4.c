/* sub_6070AFE4
 * address: 0x6070AFE4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6070AFE4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBC9D8 & ~(1617997816 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC9D8) )
  {
    dword_60CBC9D4 = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60CBC9D8);
  }
  return &dword_60CBC9D4;
}
