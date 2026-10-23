/* sub_6045E980
 * address: 0x6045E980   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6045E980(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C9D188 & ~(1615194520 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D188) )
  {
    dword_60C9D184 = (int)&off_60BFB4E4;
    _cxa_guard_release(&dword_60C9D188);
  }
  if ( a2 == &dword_60C9D184 )
    return 1;
  if ( ((unsigned int)&dword_60C9D168 & ~(1615194612 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D168) )
  {
    dword_60C9D164 = (int)&off_60BFB4F0;
    _cxa_guard_release(&dword_60C9D168);
  }
  if ( a2 == &dword_60C9D164 )
    return 1;
  if ( ((unsigned int)&dword_60C7B418 & ~(1615194704 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7B418) )
    {
      dword_60C7B414 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B418);
    }
  }
  return a2 == &dword_60C7B414 || sub_60026DC8(a2);
}
