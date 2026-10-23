/* sub_6060527C
 * address: 0x6060527C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6060527C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB29D4 & ~(1616925328 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB29D4) )
  {
    dword_60CB29D0 = (int)&off_60C0EDC8;
    _cxa_guard_release(&dword_60CB29D4);
  }
  return &dword_60CB29D0;
}
