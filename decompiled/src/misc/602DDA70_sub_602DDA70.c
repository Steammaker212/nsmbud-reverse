/* sub_602DDA70
 * address: 0x602DDA70   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602DDA70()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C91D50 & ~(1613617796 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C91D50) )
  {
    dword_60C91D4C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C91D50);
  }
  return &dword_60C91D4C;
}
