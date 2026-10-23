/* sub_603E93FC
 * address: 0x603E93FC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603E93FC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C99890 & ~(1614713872 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C99890) )
  {
    dword_60C9988C = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C99890);
  }
  return &dword_60C9988C;
}
