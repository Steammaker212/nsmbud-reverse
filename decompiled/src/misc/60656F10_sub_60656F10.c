/* sub_60656F10
 * address: 0x60656F10   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60656F10()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CB64A0 & ~(1617260324 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CB64A0) )
  {
    dword_60CB649C = (int)&off_60C1455C;
    _cxa_guard_release(dword_60CB64A0);
  }
  return &dword_60CB649C;
}
