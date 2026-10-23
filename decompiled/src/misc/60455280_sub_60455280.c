/* sub_60455280
 * address: 0x60455280   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60455280(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8C234 & ~(1615155864 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C234) )
  {
    dword_60C8C230 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60C8C234);
  }
  return a2 == &dword_60C8C230;
}
