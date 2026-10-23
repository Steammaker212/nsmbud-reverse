/* sub_60054448
 * address: 0x60054448   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60054448()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C807EC & ~(1610957916 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C807EC) )
  {
    dword_60C807E8 = (int)&off_60BC210C;
    _cxa_guard_release(&dword_60C807EC);
  }
  return &dword_60C807E8;
}
