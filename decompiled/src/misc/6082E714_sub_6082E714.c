/* sub_6082E714
 * address: 0x6082E714   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6082E714()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC6F6C & ~(1619191592 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6F6C) )
  {
    dword_60CC6F68 = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60CC6F6C);
  }
  return &dword_60CC6F68;
}
