/* sub_6015CA58
 * address: 0x6015CA58   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6015CA58()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C88A48 & ~(1612040812 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A48) )
  {
    dword_60C88A44 = (int)&off_60BC3188;
    _cxa_guard_release(&dword_60C88A48);
  }
  return &dword_60C88A44;
}
