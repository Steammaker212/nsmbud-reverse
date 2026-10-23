/* sub_602959F4
 * address: 0x602959F4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602959F4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8FBE0 & ~(1613322760 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8FBE0) )
  {
    dword_60C8FBDC = (int)&off_60BE065C;
    _cxa_guard_release(&dword_60C8FBE0);
  }
  return &dword_60C8FBDC;
}
