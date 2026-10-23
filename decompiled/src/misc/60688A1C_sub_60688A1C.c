/* sub_60688A1C
 * address: 0x60688A1C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60688A1C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C80060 & ~(1617463860 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80060) )
  {
    dword_60C8005C = (int)&off_60BC2CE0;
    _cxa_guard_release(&dword_60C80060);
  }
  if ( a2 == &dword_60C8005C )
    return 1;
  if ( ((unsigned int)&dword_60C80068 & ~(1617463952 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C80068) )
    {
      dword_60C80064 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C80068);
    }
  }
  return a2 == &dword_60C80064 || sub_60026DC8(a2);
}
