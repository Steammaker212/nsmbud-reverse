/* sub_608E8084
 * address: 0x608E8084   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608E8084()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC6C1C & ~(1619951768 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6C1C) )
  {
    dword_60CC6C18 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60CC6C1C);
  }
  return &dword_60CC6C18;
}
