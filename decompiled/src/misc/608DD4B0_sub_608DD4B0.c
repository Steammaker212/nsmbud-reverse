/* sub_608DD4B0
 * address: 0x608DD4B0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608DD4B0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CCEB14 & ~(1619907784 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEB14) )
  {
    dword_60CCEB10 = (int)&off_60C5BCE4;
    _cxa_guard_release(&dword_60CCEB14);
  }
  if ( a2 == &dword_60CCEB10 )
    return 1;
  if ( ((unsigned int)&dword_60CCEB04 & ~(1619907876 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CCEB04) )
    {
      dword_60CCEB00 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60CCEB04);
    }
  }
  return a2 == &dword_60CCEB00;
}
