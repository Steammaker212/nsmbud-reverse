/* sub_6022F2E8
 * address: 0x6022F2E8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6022F2E8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8D808 & ~(1612903164 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D808) )
  {
    dword_60C8D804 = (int)&off_60BD9320;
    _cxa_guard_release(&dword_60C8D808);
  }
  return &dword_60C8D804;
}
