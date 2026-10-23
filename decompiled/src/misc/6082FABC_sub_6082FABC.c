/* sub_6082FABC
 * address: 0x6082FABC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6082FABC()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C97684 & ~(1619196624 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C97684) )
  {
    dword_60C97680 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60C97684);
  }
  return &dword_60C97680;
}
