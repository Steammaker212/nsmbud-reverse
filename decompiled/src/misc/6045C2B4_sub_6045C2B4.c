/* sub_6045C2B4
 * address: 0x6045C2B4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6045C2B4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9CFC0 & ~(1615184584 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CFC0) )
  {
    dword_60C9CFBC = (int)&off_60BFB228;
    _cxa_guard_release(&dword_60C9CFC0);
  }
  return &dword_60C9CFBC;
}
