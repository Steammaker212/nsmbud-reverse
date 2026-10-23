/* sub_606DF674
 * address: 0x606DF674   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606DF674(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60CBBCD0 & ~(1617819276 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CBBCD0) )
  {
    dword_60CBBCCC = (int)&off_60C09CE0;
    _cxa_guard_release(dword_60CBBCD0);
  }
  if ( a2 == &dword_60CBBCCC )
    return 1;
  if ( ((unsigned int)&dword_60C83FB4 & ~(1617819368 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C83FB4) )
    {
      dword_60C83FB0 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C83FB4);
    }
  }
  return a2 == &dword_60C83FB0 || sub_60026DC8(a2);
}
