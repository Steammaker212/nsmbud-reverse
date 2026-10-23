/* sub_606058C4
 * address: 0x606058C4   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606058C4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB2A34 & ~(1616926940 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2A34) )
  {
    dword_60CB2A30 = (int)&off_60C0EDC8;
    _cxa_guard_release(&dword_60CB2A34);
  }
  if ( a2 == &dword_60CB2A30 )
    return 1;
  if ( ((unsigned int)&dword_60CB2914 & ~(1616927032 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB2914) )
    {
      dword_60CB2910 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CB2914);
    }
  }
  return a2 == &dword_60CB2910 || sub_60026DC8(a2);
}
