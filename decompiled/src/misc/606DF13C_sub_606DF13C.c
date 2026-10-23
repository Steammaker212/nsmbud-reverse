/* sub_606DF13C
 * address: 0x606DF13C   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606DF13C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBBCB0 & ~(1617817940 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBBCB0) )
  {
    dword_60CBBCAC = (int)&off_60C1ED70;
    _cxa_guard_release(&dword_60CBBCB0);
  }
  if ( a2 == &dword_60CBBCAC )
    return 1;
  if ( ((unsigned int)&dword_60CBBC70 & ~(1617818032 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBBC70) )
  {
    dword_60CBBC6C = (int)&off_60C08AD0;
    _cxa_guard_release(&dword_60CBBC70);
  }
  if ( a2 == &dword_60CBBC6C )
    return 1;
  if ( ((unsigned int)&dword_60CB02B4 & ~(1617818124 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB02B4) )
    {
      dword_60CB02B0 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB02B4);
    }
  }
  return a2 == &dword_60CB02B0 || sub_60027FB0(a2);
}
