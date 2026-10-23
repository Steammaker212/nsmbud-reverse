/* sub_606219A0
 * address: 0x606219A0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606219A0()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CB3828 & ~(1617041844 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CB3828) )
  {
    dword_60CB3824 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60CB3828);
  }
  return &dword_60CB3824;
}
