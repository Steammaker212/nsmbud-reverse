/* sub_606779B8
 * address: 0x606779B8   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606779B8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB7CF8 & ~(1617394128 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB7CF8) )
  {
    dword_60CB7CF4 = (int)&off_60BDE360;
    _cxa_guard_release(&dword_60CB7CF8);
  }
  if ( a2 == &dword_60CB7CF4 )
    return 1;
  if ( ((unsigned int)&dword_60C8F38C & ~(1617394220 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F38C) )
  {
    dword_60C8F388 = (int)&off_60BDE36C;
    _cxa_guard_release(&dword_60C8F38C);
  }
  if ( a2 == &dword_60C8F388 )
    return 1;
  if ( ((unsigned int)&dword_60C8F394 & ~(1617394312 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8F394) )
    {
      dword_60C8F390 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C8F394);
    }
  }
  return a2 == &dword_60C8F390 || sub_60027FB0(a2);
}
