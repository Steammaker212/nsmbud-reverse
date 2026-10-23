/* sub_600A3464
 * address: 0x600A3464   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600A3464(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C82840 & ~(1611281532 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C82840) )
  {
    dword_60C8283C = (int)&off_60BC763C;
    _cxa_guard_release(&dword_60C82840);
  }
  if ( a2 == &dword_60C8283C )
    return 1;
  if ( ((unsigned int)dword_60C81F18 & ~(1611281624 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C81F18) )
    {
      dword_60C81F14 = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C81F18);
    }
  }
  return a2 == &dword_60C81F14 || sub_60026DC8(a2);
}
