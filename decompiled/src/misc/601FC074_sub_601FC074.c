/* sub_601FC074
 * address: 0x601FC074   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601FC074()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C8AF58 & ~(1612693640 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C8AF58) )
  {
    dword_60C8AF54 = (int)&off_60BD4E08;
    _cxa_guard_release(dword_60C8AF58);
  }
  return &dword_60C8AF54;
}
