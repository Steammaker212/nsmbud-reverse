/* sub_60684008
 * address: 0x60684008   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60684008(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB82D0 & ~(1617444896 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB82D0) )
  {
    dword_60CB82CC = (int)&off_60BC2CE0;
    _cxa_guard_release(&dword_60CB82D0);
  }
  if ( a2 == &dword_60CB82CC )
    return 1;
  if ( ((unsigned int)&dword_60C80068 & ~(1617444988 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C80068) )
    {
      dword_60C80064 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C80068);
    }
  }
  return a2 == &dword_60C80064 || sub_60026DC8(a2);
}
