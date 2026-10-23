/* sub_6082CCEC
 * address: 0x6082CCEC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6082CCEC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC6E3C & ~(1619184896 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6E3C) )
  {
    dword_60CC6E38 = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60CC6E3C);
  }
  return &dword_60CC6E38;
}
