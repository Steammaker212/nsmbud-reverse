/* sub_600094AC
 * address: 0x600094AC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600094AC()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C7B3A4 & ~(1610650816 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C7B3A4) )
  {
    dword_60C7B3A0 = (int)&off_60BC00D4;
    _cxa_guard_release(dword_60C7B3A4);
  }
  return &dword_60C7B3A0;
}
