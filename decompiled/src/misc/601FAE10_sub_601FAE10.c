/* sub_601FAE10
 * address: 0x601FAE10   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601FAE10()
{
  char v0; // r12

  if ( ((unsigned int)dword_60C8BFE8 & ~(1612688932 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C8BFE8) )
  {
    dword_60C8BFE4 = (int)&off_60BD6B64;
    _cxa_guard_release(dword_60C8BFE8);
  }
  return &dword_60C8BFE4;
}
