/* sub_608EB9B8
 * address: 0x608EB9B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608EB9B8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9BAEC & ~(1619966412 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BAEC) )
  {
    dword_60C9BAE8 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60C9BAEC);
  }
  return &dword_60C9BAE8;
}
