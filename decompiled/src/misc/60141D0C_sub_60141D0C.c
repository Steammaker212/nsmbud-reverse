/* sub_60141D0C
 * address: 0x60141D0C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60141D0C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C823CC & ~(1611930912 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C823CC) )
  {
    dword_60C823C8 = (int)&off_60BC7C30;
    _cxa_guard_release(&dword_60C823CC);
  }
  return &dword_60C823C8;
}
