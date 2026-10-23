/* sub_600EDD70
 * address: 0x600EDD70   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600EDD70(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C836A8 & ~(1611586952 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C836A8) )
  {
    dword_60C836A4 = (int)&off_60BC9BA0;
    _cxa_guard_release(&dword_60C836A8);
  }
  if ( a2 == &dword_60C836A4 )
    return 1;
  if ( ((unsigned int)&dword_60C836B0 & ~(1611587044 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C836B0) )
    {
      dword_60C836AC = (int)&off_60BC8314;
      _cxa_guard_release(&dword_60C836B0);
    }
  }
  return a2 == &dword_60C836AC || sub_600A1528(a2);
}
