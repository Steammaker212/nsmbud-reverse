/* sub_6092A588
 * address: 0x6092A588   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6092A588(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C9BEF4 & ~(1620223392 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BEF4) )
  {
    dword_60C9BEF0 = (int)&off_60BFA424;
    _cxa_guard_release(&dword_60C9BEF4);
  }
  if ( a2 == &dword_60C9BEF0 )
    return 1;
  if ( ((unsigned int)&dword_60C9BEEC & ~(1620223484 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C9BEEC) )
    {
      dword_60C9BEE8 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C9BEEC);
    }
  }
  return a2 == &dword_60C9BEE8;
}
