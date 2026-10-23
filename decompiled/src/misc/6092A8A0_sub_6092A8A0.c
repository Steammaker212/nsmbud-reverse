/* sub_6092A8A0
 * address: 0x6092A8A0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6092A8A0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9BEFC & ~(1620224180 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BEFC) )
  {
    dword_60C9BEF8 = (int)&off_60BFA424;
    _cxa_guard_release(&dword_60C9BEFC);
  }
  return &dword_60C9BEF8;
}
