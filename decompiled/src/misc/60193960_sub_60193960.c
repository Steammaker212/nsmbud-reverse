/* sub_60193960
 * address: 0x60193960   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60193960()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C89A44 & ~(1612265844 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C89A44) )
  {
    dword_60C89A40 = (int)&off_60BD5A64;
    _cxa_guard_release(&dword_60C89A44);
  }
  return &dword_60C89A40;
}
