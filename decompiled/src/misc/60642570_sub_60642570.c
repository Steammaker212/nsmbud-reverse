/* sub_60642570
 * address: 0x60642570   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60642570(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB5A14 & ~(1617175944 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5A14) )
  {
    dword_60CB5A10 = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60CB5A14);
  }
  return a2 == &dword_60CB5A10 || sub_60027FB0(a2);
}
