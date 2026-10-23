/* sub_608E22DC
 * address: 0x608E22DC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608E22DC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CCEBB0 & ~(1619927796 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEBB0) )
  {
    dword_60CCEBAC = (int)&off_60C5BEF8;
    _cxa_guard_release(&dword_60CCEBB0);
  }
  if ( a2 == &dword_60CCEBAC )
    return 1;
  if ( ((unsigned int)&dword_60CCEBA8 & ~(1619927888 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CCEBA8) )
    {
      dword_60CCEBA4 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60CCEBA8);
    }
  }
  return a2 == &dword_60CCEBA4;
}
