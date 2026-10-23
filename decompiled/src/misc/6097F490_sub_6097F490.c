/* sub_6097F490
 * address: 0x6097F490   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6097F490()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60CD0BBC & ~(1620571300 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BBC) )
  {
    if ( ((unsigned int)&dword_60C9D9D4 & ~(1620571340 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
    {
      dword_60C9D9D0 = 0;
      _cxa_guard_release(&dword_60C9D9D4);
    }
    dword_60CD0BB8 = (int)&dword_60C9D9D0;
    _cxa_guard_release(&dword_60CD0BBC);
  }
  return &dword_60CD0BB8;
}
