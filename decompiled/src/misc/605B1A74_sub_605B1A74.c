/* sub_605B1A74
 * address: 0x605B1A74   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605B1A74(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB038C & ~(1616583308 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB038C) )
  {
    dword_60CB0388 = (int)&off_60BD4904;
    _cxa_guard_release(&dword_60CB038C);
  }
  if ( a2 == &dword_60CB0388 )
    return 1;
  if ( ((unsigned int)&dword_60C7B384 & ~(1616583400 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
  }
  return a2 == &dword_60C7B380 || sub_60026DC8(a2);
}
