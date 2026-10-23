/* sub_60992DF0
 * address: 0x60992DF0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60992DF0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CD0C74 & ~(1620651524 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C74) )
  {
    dword_60CD0C70 = 0;
    _cxa_guard_release(&dword_60CD0C74);
  }
  return &dword_60CD0C70;
}
