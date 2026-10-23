/* sub_6028E18C
 * address: 0x6028E18C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6028E18C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8F598 & ~(1613291936 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F598) )
  {
    dword_60C8F594 = (int)&off_60BDE8BC;
    _cxa_guard_release(&dword_60C8F598);
  }
  return &dword_60C8F594;
}
