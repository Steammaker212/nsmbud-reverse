/* sub_6082DFC0
 * address: 0x6082DFC0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6082DFC0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC6F2C & ~(1619189716 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6F2C) )
  {
    dword_60CC6F28 = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60CC6F2C);
  }
  return &dword_60CC6F28;
}
