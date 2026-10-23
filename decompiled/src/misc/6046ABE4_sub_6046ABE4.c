/* sub_6046ABE4
 * address: 0x6046ABE4   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6046ABE4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C9D548 & ~(1615244284 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D548) )
  {
    dword_60C9D544 = (int)&off_60BFB4E4;
    _cxa_guard_release(&dword_60C9D548);
  }
  if ( a2 == &dword_60C9D544 )
    return 1;
  if ( ((unsigned int)&dword_60C9D168 & ~(1615244376 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D168) )
  {
    dword_60C9D164 = (int)&off_60BFB4F0;
    _cxa_guard_release(&dword_60C9D168);
  }
  if ( a2 == &dword_60C9D164 )
    return 1;
  if ( ((unsigned int)&dword_60C7B418 & ~(1615244468 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B418) )
    {
      dword_60C7B414 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B418);
    }
  }
  return a2 == &dword_60C7B414 || sub_60026DC8(a2);
}
