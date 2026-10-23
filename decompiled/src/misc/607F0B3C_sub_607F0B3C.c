/* sub_607F0B3C
 * address: 0x607F0B3C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_607F0B3C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC5E54 & ~(1618938704 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC5E54) )
  {
    dword_60CC5E50 = (int)&off_60C266E0;
    _cxa_guard_release(&dword_60CC5E54);
  }
  return &dword_60CC5E50;
}
