/* sub_6072DD28
 * address: 0x6072DD28   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6072DD28()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBD948 & ~(1618140476 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD948) )
  {
    dword_60CBD944 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBD948);
  }
  return &dword_60CBD944;
}
