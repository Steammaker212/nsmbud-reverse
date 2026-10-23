/* sub_60992498
 * address: 0x60992498   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60992498()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60CD0C6C & ~(1620649132 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C6C) )
  {
    if ( ((unsigned int)&dword_60CD0C74 & ~(1620649172 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C74) )
    {
      dword_60CD0C70 = 0;
      _cxa_guard_release(&dword_60CD0C74);
    }
    dword_60CD0C68 = (int)&dword_60CD0C70;
    _cxa_guard_release(&dword_60CD0C6C);
  }
  return &dword_60CD0C68;
}
