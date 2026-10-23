/* sub_60620BD4
 * address: 0x60620BD4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60620BD4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB3820 & ~(1617038312 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3820) )
  {
    dword_60CB381C = (int)&off_60C1138C;
    _cxa_guard_release(&dword_60CB3820);
  }
  return &dword_60CB381C;
}
