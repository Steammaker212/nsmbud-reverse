/* sub_602A0A00
 * address: 0x602A0A00   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602A0A00(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C902FC & ~(1613367832 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C902FC) )
  {
    dword_60C902F8 = (int)&off_60BE24D4;
    _cxa_guard_release(&dword_60C902FC);
  }
  if ( a2 == &dword_60C902F8 )
    return 1;
  if ( ((unsigned int)&dword_60C90304 & ~(1613367924 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C90304) )
    {
      dword_60C90300 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C90304);
    }
  }
  return a2 == &dword_60C90300 || sub_60026DC8(a2);
}
