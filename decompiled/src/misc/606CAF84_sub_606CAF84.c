/* sub_606CAF84
 * address: 0x606CAF84   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606CAF84(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB6DEC & ~(1617735580 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6DEC) )
  {
    dword_60CB6DE8 = (int)&off_60C12DF0;
    _cxa_guard_release(&dword_60CB6DEC);
  }
  if ( a2 == &dword_60CB6DE8 )
    return 1;
  if ( ((unsigned int)&dword_60CB54EC & ~(1617735672 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB54EC) )
  {
    dword_60CB54E8 = (int)&off_60C12DFC;
    _cxa_guard_release(&dword_60CB54EC);
  }
  if ( a2 == &dword_60CB54E8 )
    return 1;
  if ( ((unsigned int)&dword_60CB54F4 & ~(1617735764 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB54F4) )
    {
      dword_60CB54F0 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB54F4);
    }
  }
  return a2 == &dword_60CB54F0 || sub_60027FB0(a2);
}
