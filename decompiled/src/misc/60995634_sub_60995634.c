/* sub_60995634
 * address: 0x60995634   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60995634()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60CD0CD4 & ~(1620661832 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0CD4) )
  {
    if ( ((unsigned int)&dword_60CD0C74 & ~(1620661872 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C74) )
    {
      dword_60CD0C70 = 0;
      _cxa_guard_release(&dword_60CD0C74);
    }
    dword_60CD0CD0 = (int)&dword_60CD0C70;
    _cxa_guard_release(&dword_60CD0CD4);
  }
  return &dword_60CD0CD0;
}
