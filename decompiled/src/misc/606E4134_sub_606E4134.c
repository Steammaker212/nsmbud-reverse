/* sub_606E4134
 * address: 0x606E4134   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606E4134(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBBF1C & ~(1617838412 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBBF1C) )
  {
    dword_60CBBF18 = (int)&off_60C09CE0;
    _cxa_guard_release(&dword_60CBBF1C);
  }
  if ( a2 == &dword_60CBBF18 )
    return 1;
  if ( ((unsigned int)&dword_60C83FB4 & ~(1617838504 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C83FB4) )
    {
      dword_60C83FB0 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C83FB4);
    }
  }
  return a2 == &dword_60C83FB0 || sub_60026DC8(a2);
}
