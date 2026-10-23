/* sub_60058A2C
 * address: 0x60058A2C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60058A2C()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C80B30 & ~(1610975808 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C80B30) )
  {
    dword_60C80B2C = (int)&off_60BC4B48;
    _cxa_guard_release(dword_60C80B30);
  }
  return &dword_60C80B2C;
}
