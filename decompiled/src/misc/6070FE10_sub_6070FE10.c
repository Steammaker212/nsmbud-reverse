/* sub_6070FE10
 * address: 0x6070FE10   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6070FE10(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBD1AC & ~(1618017832 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD1AC) )
  {
    dword_60CBD1A8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CBD1AC);
  }
  return a2 == &dword_60CBD1A8 || sub_60026DC8(a2);
}
