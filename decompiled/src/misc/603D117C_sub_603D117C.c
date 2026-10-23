/* sub_603D117C
 * address: 0x603D117C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603D117C()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C98CE8 & ~(1614614928 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C98CE8) )
  {
    dword_60C98CE4 = (int)&off_60BC00BC;
    _cxa_guard_release(dword_60C98CE8);
  }
  return &dword_60C98CE4;
}
