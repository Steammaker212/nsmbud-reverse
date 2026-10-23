/* sub_606D1430
 * address: 0x606D1430   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606D1430(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBB4B8 & ~(1617761352 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB4B8) )
  {
    dword_60CBB4B4 = (int)&off_60C12DFC;
    _cxa_guard_release(&dword_60CBB4B8);
  }
  if ( a2 == &dword_60CBB4B4 )
    return 1;
  if ( ((unsigned int)&dword_60CB54F4 & ~(1617761444 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB54F4) )
    {
      dword_60CB54F0 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB54F4);
    }
  }
  return a2 == &dword_60CB54F0 || sub_60027FB0(a2);
}
