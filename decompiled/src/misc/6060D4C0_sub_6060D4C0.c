/* sub_6060D4C0
 * address: 0x6060D4C0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6060D4C0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB2EA0 & ~(1616958676 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2EA0) )
  {
    dword_60CB2E9C = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CB2EA0);
  }
  return &dword_60CB2E9C;
}
