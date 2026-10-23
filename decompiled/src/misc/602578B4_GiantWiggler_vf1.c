/* GiantWiggler_vf1
 * address: 0x602578B4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *GiantWiggler_vf1()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8E02C & ~(1613068488 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E02C) )
  {
    dword_60C8E028 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C8E02C);
  }
  return &dword_60C8E028;
}
