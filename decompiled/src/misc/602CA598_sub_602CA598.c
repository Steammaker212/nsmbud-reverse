/* sub_602CA598
 * address: 0x602CA598   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_602CA598()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C91844 & ~(1613538732 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C91844) )
  {
    dword_60C91840 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C91844);
  }
  return &dword_60C91840;
}
