/* sub_603DCB34
 * address: 0x603DCB34   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603DCB34()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C992C0 & ~(1614662472 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C992C0) )
  {
    dword_60C992BC = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C992C0);
  }
  return &dword_60C992BC;
}
