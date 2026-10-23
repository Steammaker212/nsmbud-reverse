/* sub_6037F2D4
 * address: 0x6037F2D4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6037F2D4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C969A0 & ~(1614279400 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C969A0) )
  {
    dword_60C9699C = (int)&off_60BF3314;
    _cxa_guard_release(&dword_60C969A0);
  }
  return &dword_60C9699C;
}
