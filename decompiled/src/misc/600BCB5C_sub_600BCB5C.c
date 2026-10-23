/* sub_600BCB5C
 * address: 0x600BCB5C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600BCB5C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8376C & ~(1611385716 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8376C) )
  {
    dword_60C83768 = (int)&off_60BC9D8C;
    _cxa_guard_release(&dword_60C8376C);
  }
  if ( a2 == &dword_60C83768 )
    return 1;
  if ( ((unsigned int)&dword_60C83720 & ~(1611385808 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C83720) )
    {
      dword_60C8371C = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C83720);
    }
  }
  return a2 == &dword_60C8371C || sub_60027FB0(a2);
}
