/* sub_606CD528
 * address: 0x606CD528   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606CD528(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBB2E8 & ~(1617745216 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB2E8) )
  {
    dword_60CBB2E4 = (int)&off_60C1CCEC;
    _cxa_guard_release(&dword_60CBB2E8);
  }
  return a2 == &dword_60CBB2E4 || sub_606CC6D8(a2);
}
