/* sub_608DD334
 * address: 0x608DD334   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608DD334(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CCEB0C & ~(1619907404 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEB0C) )
  {
    dword_60CCEB08 = (int)&off_60C5BCE4;
    _cxa_guard_release(&dword_60CCEB0C);
  }
  if ( a2 == &dword_60CCEB08 )
    return 1;
  if ( ((unsigned int)&dword_60CCEB04 & ~(1619907496 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CCEB04) )
    {
      dword_60CCEB00 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60CCEB04);
    }
  }
  return a2 == &dword_60CCEB00;
}
