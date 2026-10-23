/* sub_60995A54
 * address: 0x60995A54   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60995A54()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60CD0CDC & ~(1620662888 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0CDC) )
  {
    if ( ((unsigned int)&dword_60CD0C54 & ~(1620662928 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C54) )
    {
      dword_60CD0C50 = sub_60995B28();
      _cxa_guard_release(&dword_60CD0C54);
    }
    dword_60CD0CD8 = (int)&dword_60CD0C50;
    _cxa_guard_release(&dword_60CD0CDC);
  }
  return &dword_60CD0CD8;
}
