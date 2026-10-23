/* sub_601FA92C
 * address: 0x601FA92C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601FA92C()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C8BF78 & ~(1612687680 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C8BF78) )
  {
    dword_60C8BF74 = (int)&off_60BD6B64;
    _cxa_guard_release(dword_60C8BF78);
  }
  return &dword_60C8BF74;
}
