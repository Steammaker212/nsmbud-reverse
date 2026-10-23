/* sub_60747350
 * address: 0x60747350   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60747350()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CBE564 & ~(1618244452 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CBE564) )
  {
    dword_60CBE560 = (int)&off_60BC00BC;
    _cxa_guard_release(dword_60CBE564);
  }
  return &dword_60CBE560;
}
