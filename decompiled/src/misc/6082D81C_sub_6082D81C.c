/* sub_6082D81C
 * address: 0x6082D81C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6082D81C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC6EEC & ~(1619187760 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6EEC) )
  {
    dword_60CC6EE8 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CC6EEC);
  }
  return &dword_60CC6EE8;
}
