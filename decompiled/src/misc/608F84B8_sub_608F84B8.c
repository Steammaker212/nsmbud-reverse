/* sub_608F84B8
 * address: 0x608F84B8   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608F84B8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CCEE70 & ~(1620018384 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEE70) )
  {
    dword_60CCEE6C = (int)&off_60C5C940;
    _cxa_guard_release(&dword_60CCEE70);
  }
  if ( a2 == &dword_60CCEE6C )
    return 1;
  if ( ((unsigned int)&dword_60CCEE78 & ~(1620018476 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CCEE78) )
    {
      dword_60CCEE74 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60CCEE78);
    }
  }
  return a2 == &dword_60CCEE74;
}
