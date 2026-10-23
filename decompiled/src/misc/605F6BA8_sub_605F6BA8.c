/* sub_605F6BA8
 * address: 0x605F6BA8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605F6BA8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB2374 & ~(1616866240 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2374) )
  {
    dword_60CB2370 = (int)&off_60C075D4;
    _cxa_guard_release(&dword_60CB2374);
  }
  if ( a2 == &dword_60CB2370 )
    return 1;
  if ( ((unsigned int)dword_60CAF8F4 & ~(1616866332 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60CAF8F4) )
    {
      dword_60CAF8F0 = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60CAF8F4);
    }
  }
  return a2 == &dword_60CAF8F0 || sub_60026DC8(a2);
}
