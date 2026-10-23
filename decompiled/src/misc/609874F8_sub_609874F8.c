/* sub_609874F8
 * address: 0x609874F8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_609874F8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CD0C34 & ~(1620604172 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C34) )
  {
    dword_60CD0C30 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60CD0C34);
  }
  return &dword_60CD0C30;
}
