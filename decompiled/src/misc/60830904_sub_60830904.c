/* sub_60830904
 * address: 0x60830904   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60830904()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC716C & ~(1619200280 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC716C) )
  {
    dword_60CC7168 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CC716C);
  }
  return &dword_60CC7168;
}
