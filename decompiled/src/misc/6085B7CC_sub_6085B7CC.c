/* sub_6085B7CC
 * address: 0x6085B7CC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6085B7CC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9DA14 & ~(1619376096 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA14) )
  {
    dword_60C9DA10 = 0;
    _cxa_guard_release(&dword_60C9DA14);
  }
  return &dword_60C9DA10;
}
