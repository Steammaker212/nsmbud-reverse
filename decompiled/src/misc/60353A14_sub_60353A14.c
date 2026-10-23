/* sub_60353A14
 * address: 0x60353A14   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60353A14()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C94FF8 & ~(1614101032 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C94FF8) )
  {
    dword_60C94FF4 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C94FF8);
  }
  return &dword_60C94FF4;
}
