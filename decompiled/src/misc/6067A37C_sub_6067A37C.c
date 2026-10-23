/* sub_6067A37C
 * address: 0x6067A37C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6067A37C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB3430 & ~(1617404816 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3430) )
  {
    dword_60CB342C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB3430);
  }
  return &dword_60CB342C;
}
