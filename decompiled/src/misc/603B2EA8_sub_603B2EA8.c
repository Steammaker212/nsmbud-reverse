/* sub_603B2EA8
 * address: 0x603B2EA8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603B2EA8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C97DEC & ~(1614491328 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C97DEC) )
  {
    dword_60C97DE8 = (int)&off_60BF55F8;
    _cxa_guard_release(&dword_60C97DEC);
  }
  if ( a2 == &dword_60C97DE8 )
    return 1;
  if ( ((unsigned int)dword_60C97C68 & ~(1614491420 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C97C68) )
    {
      dword_60C97C64 = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C97C68);
    }
  }
  return a2 == &dword_60C97C64 || sub_60026DC8(a2);
}
