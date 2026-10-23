/* sub_606A2648
 * address: 0x606A2648   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606A2648()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CB99A8 & ~(1617569372 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CB99A8) )
  {
    dword_60CB99A4 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60CB99A8);
  }
  return &dword_60CB99A4;
}
