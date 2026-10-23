/* RedCoin_vf0
 * address: 0x606C51EC   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall RedCoin_vf0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBABBC & ~(1617711620 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBABBC) )
  {
    dword_60CBABB8 = (int)&off_60C1028C;
    _cxa_guard_release(&dword_60CBABBC);
  }
  if ( a2 == &dword_60CBABB8 )
    return 1;
  if ( ((unsigned int)&dword_60C88A50 & ~(1617711712 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C88A50) )
    {
      dword_60C88A4C = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C88A50);
    }
  }
  return a2 == &dword_60C88A4C || sub_60026DC8(a2);
}
