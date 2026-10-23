/* sub_60705218
 * address: 0x60705218   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60705218()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CBB5B4 & ~(1617973804 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CBB5B4) )
  {
    dword_60CBB5B0 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60CBB5B4);
  }
  return &dword_60CBB5B0;
}
