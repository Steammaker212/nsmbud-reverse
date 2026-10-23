/* sub_60908DF0
 * address: 0x60908DF0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60908DF0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8C22C & ~(1620086280 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C22C) )
  {
    dword_60C8C228 = (int)&off_60BD84B4;
    _cxa_guard_release(&dword_60C8C22C);
  }
  if ( a2 == &dword_60C8C228 )
    return 1;
  if ( ((unsigned int)&dword_60C8C234 & ~(1620086372 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8C234) )
    {
      dword_60C8C230 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C8C234);
    }
  }
  return a2 == &dword_60C8C230;
}
