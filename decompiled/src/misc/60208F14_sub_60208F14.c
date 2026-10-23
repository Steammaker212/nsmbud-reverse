/* sub_60208F14
 * address: 0x60208F14   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60208F14()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C8C8B8 & ~(1612746536 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C8C8B8) )
  {
    dword_60C8C8B4 = (int)&off_60BD4EC8;
    _cxa_guard_release(dword_60C8C8B8);
  }
  return &dword_60C8C8B4;
}
