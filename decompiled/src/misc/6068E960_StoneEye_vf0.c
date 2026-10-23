/* StoneEye_vf0
 * address: 0x6068E960   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall StoneEye_vf0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60CB84C8 & ~(1617488248 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CB84C8) )
  {
    dword_60CB84C4 = (int)&off_60C12DFC;
    _cxa_guard_release(dword_60CB84C8);
  }
  if ( a2 == &dword_60CB84C4 )
    return 1;
  if ( ((unsigned int)&dword_60CB54F4 & ~(1617488340 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB54F4) )
    {
      dword_60CB54F0 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB54F4);
    }
  }
  return a2 == &dword_60CB54F0 || sub_60027FB0(a2);
}
