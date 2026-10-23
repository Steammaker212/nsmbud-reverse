/* sub_60605178
 * address: 0x60605178   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60605178(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB29D4 & ~(1616925072 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB29D4) )
  {
    dword_60CB29D0 = (int)&off_60C0EDC8;
    _cxa_guard_release(&dword_60CB29D4);
  }
  if ( a2 == &dword_60CB29D0 )
    return 1;
  if ( ((unsigned int)&dword_60CB2914 & ~(1616925164 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB2914) )
    {
      dword_60CB2910 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CB2914);
    }
  }
  return a2 == &dword_60CB2910 || sub_60026DC8(a2);
}
