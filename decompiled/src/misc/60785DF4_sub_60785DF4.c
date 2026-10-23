/* sub_60785DF4
 * address: 0x60785DF4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60785DF4()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CC42F8 & ~(1618501128 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CC42F8) )
  {
    dword_60CC42F4 = (int)&off_60BC00BC;
    _cxa_guard_release(dword_60CC42F8);
  }
  return &dword_60CC42F4;
}
