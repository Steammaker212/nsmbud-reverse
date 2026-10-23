/* sub_606CDAE8
 * address: 0x606CDAE8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606CDAE8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBB328 & ~(1617746688 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB328) )
  {
    dword_60CBB324 = (int)&off_60C1CCEC;
    _cxa_guard_release(&dword_60CBB328);
  }
  return a2 == &dword_60CBB324 || sub_606CC6D8(a2);
}
