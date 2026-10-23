/* sub_601A70B0
 * address: 0x601A70B0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_601A70B0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8A254 & ~(1612345540 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8A254) )
  {
    dword_60C8A250 = (int)&off_60BD60CC;
    _cxa_guard_release(&dword_60C8A254);
  }
  return &dword_60C8A250;
}
