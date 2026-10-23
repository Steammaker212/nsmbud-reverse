/* sub_608E8CD0
 * address: 0x608E8CD0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608E8CD0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CCEBD8 & ~(1619954920 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEBD8) )
  {
    dword_60CCEBD4 = (int)&off_60C2A398;
    _cxa_guard_release(&dword_60CCEBD8);
  }
  if ( a2 == &dword_60CCEBD4 )
    return 1;
  if ( ((unsigned int)&dword_60CC6C1C & ~(1619955012 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CC6C1C) )
    {
      dword_60CC6C18 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60CC6C1C);
    }
  }
  return a2 == &dword_60CC6C18;
}
