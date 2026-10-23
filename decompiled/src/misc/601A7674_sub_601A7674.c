/* sub_601A7674
 * address: 0x601A7674   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601A7674()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C88A98 & ~(1612347016 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A98) )
  {
    dword_60C88A94 = (int)&off_60BD4BA4;
    _cxa_guard_release(&dword_60C88A98);
  }
  return &dword_60C88A94;
}
