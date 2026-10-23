/* sub_6075BB70
 * address: 0x6075BB70   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6075BB70(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBF194 & ~(1618328456 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBF194) )
  {
    dword_60CBF190 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60CBF194);
  }
  return a2 == &dword_60CBF190;
}
