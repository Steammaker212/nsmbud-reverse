/* sub_600ABAEC
 * address: 0x600ABAEC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600ABAEC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C82EA4 & ~(1611315968 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C82EA4) )
  {
    dword_60C82EA0 = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C82EA4);
  }
  return &dword_60C82EA0;
}
