/* sub_601052F8
 * address: 0x601052F8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601052F8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C86194 & ~(1611682572 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C86194) )
  {
    dword_60C86190 = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60C86194);
  }
  return &dword_60C86190;
}
