/* sub_60670EAC
 * address: 0x60670EAC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60670EAC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB724C & ~(1617366720 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB724C) )
  {
    dword_60CB7248 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB724C);
  }
  return &dword_60CB7248;
}
