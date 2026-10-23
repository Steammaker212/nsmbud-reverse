/* sub_6085411C
 * address: 0x6085411C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6085411C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9D9BC & ~(1619345712 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9BC) )
  {
    dword_60C9D9B8 = 0;
    _cxa_guard_release(&dword_60C9D9BC);
  }
  return &dword_60C9D9B8;
}
