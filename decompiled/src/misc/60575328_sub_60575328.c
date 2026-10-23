/* sub_60575328
 * address: 0x60575328   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60575328()
{
  char v0; // r12

  if ( ((unsigned int)dword_60CAEB00 & ~(1616335676 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60CAEB00) )
  {
    dword_60CAEAFC = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60CAEB00);
  }
  return &dword_60CAEAFC;
}
