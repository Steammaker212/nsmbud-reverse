/* sub_606013F8
 * address: 0x606013F8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606013F8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB283C & ~(1616909328 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB283C) )
  {
    dword_60CB2838 = (int)&off_60C0EAA8;
    _cxa_guard_release(&dword_60CB283C);
  }
  if ( a2 == &dword_60CB2838 )
    return 1;
  if ( ((unsigned int)&dword_60CB2844 & ~(1616909420 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB2844) )
    {
      dword_60CB2840 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB2844);
    }
  }
  return a2 == &dword_60CB2840 || sub_60027FB0(a2);
}
