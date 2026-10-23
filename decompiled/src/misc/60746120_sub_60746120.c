/* sub_60746120
 * address: 0x60746120   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60746120()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CBE4A4 & ~(1618239796 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CBE4A4) )
  {
    dword_60CBE4A0 = (int)&off_60BC00BC;
    _cxa_guard_release(dword_60CBE4A4);
  }
  return &dword_60CBE4A0;
}
