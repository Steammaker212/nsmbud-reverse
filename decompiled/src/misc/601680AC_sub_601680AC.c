/* sub_601680AC
 * address: 0x601680AC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601680AC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C88A78 & ~(1612087488 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A78) )
  {
    dword_60C88A74 = (int)&off_60BD4AD8;
    _cxa_guard_release(&dword_60C88A78);
  }
  return &dword_60C88A74;
}
