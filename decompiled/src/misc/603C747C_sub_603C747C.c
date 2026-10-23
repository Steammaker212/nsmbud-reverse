/* sub_603C747C
 * address: 0x603C747C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603C747C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C98908 & ~(1614574736 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C98908) )
  {
    dword_60C98904 = (int)&off_60BDE8BC;
    _cxa_guard_release(&dword_60C98908);
  }
  return &dword_60C98904;
}
