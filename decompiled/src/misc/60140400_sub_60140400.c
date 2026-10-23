/* sub_60140400
 * address: 0x60140400   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60140400()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C87D28 & ~(1611924500 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C87D28) )
  {
    dword_60C87D24 = (int)&off_60BD20C4;
    _cxa_guard_release(dword_60C87D28);
  }
  return &dword_60C87D24;
}
