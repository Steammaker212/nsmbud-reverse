/* sub_6016931C
 * address: 0x6016931C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6016931C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C88A90 & ~(1612092208 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A90) )
  {
    dword_60C88A8C = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C88A90);
  }
  return &dword_60C88A8C;
}
