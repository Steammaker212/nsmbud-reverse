/* sub_603E67DC
 * address: 0x603E67DC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603E67DC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C996E4 & ~(1614702576 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C996E4) )
  {
    dword_60C996E0 = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C996E4);
  }
  return &dword_60C996E0;
}
