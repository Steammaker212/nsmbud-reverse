/* sub_6067A2EC
 * address: 0x6067A2EC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6067A2EC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB3430 & ~(1617404676 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3430) )
  {
    dword_60CB342C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB3430);
  }
  return a2 == &dword_60CB342C || sub_60027FB0(a2);
}
