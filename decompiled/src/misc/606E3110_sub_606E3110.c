/* sub_606E3110
 * address: 0x606E3110   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606E3110()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C83FB4 & ~(1617834276 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C83FB4) )
  {
    dword_60C83FB0 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C83FB4);
  }
  return &dword_60C83FB0;
}
