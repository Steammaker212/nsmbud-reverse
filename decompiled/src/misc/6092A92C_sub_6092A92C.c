/* sub_6092A92C
 * address: 0x6092A92C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6092A92C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C9BEE4 & ~(1620224324 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BEE4) )
  {
    dword_60C9BEE0 = (int)&off_60BFA424;
    _cxa_guard_release(&dword_60C9BEE4);
  }
  if ( a2 == &dword_60C9BEE0 )
    return 1;
  if ( ((unsigned int)&dword_60C9BEEC & ~(1620224416 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C9BEEC) )
    {
      dword_60C9BEE8 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C9BEEC);
    }
  }
  return a2 == &dword_60C9BEE8;
}
