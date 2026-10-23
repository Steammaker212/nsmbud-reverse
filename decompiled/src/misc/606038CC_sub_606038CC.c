/* sub_606038CC
 * address: 0x606038CC   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606038CC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB290C & ~(1616918756 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB290C) )
  {
    dword_60CB2908 = (int)&off_60C0EDC8;
    _cxa_guard_release(&dword_60CB290C);
  }
  if ( a2 == &dword_60CB2908 )
    return 1;
  if ( ((unsigned int)&dword_60CB2914 & ~(1616918848 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB2914) )
    {
      dword_60CB2910 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CB2914);
    }
  }
  return a2 == &dword_60CB2910 || sub_60026DC8(a2);
}
