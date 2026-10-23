/* sub_606F1A54
 * address: 0x606F1A54   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606F1A54(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBC2E0 & ~(1617893996 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC2E0) )
  {
    dword_60CBC2DC = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBC2E0);
  }
  return a2 == &dword_60CBC2DC || sub_60027FB0(a2);
}
