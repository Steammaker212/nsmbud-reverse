/* sub_601465AC
 * address: 0x601465AC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601465AC()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C88090 & ~(1611949504 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C88090) )
  {
    dword_60C8808C = (int)&off_60BD2E54;
    _cxa_guard_release(dword_60C88090);
  }
  return &dword_60C8808C;
}
