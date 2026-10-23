/* sub_608501CC
 * address: 0x608501CC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608501CC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC7F14 & ~(1619329504 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7F14) )
  {
    dword_60CC7F10 = 0;
    _cxa_guard_release(&dword_60CC7F14);
  }
  return &dword_60CC7F10;
}
