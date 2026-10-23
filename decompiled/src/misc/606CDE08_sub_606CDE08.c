/* sub_606CDE08
 * address: 0x606CDE08   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606CDE08(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBB348 & ~(1617747488 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB348) )
  {
    dword_60CBB344 = (int)&off_60C1D3A0;
    _cxa_guard_release(&dword_60CBB348);
  }
  if ( a2 == &dword_60CBB344 )
    return 1;
  if ( ((unsigned int)&dword_60CBB308 & ~(1617747580 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CBB308) )
    {
      dword_60CBB304 = (int)&off_60C1CCEC;
      _cxa_guard_release(&dword_60CBB308);
    }
  }
  return a2 == &dword_60CBB304 || sub_606CC6D8(a2);
}
